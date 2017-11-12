#include <stdio.h>
#include <string.h>
int main(void)
{
  int i;	
  int k = 0;
  char str[80];
  gets(str);
  i = strlen(str);
  for(int j = 0; j <= i; j++)
  {
    if(str[j] = 'w')
    {
      k++;
    }
  }
  printf("%i", k);
return 0;
}
