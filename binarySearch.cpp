#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>

typedef long long ll;
using namespace std;

typedef vector <int> vi;
typedef vector <char> vc;
typedef vector <bool> vb;

int binarySearch(vi arr, int k)
{
    sort(arr.begin(),arr.end());
    int low(0), n = arr.size(), high(n-1), mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    return -1;
}

// finds insert position and lower bound
int lowerBound(vi arr, int k)
{
    sort(arr.begin(),arr.end());
    int low(0), n = arr.size(), high(n-1), mid, ans(-1);
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

// finds upper bound
int upperBound(vi arr, int k)
{
    sort(arr.begin(),arr.end());
    int low(0), n = arr.size(), high(n-1), mid, ans(n);
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] > k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vi arr = {0,1,2,3,4,5,6,7,8,9};
    cout << lowerBound(arr, 5);
    cout << lower_bound(arr.begin(),arr.end(),5) - arr.begin();
    return 0;
}