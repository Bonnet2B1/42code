
#include "libft.h"
#include <stdio.h>

int main() 
{
  char *str = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";
  char *to_trim = " \n\t";
  
  printf("%s", ft_strtrim(str, to_trim)); 
  return 0;
}