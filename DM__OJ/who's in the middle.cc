#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> x {a, b, c};
  sort(x.begin(), x.end());
  
  cout << x[1] << "\n";
  return 0;
}
