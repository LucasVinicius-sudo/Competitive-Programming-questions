#include <iostream>
using namespace std;


void matrice(int num,int count_one_linha)
{


  int count_one = 0;
  int matrix[num][3];
  for(int i = 0;i < num;i++)
  {

    count_one = 0;

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
}

int main()
{
  int num;
  cin >> num;
  int count;
  int count_lone_inha[num];
  matrice(num,0);



  return 0;
}
