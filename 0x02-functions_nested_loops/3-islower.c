#include "main.h"

/**
 * _islower - checks if a character is lower case
 *@c: the character
*Return : i if character is lower case , zero if not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
