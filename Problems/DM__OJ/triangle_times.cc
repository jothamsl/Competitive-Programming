#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;

  vector<int> s{x + y, y + z, x + z};

  if (x == y && x == z && y == z) {
    cout << "Equilateral"
         << "\n";
    return 0;
  } 
}
