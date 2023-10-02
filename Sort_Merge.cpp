#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//                                            MERGE SORT
//
// 1. divides the array into two hypothetical parts 
//2. If two equal parts cannot be done then take small-big or big-small partitions and again divide them in
//the same manner
// 3. Continue the division until only single element arrays are left
// 4. And then compare two (closest) single arrays and merge them in a sorted manner 
// 5. Continue to do so till complete sorted array is produced
// If either side gets completely exhausted or put in in the array then the other side will be 
// merge_adaptivein the array as it was

//                  TIME COMPLEXITY
// The fn is recursive and being divided by 2 every time it runs and the merge fn is running n times
//hence time complexity is O(n log n)(base 2)
// Space complexity due to merge fn is O(n)

//          BY BING AI
// Merge sort is a divide-and-conquer algorithm that works by dividing an array into two halves, 
// sorting each half recursively, and then merging the two sorted halves back together. 
// It is a stable sorting algorithm that has a time complexity of O(n log n) in the worst case. 
// It is also an out-of-place sorting algorithm, meaning that it requires extra space proportional to the size of the input array. 
// Merge sort is often used in external sorting when the data to be sorted is too large to fit into memory.

void merge(vector<int> &arr, int low, int middle, int high)
{
    vector<int> temp;
    int leftpointer = low;
    int rightpointer = middle+1;
    // main loop
    while (leftpointer <= middle && rightpointer <= high)
    {
        if (arr[leftpointer] <= arr[rightpointer])
        {
            temp.push_back(arr[leftpointer]);
            leftpointer++;
        }
        else
        {
            temp.push_back(arr[rightpointer]);
            rightpointer++;
        }
    }
    
    // loop if all right side is exhausted
    while (leftpointer <= middle)
    {
        temp.push_back(arr[leftpointer]);
        leftpointer++;
    }

    // loop if all left side is exhausted
    while (rightpointer <= high)
    {
        temp.push_back(arr[rightpointer]);
        rightpointer++;
    }

    // loop to add the sorted valus in temp array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i-low];
    }
    
    
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high) // Base Condition
    {
        return;
    }
    int middle = (low + high)/2;
    mergeSort(arr, low, middle);
    mergeSort(arr, middle+1, high);
    merge(arr, low, middle, high);
    
}


int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    int n = 6;
    mergeSort(arr, 0, 5);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}