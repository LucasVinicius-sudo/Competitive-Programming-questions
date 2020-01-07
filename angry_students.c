#include <stdio.h>
void ler_array(int i,int n,char a[])
{
    if(i == n)
    {
  	   return;
    }
    else
    {
      scanf(" %c",&a[i]);
      ler_array(i+1,n,a);
    }
}
void att(int i,int n,char a[],char i_anterior[])
{
	 if(i == n)
	  {
	     return;
	    }
	     else
	      {
		        i_anterior[i] = a[i];
		          if(i_anterior[i] == 'P' && i_anterior[i-1] == 'A')
		            {
		                a[i] = 'A';
		                att(i+1,n,a,i_anterior);
		            }
		            else
		            {
		              att(i+1,n,a,i_anterior);
		            }
	      }
}
void transforme(int i,int n,char a[],int cont,int minutos,char c[])
{
	 if(i == n && cont == 0)
	  {
	     printf("%d\n",minutos);
	      return;
	  }
	 else if(i == n && cont != 0)
	  {
	
	  att(0,n,a,c);
	  transforme(0,n,a,0,minutos+1,c);
	 }
	 else if(i == 0)
	   {
	   transforme(i+1,n,a,cont,minutos,c);
	   }
	  else if(i > 0)
	   {
		     if(a[i] == 'P' && a[i-1] == 'A')
		        {
		        transforme(i+1,n,a,cont+1,minutos,c);
		        }
		          else
		        {
		        transforme(i+1,n,a,cont,minutos,c);
		        }
	    }
}


void multi(int i,int n,int number)
{int r;
 int resu;

	  if(i == n)
	 {
	  return;
	 }
	 else
	 {
	 scanf("%d",&number);
	 char b[number];
	 char c[number];
	 ler_array(0,number,b);
	 transforme(0,number,b,0,0,c);
	
	 multi(i+1,n,number);
}
}

int main(void)
{
 int n;
 scanf("%d",&n);
 multi(0,n,0);
}
