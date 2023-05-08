#include "main.h"

/**
 * append_text_to_file - in the end of file append a text.
 *
 * @filename: pointer for the file's name
 *
 * @text_content: add to the end of the file the string.
 *
 * Return: In case the function fais or filename is NULL - -1.
 *         in case the file do not exist the user
 *lacks write permissions - -1 Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int Z, w, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	Z = open(filename, O_WRONLY | O_APPEND);
	w = write(Z, text_content, leng);

	if (Z == -1 || w == -1)
		return (-1);

	close(Z);

	return (1);
}
