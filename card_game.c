include <stdio.h>
void ler_array(int i,int n,int array[])
{
  if(i == n)
  {
  return;
  }
  else
  {
  scanf("%d",&array[i]);
  ler_array(i+1,n,array);
  }
}
 
void row(int i, int max, int *array)
{
    int aux;
 
    if (i == max - 1)
    {
        return;
    }
 
    if (array[i] > array[i + 1])
    {
        aux = array[i + 1];
        array[i + 1] = array[i];
        array[i] = aux;
    }
 
    row(i + 1, max, array);
}
void ordenar(int i, int n, int *array)
{
    if (n == 1)
    {
      return;
    }
      row(0, n, array);
      ordenar(i, n - 1, array);
}
void game(int cartas,int cartas_1,int cartas_2)
{
if(cartas == 0)
  {
   scanf("%d",&cartas);
   scanf("%d",&cartas_1);
   scanf("%d",&cartas_2);
   int a[cartas_1];
   int b[cartas_2];
   game(cartas,cartas_1,cartas_2);
  }
  else if(cartas != 0)
    {
    int i = 0;
    int a[cartas_1];
    int b[cartas_2];
    ler_array(0,cartas_1,a);
    ler_array(0,cartas_2,b);
    ordenar(0,cartas_1,a);
    ordenar(0,cartas_2,b);
    if(a[cartas_1-1] > b[cartas_2-1])
    {
     printf("YES\n");
     return;
    }
    else
    {
    printf("NO\n");
    return;
    }
  }
}
void multi(int i,int n,int cartas_1,int cartas_2)
{
if(i == n)
{
  return;
}
else
  {
   game(0,cartas_1,cartas_2);
   multi(i+1,n,cartas_1,cartas_2);
  }
}
int main(void)
{
  int total;
  scanf("%d",&total);
  int count = 0;
  int cartas_total;
  int cartas_1;
  int cartas_2;
  multi(0,total,cartas_1,cartas_2);
  return(0);
}
