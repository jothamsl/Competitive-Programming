#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string n_string, nums_string;
  getline(cin, n_string);
  getline(cin, nums_string);

  int n = stoi(n_string); 
  vector<char> nums(nums_string.begin(), nums_string.end());  
}
