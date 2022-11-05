
#include "libft.h"
#include <stdio.h>

int main() 
{
  char *str = "**Hello **World !**";
  char *to_trim = "*";
  
  printf("\n%s\n\n", ft_strtrim(str, to_trim)); 
  return 0;
}