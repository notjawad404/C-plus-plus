// Description: Use pointers to compute the sum and absolute difference of two integers.

#include <iostream>
#include <cmath>
using namespace std;

void update(int *a, int *b)
{
    int sum = *a + *b;
    int differ = abs(*a - *b);
    cout << sum << endl;
    cout << differ << endl;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> a >> b;
    update(pa, pb);

    return 0;
}