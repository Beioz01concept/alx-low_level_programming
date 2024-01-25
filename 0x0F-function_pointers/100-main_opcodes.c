#include <stdlib.h>
#include <stdio.h>


/**
 * print_opcodes - Print the opcodes of a program.
 * @a: Address of the main function or the memory region containing opcodes.
 * @n: Number of bytes to print.
 *
 * Description:
 * function prints the _opcodes of a program from memory address 'a'.
 * prints the hexadecimal representation of each byte separated by space.
 * The total number of bytes printed is specified by the parameter 'n'.
 *
 * @a: Address of the main function or memory region containing opcodes.
 * @n: Number of bytes to print.
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
int i;


	for (i = 0; i < n; i++)
{
	printf("%.2hhx", a[i]);
	if (i < n - 1)
	printf(" ");
	}
	printf("\n");
}


/**
* main - prints the opcodes of its own main function
* @argc: number of arguments passed to the function
* @argv: array of pointers to arguments
*
* Return: always O
*/
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
	printf("Error\n");
	exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}

