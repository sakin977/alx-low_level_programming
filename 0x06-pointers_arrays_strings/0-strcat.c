#include <stdio.h>
#include <string.h>
/**
*_strcat - prints string
*@str: pointer char
*Return:a pointer to the resulting string dest
*
*/
char *_strcat(char *dest, char *src)
{
  
dest = "Hello ";
  
src = "World!";
  
_strcat (dest, src);
  
printf ("Concatenated String: %s\n", dest);
  
return 0;

}
