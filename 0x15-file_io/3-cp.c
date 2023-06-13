#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message to stderr.
 * @message: The error message to print.
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
}

/**
 * copy_file - Copies the content of one file to another.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 */
void copy_file(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t read_bytes, write_bytes;

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1)
		{
			print_error("Error: Can't write to file");
			exit(99);
		}
	}

	if (read_bytes == -1)
	{
		print_error("Error: Can't read from file");
		exit(98);
	}
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or the corresponding exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		return (97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file");
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		print_error("Error: Can't write to file");
		exit(99);
	}

	copy_file(fd_from, fd_to);

	if (close(fd_from) == -1)
	{
		print_error("Error: Can't close file descriptor");
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		print_error("Error: Can't close file descriptor");
		exit(100);
	}

	return (0);
}
