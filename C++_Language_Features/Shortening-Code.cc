#include <bits/stdc++.h>
using namespace std;

// TYPE NAMES
// The 'typedef' command can be used to give a short name to a data type. e.g we
// can use ll instead of 'long long'
typedef long long ll;

// It can even be used for more complex types:
typedef vector<int> vi;
typedef pair<int, int> pi;

// MACROS
// Another way to shorten code is to use macros. A macro specifies that certain
// strings in the code will be changed before the compilation. In C++, macros
// are defined using the '#define' keyword. For example, we can define:
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define C clear

// A macro can also have parameters, which makes it possible to shorten loops
// and other structures. E.g:
#define REP(i, a, b) for (int i = a; i <= b; i++)

int main() {
  long long a = 123456789;
  ll b = 123456789;
  cout << a * b << "\n";

  int x1 = 1, x2 = 2, y1 = 3, y2 = 4;
  vi v{x1, x2, y1, y2}, z{x1, y1, x2, y2};

  v.C(); // Same thing as "v.clear();"
  z.clear();

  REP(i, 1, b) {
    cout << "Dummy code"
         << "\n";
    if (i == 5) {
      break;
    }
  }
}
