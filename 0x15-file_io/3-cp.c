#include "main.h"

void handle_error(int init_file, int after_file, char **argv);
/**
 * main - entry point;
 * @argc: count number of arguement
 * @argv: arguement array
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	int init_file, after_file, end_err;
	ssize_t no_read = 1024, no_write;
	char temp_holder[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	init_file = open(argv[1], O_RDONLY);
	after_file = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 0664);
	handle_error(init_file, after_file, argv);

	/*check the number of character to copy*/
	while (no_read == 1024)
	{
		no_read = read(init_file, temp_holder, 1024);
		if (no_read == -1)
			handle_error(-1, 0, argv);
		no_write = write(after_file, temp_holder, 1024);
		if (no_write == -1)
			handle_error(0, -1, argv);
	}
	end_err = close(init_file);
	if (end_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", init_file);
		exit(100);
	}
	end_err = close(after_file);
		if (end_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", init_file);
		exit(100);
	}
	return (0);
}

/**
 * handle_error - function to handle errors
 * @init_file: first file in the command line
 * @after_file: seccond file in the command line
 * @argv: pointer to handle aregument passed to command line
*/
void handle_error(int init_file, int after_file, char *argv[])
{
	if (init_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (after_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}
}
