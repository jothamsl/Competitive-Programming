#include <iostream>
#include <string>
using namespace std;

int alice(int value, int len);
int bob(int x);

int main(void) {
  int integer;
  scanf("%d", &integer);

  // Find length of integer
  int int_length = sizeof(integer) / 4;

  while (int_length != 1) {
    // Alice digit switch
    integer = alice(integer, int_length);

    // Bob digit remove
    integer = bob(integer);

    // Bob's digit removal reduces size of the integer
    int_length = sizeof(integer) / 4;
  }
}
