// Create a function to input 4 numbers and return the greatest of them.

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int greater;
    if(a> b && a > c && a> d){
        greater = a;
        return greater;
    }
    else if(b> a && b > c && b > d){
        greater = b;
        return greater;
    }
        else if(c> a && c > b && c > d){
        greater = c;
        return greater;
    }
        else {
        greater = d;
        return greater;
    }
}


int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans;
    
    return 0;
}