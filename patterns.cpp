#include<iostream>
using namespace std;
//for printing square
void pattern1()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern2()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern3()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}

// my solution
void pattern4()
{
    for (int i = 1; i < 5; i++)
    {
        int k;
        
        for (int j = 1; j <= i; j++)
        {
            
            cout << k+1 << " ";

        }
        cout << endl;
        k+=1;
    }
}

//striver solution
// void pattern4(int row)
// {
//     for (int i = 1; i < row; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

//my solution
void pattern5()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << " * ";
        }
        cout << endl;
        
    }
    
}

//striver solution
// void pattern5()
// {
//     for (int i = 1; i < 5; i++)
//     {
//         for (int j = 0; j < 5-i+1; j++)
//         {
//             cout << " * ";
//         }
//         cout << endl;    
//     }
// }

void pattern6()
{
   for (int i = 1; i <= 5; i++)
    {
        int l;
        for (int j = 5; j >= i; j--)
        {
            cout << l+1 << " ";
            l+=1;
        }
        cout << endl;
        l = 0;
        
    }
}

//pyramid -- imp
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2*n-2*i-1; j++)  //idk what
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
}

void pattern9(int n)
{
    for (int i = 1; i < n; i++)
    {        
        for (int j = 1; j < n; j++)
        {
        if (i == 1 || j == 1 || i == n-1 || j == n-1)
        {
            cout << "*";
        }
        else 
        {
            cout << " ";
        }
        }
        cout << endl;
    }
    
}

int main()
{
    int n;
    cin >> n ;
    pattern6();
}