#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

// Better Solution than brute
void myLenMajorEle(vector <int> arr)
{
    int n = arr.size();
    map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }  
    // for (int i = 0; i < n; i++)
    // {
    //     if (mpp[arr[i]] > n/2)
    //     {
    //         cout << mpp[arr[i]];
    //         break;
    //     }
    // }
    for (auto it : mpp)
    {
        if (it.second > n/2)
        {
            cout << it.first;
        }
        // else
        // {
        //     cout << "-1";
        // }       
    }
}


// Optimal Solution using Moore's Voting Algorith 
int lenMajorEle(vector <int> &arr)
{
    int count = 0;
    int ele;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            ele = arr[i];
        }
        else if (ele == arr[i])
        {
            count ++;
        }
        else if (ele != arr[i])
        {
            count --;
        }
    }

    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            count1++;
        }
    }

    if (count1 > n/2)
    {
        return ele;
    }

    return -1;

}


int main()
{
    vector <int> arr = {3,3,2,2,2,2,2,2};
    cout << lenMajorEle(arr);
    return 0;
}