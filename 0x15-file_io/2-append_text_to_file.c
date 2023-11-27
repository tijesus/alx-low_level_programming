#include "main.h"
/**
 * append_text_to_file - update text into a file
 * @filename: the name of the file
 * @text_content: the contents to append into the file
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, no_write, count_text;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (count_text = 0; text_content[count_text]; count_text++)
			;
		no_write = write(file_des, text_content, count_text);
		if (no_write == -1)
			return (-1);
	}
	close(file_des);
	return	(1);
}
