#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

<<<<<<< HEAD
	return (0);
=======
		return (0);
>>>>>>> df08ef483adef147677776f888ab3a5464c7f8ec
}
