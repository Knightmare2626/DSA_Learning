#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//                                              SELECTION SORT
// 1. Select minimun from the entire array and put that element in first position
// and the value which was at first position will get exchanged with position of min element
// repeat this process till entire array is checked

// we use swap() to exchange elements
// the swap func goes from 0 index to nth index using for or while loop

//                                                TIME COMPLEXITY
// BEST, WORST AND AVERAGE TIME COMPLEXITY OF SELESCTION SORT IS O(n^2)

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n-2; i++)
    {
        int min = i;
        for (int j = i; j < n-1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            
        }
        int temp;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp; 
        
    }  
}

int main()
{
    
    int n = 6;
    int arr[n] = {13,46,9,20,24,52};
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}