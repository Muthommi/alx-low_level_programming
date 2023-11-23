#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: count of arguments passed
 * @argv: array containing command line argument
 * Return: (0) when successful
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
