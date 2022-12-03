#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  getline(cin, s);

  long count = 1, largest_count = 0;
  char ch;

  for (unsigned int i = 1; i <= s.length(); i++) {
    ch = s[i];
    if (s[i - 1] == ch)
      count++;
    else if (count > largest_count) {
      largest_count = count;
      count = 1;
    }
  }

  cout << largest_count << "\n";
}
