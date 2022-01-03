#include <iostream>
using namespace std;

int main() {
  // initialize
  int a1[5] = {2, 1, 5};

  // Length
  int a1_length = sizeof(a1) / sizeof(a1[0]);
  cout << "Size of a1 is " << a1_length << "\n";

  // Iterate all elements
  for (int i = 0; i < a1_length; ++i) {
    cout << " " << a1[i];
  }

  cout << endl;

  // Modify element
  a1[0] = 4;

  // Sort
  sort(a1, a1 + a1_length);
}
