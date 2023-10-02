#include<iostream>
#include <string>
using namespace std;

void printname(int i, int n)
{
    if (i > n) 
    {
        return;
    }
    cout << " name ";
    printname(i+1,n);
}

void printnum(int i, int n)
{
    if (i > n)
    {
        return;
    }
    
    cout << i << " ";
    printnum(i+1, n);
}

// BACKTRACKING METHOD
void printnumbacktrack(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    
    printnumbacktrack(i-1, n);   // think this out
    cout << i << " ";
}

//parameterized method
int sum =0;
void sumofseries(int i, int n)
{
    if (i > n)
    {
       cout << sum << " ";
       return;
    }
    sum += i;
    sumofseries(i+1, n);
    
}

//function method
int sumofseriesfn(int n)
{
    int result;
    if (n==0)
    {
       return 0;
    }
    return n + sumofseriesfn(n-1);
    
}

int factorial(int n)
{
    int result;
    if (n ==1)
    {
       return 1;
    }
    return n * factorial(n-1);
    
}

void reversearray(int l, int n, int array[])
{
    if (l >= n/2) return;
    swap(array[l], array[n-l-1]);
    reversearray(l+1,n,array);
}

int chk_palindrome(string &s, int l, int r)
{
    if (l >= r/2)
    {
        cout << "It is palindrome" << endl;
        return 0;
    }
    else if (s[l] != s[r])
    {
        
        return 1;
    }
        chk_palindrome(s, l+1, r-1);
    
}


int main()
{
    int n, a;
    string s;
    cin >> s;
    // printname(1, n);
    // printnumbacktrack(n,n);
    // cout << sumofseriesfn(n);
    // cout << factorial(n);
    // int array[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array[i];
    // }
    // reversearray(0,n,array);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << array[i] << " ";
    // }
    a = s.size();
    chk_palindrome(s, 0, a);

    return 0;
} 