#include <bits/stdc++.h>
using namespace std;

int main(void) {
  // This is a C/C++ array. The code below is a shorcut for initializing arrays
  // with values using braces:
  int arr[] = {1, 2, 3, 4};

  // The length of the array can be ommited because it can be inferred from the
  // number of elements in the braces at compile time.

  // To access array elements, Use square brackets to enclose the desired index.
  // Array indexing is zero based in C++ and most programming languages

  printf("The third element is %d \n", arr[2]);
  arr[2] = 20;
  cout << "The third element is now " << arr[2] << "\n";
}
