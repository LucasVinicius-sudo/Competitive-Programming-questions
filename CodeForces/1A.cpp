#include <iostream>
#include<cmath>
using namespace std;

void theatre(unsigned long long n , unsigned long long m , unsigned long long a)
{
  unsigned long long int ans = 0;
  ans = ceil((double)n/a) * ceil((double)m/a);
  cout << ans;
}


int  main()
{
  unsigned long long n;
  unsigned long long m;
  unsigned long long a;
  cin >> n >> m >> a;
  theatre(n,m,a);
  return 0;
}
