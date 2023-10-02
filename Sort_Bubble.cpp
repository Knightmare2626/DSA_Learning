#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//                                          BUBBLE SORT
// Runs adjacently i.e. compares only two elements which are side by side at a time and pushes the 
//greater (maximum) element to right side
// By doing the above operations the max value element is sorted to the extreme right
// So the sorting continues now only until n-1 index and so on

//                                          TIME COMPLEXITY
// worst and average are O(n^2)
// Best is O(n) when array is already sorted  - {RARELY} 

void BubbleSort(int arr[], int n)
{
    for (int i = n-1; i >= 1; i--)
    {
        int max = i;
        int didswap=0;
        for (int j = 0; j <= i-1; j++) // i - 1 otherwise the last element will be compared with garbage value 
        {
            if (arr[j] < arr[j+1])
            {
                max = j+1;
            }
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                didswap = 1;
            }
            
        }  
        if (didswap == 0)
        {
            break;
        }
        cout << "runs\n";   
    }  
}

int main()
{
     int n = 8;
    int arr[n] = {1,1,2,3,4,4,5,6};
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}