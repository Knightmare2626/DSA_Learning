#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

// visualize the 2d array in a matrix form but the array is actually stored in a linear form inside memory
// formula for converting a ixj matrix to linear array:  (C*i)+j c is the order of square matrix

bool linearSearch(int arr[3][3], int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void rowWiseSum(int arr[3][3], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}
void colWiseSum(int arr[3][3], int row, int col)
{
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

void printLikeAWave(int arr[3][3])
{
    // first print first column from first row then second column from last row
    // [1,2,3]
    // [4,5,6]
    // [7,8,9]
    //output -> 3,2,7,8,12,4,11,1,7;
    for (int col = 0; col < 3; col++)
    {
        if (col%2 == 0)
        {
            for (int row = 0; row < 3; row++)
            {
                cout << arr[row][col] << " ";
            }
            // cout << endl;
        }
        else 
        {
            for (int row = 2; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
            // cout << endl;
        }
        
    }
    
     
}

void SpiralPrint(int arr[3][3])
{
    // [1,2,3]
    // [4,5,6]
    // [7,8,9]
    //output -> 1,2,3,6,9,8,7,4,5;
    // APPROACH:
    //1. PRINT STARTING ROW AND MAKE START ROW THE NEXT ROW
    //2. PRINT ENDING COLUMN AND MAKE END COL THE PREV COL
    //3. PRINT ENDING ROW IN REVERSE AND MAKE END ROW THE PREV ROW
    //4. PRINT STARTING COLUMN REVERSE AND MAKE START COL THE NEXT COL
    for (int i = 0; i < 3; i++)
    {
        cout << arr[0][i] << " ";
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i][2] << " ";
    }
    for (int i = 2; i >= 0; i--)
    {
        cout << arr[2][i] << " ";
    }
    for (int i = 2; i >= 0; i--)
    {
        cout << arr[i][0] << " ";
    }

    
    
}

int maximumWealth(vector<vector<int>>& accounts) {
        int maxRow = accounts.size();
        int maxCol = accounts[0].size();
        int maxi = INT_MIN;
        for (int row = 0; row < maxRow; row++)
        {
            int sum = 0;
            for (int col = 0; col < maxCol; col++)
            {
                sum += accounts[row][col]; 
            }
            if (sum > maxi)
            {
                maxi = sum;
                maxi = max(sum,maxi);
            }
        }
        return maxi;
    }




int main()
{
    

    // taking input row wise
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // taking input column wise
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }
    

    // printing tthe matrix
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << "   ";
    //     }
    //     cout << endl;
    // }

    // int target;
    // cin >> target;
    // if (linearSearch(arr, target))
    // {
    //     cout << "element found";
    // }
    // else 
    // {
    //     cout << " not found";
    // }

    // colWiseSum(arr,3,3);
    // printLikeAWave(arr);
    // SpiralPrint(arr);
    // cout << maximumWealth(arr);
    
    return 0;
}