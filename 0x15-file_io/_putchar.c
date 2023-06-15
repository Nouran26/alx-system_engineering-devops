#include "main.h"
#include <unistd.h>
/**
*_putchar - writes a single character to the standard output.
* @c: The character being printed.
* Return: 1 ( on Success).
* Sets the appropriate error code. On error, returns -1.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
