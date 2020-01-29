#include <stdio.h>
#include <string.h>
void att_array(char a[],char b[],int i,int cont)
{
  if(i == 5)
  {
    if(strcmp(a,b)==0)
    {
      //printf("S");
      return;
    }
    else
    {
      //printf("N");
    }
    return;
  }
  else if(cont >= 0)
  {
    b[cont] = a[i];
    att_array(a,b,i+1,cont-1);
  }
}
int main(void)
{
  char a[5];
  char b[5];
  scanf("%s",a);
  att_array(a,b,0,4);
  int i = 0;
  printf("%s\n",a);
  printf("%s",b);
  return(0);
}
