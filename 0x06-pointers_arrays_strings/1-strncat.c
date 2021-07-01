#include <stdio.h>
#include <string.h>
/**
*_strncat - prints string
*@str: pointer char
*Return:a pointer to the resulting string dest
*
*/
char *_strncat(char *dest, char *src)
{
  
dest = "Hello ";
  
src = "World!";
  
_strncat (dest, src);
  
printf ("Concatenated String: %s\n", dest);
  
return 0;

}
