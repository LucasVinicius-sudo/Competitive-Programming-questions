#include <stdio.h>
void row(int i,int max,int *array)
{int aux;
  if(i == max-1)
  {
    return;
  }
  if(array[i] < array[i+1])
  {
    aux = array[i+1];
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
void ler_array(int i,int n,int a[])
{
  if(i == n)
  {
    return;
  }
  else
  {
    scanf("%d",&a[i]);
    ler_array(i+1,n,a);
  }
}
int check(int i,int n,int a[],int d,int soma_check)
{
  if(i == n && soma_check <= d)
  {
  return(1);
  }
  else if(soma_check > d)
  {
 
    return(0);
  }
  else if(i != n-1)
  {
    soma_check = soma_check + a[i] + 10;
    return(check(i+1,n,a,d,soma_check));
  }
  else if(i == n-1)
  {
    soma_check = soma_check + a[i];
    //printf("%d\n",soma_check);
    return(check(i+1,n,a,d,soma_check));
  }
}
void music(int i,int n,int a[],int d,int soma_music,int cont_devu)
{
  int r;
  r = check(0,n,a,d,0);
  if(r == 0)
  {
    printf("-1");
    return;
  }
  else
  {
   if(i == n)
   {
     printf("%d",cont_devu);
     return;
   }
   else if(i != n-1)
   {
     soma_music = soma_music + a[i];
     music(i+1,n,a,d,soma_music,cont_devu);
   }
   else if(i == n-1)
   {
     soma_music = soma_music + a[i];
     cont_devu = d - soma_music;
     cont_devu = cont_devu/5;
     music(i+1,n,a,d,soma_music,cont_devu);
   }
  }
}
int main(void)
{
  int n;
  int d;
  scanf("%d %d",&n,&d);
  int a[n];
  ler_array(0,n,a);
  ordernar(0,n,a);
  music(0,n,a,d,0,0);
}
