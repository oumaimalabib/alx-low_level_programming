#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes.
 *
 * @file: file's name buffer is Storing chars for.
 *
 * Return: The pointer to the newly-allocated buffer
 *
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - file's descriptors is Closed.
 *
 * @fd: closed the file descriptor.
 */
void close_file(int fd)
{
	int CL;

	CL = close(fd);

	if (CL == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - the contents of file to another must be copied.
 *
 * @argc: arguments num supplied to a program
 *
 * @argv:its an array to arguments.
 *
 * Return: 0 on success.
 *
 * Description: In case the arg count is incorrect - exit code 97.
 *In case file_from do not exist or
 *              cannot be read - exit code 98.
 *              In case file_to wont be created or written to - exit code 99.
 *             In case file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, A, O;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	A = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || A == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		O = write(to, buffer, A);
		if (to == -1 || O == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		A = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (A > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
