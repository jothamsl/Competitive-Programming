#include <bits/stdc++.h>
using namespace std;

int main(void) {
  // In C++, ordinary arrays are fixed-size structures, and it is not possible
  // to change the size of an array after creating it.
  int n = 10;
  int arr[n];
  arr[0] = 12;

  // A dynamic array is an array whose size can vary or change during the
  // execution of the program. The C++ standard library provides several dynamic
  // arrays, the most useful of them being the vecotor structure

  // VECTORS
  // A vector is a dynamic array that allows us to efficiently add and remove
  // elements at the end of the structure.

  vector<int> v;
  v.push_back(1);      // [1]
  v.push_back(4);      // [1, 4]
  v.push_back(arr[0]); // [1, 4, 12]

  // Elements can then be accessed by normal arrays.
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << "\n";

  // Another way to create a vector is to initilize it with a list of elements:
  vector<int> x = {2, 3, 1, 5};

  // We can also give the number of elements and their initial values:
  vector<int> a(10);    // size 8, initial value 0
  vector<int> b(20, 3); // size 20, intial value 3

  // We looped through a vector above, a shorter way to iterate through a
  // vector:
  for (auto x : v) {
    cout << x << "\n";
  }

  // THe function 'back()' returns the last element of a vector, and the
  // function 'pop_back()' removes the last element:
  vector<int> z = {2, 10, 11, 7};
  cout << z.back() << "\n"; // 7
  v.pop_back();
  cout << z.back() << "\n"; // 7

  // Vectors are implemented so that the push_back() and pop_back() operations
  // work in O(1) time on average. In practice, using a vector is almost as fast
  // as using an ordinary array.
}
