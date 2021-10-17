#include <bits/stdc++.h>
using namespace std;

int main() {
  // The most used integer type in competitive programming is 'int', which is a
  // 32-bit type with a value range of -2^31...2^31-1.

  long long x =
      123456789123456789LL; // The LL means that the type of number is long long

  // Usually contest problems are set so that the type 'long long' is enough.
  // Still, it is good to know that the g++ compiler also provides a 128-bit
  // type: __int128_t

  // MODULAR ARITHMETIC.
  // Sometimes, the answer to a problem is a very large number. It is enough to
  // output it in "modulo m", i.e, the remainder when the answer is divided by m
  // (e.g "modulo 10^9 + 7") The idea is, even if the actual answer is very
  // large, it suffices to use the types 'int' and 'long long'.
  //
  // We denote by "x mod m" the remainder when x is divided by m the remainder
  // when x is divided by m. For example (17 mod 5) = 2, because 17 = 3 * 5 + 2.
  // An important property of remainders is that the following formulas hold:
  //
  // (a + b) mod m = (a mod m + b mod m) mod m
  // (a - b) mod m = (a mod m - b mod m) mod m
  // (a * b) mod m = (a mod m * b mod m) mod m
  //
  // Thus we can take the remainder after every operation, and the numbers will
  // never become too large.

  // For example, the following calculates n!, the factorial of n, modulo m:
  long long a = 1;
  int n = 10, m = 18;
  for (int i = 1; i <= n; i++) {
    a = (a * i) % m;
  }
  cout << a << "\n";
}
