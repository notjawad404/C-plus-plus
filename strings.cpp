// A program that reads 2 strings and prints their lengths then perform concatenation, and then the first letter of each string swapped.

#include <iostream>
#include <string>
using namespace std;

int main() {

    string s1, s2, str1, str2;
    cin>>s1;
    cin>>s2;
    char c1 = s1[0];
    char c2 = s2[0];
    //Print size of both strings
    cout<<s1.size()<<" "<<s2.size()<<endl;

    //Concatenate both strings
    cout<<s1+s2<<endl;
    for(int i= 1; i< s1.size(); i++){
        str1 += s1[i];
    }
    for(int i= 1; i< s2.size(); i++){
        str2 += s2[i];
    }
    //Swap first letter of both strings
    cout<<c2+str1<<" "<<c1+str2;
    
    
  
    return 0;
}