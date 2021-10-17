#include <bits/stdc++.h>
using namespace std;

int main() {

  // IO (Input and output) is sometimes a bottleneck in the program.
  // The following makes IO more efficient (Use at the beginning of your main
  // function):
  ios::sync_with_stdio(0);
  cin.tie(0);

  // In C++, the standard streams are cin for input and cout for output. While
  // for C, the standard streams are scanf for input and printf for output. Both
  // streams are available in C++.
  int a, b;
  string x;
  cin >> a >> b >> x;
  cout << a << b << x << endl; // endl, is a the same as '\n'.

  // Using "\n" is faster than endl, because endl wlaways causes a flush
  // operation

  // The C functions 'scanf' and 'printf' are an alternative to the C++ standard
  // streams. They are usually faster, but also more difficule to use.

  // Part of the code above in C++ can be rewritten as:
  int c, d;
  scanf("%d %d", &c, &d);
  printf("%d %d\n", c, d);
  // In C.

  // Sometimes, a program would have to read a whole input line, possibly
  // containing spaces. This can be accomplished by using the 'getline'
  // function.
  string s;
  getline(cin, s);

  // If the amount of data is unknown, use:
  while (cin >> x) {
    // code
  }
  // The while loop above reads elements from the input one after another, until
  // there is no more data available in the input.

  // In some contest systems, files are used for IO. An easy solution for this
  // is to write the code as usual using standard streams, but add the following
  // lines to the beginning of the code:
  freopen("../Weird-Algorithm.cc", "r", stdin);
  freopen("output.txt", "w", stdout);
}
