// Description: Input a number and then input that many integers in an array and then print element of array first in normal order and than in reverse order as a single line of space-separated numbers.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int num, num2;

    cin >> num;
    vector<int> arr(num);

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {

        if (i == num - 1)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
    for (int i = num - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
