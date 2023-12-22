#include "main.h"
/**
* _isupper  - This checks for uppercase character
* @c: The function parameter
* Return: 1 if it is uppercase 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

else
	return (0);
}
