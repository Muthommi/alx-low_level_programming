#include <stdio.h>
/**
 * main - prints the name, followed by a new line
 *
 * @argc: count of arguments
 * @argv: array containing command line arguments
 *
 * Return: (0) when successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
