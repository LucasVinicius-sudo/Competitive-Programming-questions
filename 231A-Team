#include <iostream>
using namespace std;


void matrice(int num,int count_one_linha[])
{


  int count_one = 0;
  int count_one_total = 0;
  int matrix[num][3];
  for(int i = 0;i < num;i++)
  {

    count_one = 0;
    count_one_linha[i] = 0;
    for(int j = 0;j < 3;j++)
    {
      cin >> matrix[i][j];
      if(matrix[i][j] == 1)
      {
        count_one = count_one + 1;
        count_one_linha[i] = count_one;

      }

    }

  }
  for(int i = 0;i < num;i++)
  {
    if(count_one_linha[i] == 2 || count_one_linha[i] == 3)
    {
      count_one_total = count_one_total + 1;
    }
    else
    {
      count_one_total = count_one_total;
    }
  }
  cout << count_one_total << endl;
}

int main()
{
  int num;
  cin >> num;
  int count;
  int count_lone_inha[num];
  matrice(num,count_lone_inha);



  return 0;
}
