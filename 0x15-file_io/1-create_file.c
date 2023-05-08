#include "main.h"

/**
 * create_file - creat a file.
 * @filename: its a pointer to the file's name
 *
 * @text_content: Write to the file.
 *
 * Return: in case the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int AO, w, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	AO = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(AO, text_content, leng);

	if (AO == -1 || w == -1)
		return (-1);

	close(AO);

	return (1);
}
