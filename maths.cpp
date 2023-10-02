#include<iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#include <stdio.h>
#include <chrono>

void reversenum()
{
    int x, lastdigit, revn=0;
    string y;
    cin >> x;
    y = to_string(x);
    while (x>0)
    {
        lastdigit = x%10;
        x /= 10;
        revn = revn*10 + lastdigit;
    }
    cout << revn;
}

vector <int> extractNum(int digit)
{
    vector <int> result;
    while (digit > 0)
    {
        result.insert(result.begin(), digit % 10);
        digit /= 10;
    }
    return result;
}

void palindrome(int x)
{
    int lastdigit, revn=0;
    string y;
    int dup = x;
    y = to_string(x);
    while (x>0)
    {
        lastdigit = x%10;
        x /= 10;
        revn = revn*10 + lastdigit;
    }
        if (revn == dup)
        {
            cout << "It is palindrome!! ";
        }
        else
        {
            cout << "It is not palindrome!! ";
        }
}

uint32_t reverseBits(uint32_t n) {
    string x = to_string(n);
    for (int i = 0; i < x.size(); i++)
    {
        swap(x[i], x[x.size()-1-i]);
    }

    long binarynum = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == '1')
        {
            binarynum += pow(2, x.size()-i-1);
            
        }
    }
    return binarynum;
}


int main()
{
    // long x = 00000010100101000001111010011100;
    // // vector <int> arr1 = extractNum(x);
    // // for (auto it : arr1)
    // // {
    // //     cout << it << " ";
    // // }
    // cout << reverseBits(x);
    vector <int> arr1 = extractNum(245);
    for (auto it : arr1)
    {
        cout << it << " ";
    }
    
    double sum = 0;
    double add = 1;

    // Start measuring time
    auto begin = std::chrono::high_resolution_clock::now();
    
    int iterations = 1000*1000*1000;
    for (int i=0; i<iterations; i++) {
        sum += add;
        add /= 2.0;
    }
    
    // Stop measuring time and calculate the elapsed time
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    
    printf("Result: %.3f\n", sum);
    
    printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);
    return 0;
}

// #ifdef LOCAL_DEFINE
//     cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
// #endif