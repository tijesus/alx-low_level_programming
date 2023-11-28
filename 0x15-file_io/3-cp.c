#include "main.h"

void handle_error(int file_from, int file_to, char *argv[]);
/**
 * main - entry point;
 * @argc: count number of arguement
 * @argv: arguement array
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t no_read = 1024, no_write;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	handle_error(file_from, file_to, argv);

	while (no_read == 1024)
	{
		no_read = read(file_from, buf, 1024);
		if (no_read == -1)
			handle_error(-1, 0, argv);
		no_write = write(file_to, buf, no_read);
			if (no_write == -1)
			handle_error(0, -1, argv);
	}

	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

/**
 * handle_error - function to handle errors
 * @file_from: first file in the command line
 * @file_to: seccond file in the command line
 * @argv: pointer to handle aregument passed to command line
*/
void handle_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
