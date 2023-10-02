#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

// maps store all the value in sorted manner 
//                                     TIME COMPLEXITY  
// for (ordered) maps best,worst and avg tc is log n
// for (unordered) maps best and avg (most of the time) tc is O(1) or constant but worst tc is O(n)
// for worst cases in unordered maps the overall tc of code will be O(n^2) as mpp is running inside for loop


//                                   DIVISION METHOD AND COLLISONS
/*
    we have a restriction of n size of array such that arr[n] is max but we have values that are very large than
    n such as n^10 so these values are stored in map by division method i.e.
    arr[i]%n and then we store it in the corresponding index to the remainder
    when two or more different values have same remainder than collision is observed
    when collision happens then these values are stored at their corresponding indices in a linked list manner
    and then an efficient sorting technique is applied to fetch the desired number.

    NOW THE WORST CASE HAPPENS WHEN ALL THE VALUES OF THE ARRAY ARE COLLIDED AND THEY FORM A HUGE CHAIN IN A 
    SINGLE INDEX 

*/

int main()
{
    int arr[10] = {1,2,3,1,2,3,12};
    
    //pre-computation 
    map<int, int> mpp;
    for (int i = 0; i < 10; i++)
    {
        mpp[arr[i]]++;
    }

    //iterate in the map
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    

    int numOfQueries1;
    int query1;
    cin >> numOfQueries1;
    while (numOfQueries1--)
    {
        cin >> query1;
        //fetch
        cout << mpp[query1] << endl;
    }

    return 0;
}