#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//                                                      INSERTION SORT
// Slowly expands its search area from 0 index and puts elements in its correct order comparing to 
//other elements in its search area. (for more info watch striver or any other video)

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int didswap = 0;
        int j = i;
        while (j > 0 && arr[j-1] > arr[j]) 
        {
            swap(arr[j-1], arr[j]);
            didswap = 1;
        }
                    
        if (didswap == 0)
        {
            break;
        }
        }  
        cout << "runs\n";   
}  


int main()
{
     int n = 6;
    int arr[n] = {1,2,3,4,5,6};
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}