#include "main.h"

/**
*_isalpha - check for lower case letter
*@c : character to check
*Return:1 for alphabets or 0 if otherwise
*/
int _isalpha(int c)
{
return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
