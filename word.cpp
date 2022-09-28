#include <iostream>
#include <string>
#include <cstddef>
using namespace std;
void word(int num)
{
  for(int i = 0;i < num;i++)
  {
    string nome;
    cin >> nome;

    int tamanho = nome.length();
    if(tamanho <= 10)
    {
      cout << nome << endl;
    }
    else
    {
      char a = nome[0];
      char z = nome[tamanho-1];
      cout << a << tamanho-2 << z << endl;
    }
  }
}
int main()
{
  int num;
  cin >> num;
  word(num);
  return 0;
}
