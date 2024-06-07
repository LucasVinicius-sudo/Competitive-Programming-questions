#include <iostream>
#include <string>
using namespace std;



int main()
{
    string str;
    getline(cin,str);
    int n = str.length();
    putchar(toupper(str[0]));
    for(int i = 1;i < n;i++)
    {
        cout << str[i];
    }
    return 0;
}