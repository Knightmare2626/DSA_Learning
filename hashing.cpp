#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//inside main() func we can only declare array int size of max 10^6. otherwise - segmentation error
// globally we can declare array size of max 10^7.
//                                           ASCII IMP VALUES
// 'a' - 97, 'z' - 122 , '0' - 48 

int main()
{
    //                                      NUMBER HASHING      
    // declaration of hash array
    int hashnum[15] = {0};

    // declaration of input array
    int n = 15;
    int arr1[n] = {1,2,3,4,4,5};

    //pre-computation or setting and updating values of hash array
    for (int i = 0; i < n; i++)
    {
        hashnum[arr1[i]] += 1;
    }
    
    //fetching of values;
    int numOfQueries1;
    int query1;
    cin >> numOfQueries1;
    while (numOfQueries1--)
    {
        cin >> query1;
        //fetch
        cout << hashnum[query1] << endl;
    }
    

    //                                       CHARACTER HASHING
    int hash[26] = {0};  // we can also use size of 256 to remove all ascii - 'a'

    string arr2;
    cin >> arr2;
    
        
    //precomputation
    for (int i = 0; i < arr2.size(); i++)
    {
        hash[arr2[i]-'a']++; // hash is an int array therefore it will auto typecast s[i] into ascii int value
    }
    
    int numOfQueries2;
    cin >> numOfQueries2;
    while (numOfQueries2--)
    {
        char query2;
        cin >> query2;
        //fetch
        cout << hash[query2 - 'a'] << endl;
    }

    return 0;
}