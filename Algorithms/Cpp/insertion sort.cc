#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector <int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; 
        int j = i - 1;
        while(j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " "; 
}

int main()
{
    vector <int> arr = {5, 2, 4, 6, 1, 3};
    insertion_sort(arr, arr.size());
}