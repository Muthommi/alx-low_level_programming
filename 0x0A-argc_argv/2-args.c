#include <stdio.h>
/**
 * main - prints all arguments received
 * @argc: count of arguments passed
 * @argv: array containing arguments passed
 * Return: (0) when seccessful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
