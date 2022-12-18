#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  // if one shirt can fit with (N-1) pants,
  // then total permutation is (N-1) * N
  cin >> N; 
  cout << N * (N-1) << "\n";
  return 0;
}
