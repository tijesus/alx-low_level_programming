#include "main.h"
/**
 * read_textfile - read text in a particular file
 * @filename: file containg text to be read
 * @letters: text to read
 * Return: a signed integer
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t no_read, no_write;
	char *temp_holder;

	if (filename == NULL)
		return (0);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	temp_holder = malloc(sizeof(char) * letters);
	if (temp_holder == NULL)
	{
		close(file_des);
		return (0);
	}
	no_read = read(file_des, temp_holder, letters);
	if (no_read == -1)
	{
		free(temp_holder);
		close(file_des);
		return (0);
	}
	no_write = write(STDOUT_FILENO, temp_holder, no_read);
	close(file_des);
	free(temp_holder);
	return (no_write);
}
