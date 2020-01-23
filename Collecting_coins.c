#include <stdio.h>
void att_array(int i,int n,int array[],int a,int b,int c)
{
  if(i == n)
  {
    return;
  }
  else if(i == 0)
  {
    array[0] = a;
    att_array(i+1,n,array,a,b,c);
  }
  else if(i == 1)
  {
    array[1] = b;
    att_array(i+1,n,array,a,b,c);
  }
  else if(i == 2)
  {
    array[2] =c;
    att_array(i+1,n,array,a,b,c);
  }
}
void row(int i,int max,int *array)
{
  if(i == max-1)
  {
    return;
  }
  if(array[i] > array[i+1])
  {
    int aux = array[i+1];
    array[i+1] = array[i];
    array[i] = aux;
  }
  row(i+1,max,array);
}
void ordernar(int i,int n,int *array)
{
  if(n == 1)
  {
    return;
  }
  row(0,n,array);
  ordernar(i,n-1,array);
}
void distri(int array[],int n,int cont)
  {
   if(n < 0)
      {
         printf("No\n");
      }
   else if(array[0] < array[2])
      {
        int r = array[2]-array[0];
        array[0] = array[2]-array[0] + array[0];
        distri(array,n-r,cont);
      }
   else if(array[1] < array[2])
      {
      int r = array[2]-array[1];
 
      array[1] = array[2]-array[1] + array[1];
      distri(array,n-r,cont);
  }
   else if(array[0] == array[1] && array[0] == array[2] && n >= 0)
    {
      if(n % 3 == 0)
      {
      
        printf("Yes\n");
        return;
      }
      else
       {
     
        printf("NO\n");
        return;
      }
    }
 
}
void multi(int i,int t,int array[],int n,int a,int b,int c)
{
    if(i == t)
    {
      return;
    }
  else
    {
   
      scanf("%d%d%d%d",&a,&b,&c,&n);
      att_array(0,3,array,a,b,c);
      ordernar(0,3,array);
      distri(array,n,0);
      multi(i+1,t,array,n,a,b,c);
    }
}
int main(void)
{
  scanf("%d",&t);
  int array[3];
  multi(0,t,array,n,a,b,c);
  return(0);
}
