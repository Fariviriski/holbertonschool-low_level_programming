#include "main.h"
/**
 * create_file - create a file and writes to it
 * @filename: name of file
 * @text_content: what put in file
 * Return: -1 if fail 1 if success
 */

int create_file(const char *filename, char *text_content)
{
	int file, result = 1, count = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		result = write(file, text_content, count);
	}
	if (result == -1)
	return (-1);
	close(file);
	return (1);
}
