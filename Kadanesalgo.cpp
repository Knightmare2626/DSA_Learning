#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//                                                          KADANE'S ALGORITH
//  Declare int max = INT_MIN and then compare with i'th element. If sum is negative < 0 then reset sum to zero 
// it will then move in the array and update max 
// return max at the end of array
// TC - O(N) SC - O(1) 

int maxSubArrSum(vector<int> &arr)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        else if (sum >= maxi)
        {
            maxi = sum;
        }
        else if (maxi <= 0)
        {
            maxi = 0;
        }
        
    }
    return maxi;
    
}

int main()
{
    vector <int> arr = {-2,-3,4,-1,-2,2,5,-1};
    cout << maxSubArrSum(arr);
    return 0;
}