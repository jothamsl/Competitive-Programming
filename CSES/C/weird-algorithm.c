#include <stdio.h>

// Consider an algorithm that takes as input a positive integer n. If n is even,
// the algorithm divides it by two, and if n is odd, the algorithm multiplies it
// by three and adds one. The algorithm repeats this, until n is one. For
// example, the sequence for n=3 is as follows:
// 3 → 10 → 5 → 16 → 8 → 4 → 2 → 1
// Your task is to simulate the execution of the algorithm for a given value of
// n

void weird(unsigned long long n) {
  // If value is equal to 1, terminate function
  if (n == 1)
    return;
  // If n is divisible by 2, divide by 2
  if (n % 2 == 0) {
    n /= 2;
    printf("%lld ", n); // Print out new value of n
    weird(n);
  } else {
    // Otherwise, multiply by 3 and add 1
    n = n * 3 + 1;
    printf("%lld ", n);
    weird(n);
  }
}

int main(void) {
  // Assign variable to store value of n
  unsigned long long n;
  // Get input value from Standard I/O
  scanf("%lld", &n);
  printf("%lld ", n);
  // Run algorithm
  weird(n);
  printf("\n");
  return 0;
}
