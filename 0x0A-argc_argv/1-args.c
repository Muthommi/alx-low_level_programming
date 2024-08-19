#include <stdio.h>

/**
 * main - Prints the number of arguments passed
 * @argc: The number of command line arguments
 * @argv: The array of command line arguments
 *
 * Return: Always 0 if successful
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
