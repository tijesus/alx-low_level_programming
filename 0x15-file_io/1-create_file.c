#include "main.h"
/**
 * create_file - create file
 * @filename: name of file to create
 * @text_content: content of the file
 * Return: 1 on success and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file_des, no_write, text_count;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	/*count the text that using index of the text count array*/
	for (text_count = 0; text_content[text_count]; text_count++)
		;
	no_write = write(file_des, text_content, text_count);
	if (no_write == -1)
		return (-1);
	close(file_des);
	return (1);
}
