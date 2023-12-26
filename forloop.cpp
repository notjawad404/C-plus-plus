// Created a for loop program that takes 2 numbers as input and prints the numbers between them. 
//It print 0-9 in English alphabet and 10 or greater numbers in even or odd.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int num, num2;
    cin>>num>> num2 ;
    
    for(num; num<= num2; num++){
        if(num == 0){
        cout<<"zero"<<endl;
    }
    else if(num == 1){
        cout<<"one"<<endl;
    }
    else if(num == 2){
        cout<<"two"<<endl;
    }
    else if(num == 3){
        cout<<"three"<<endl;
    }
    else if(num == 4){
        cout<<"four"<<endl;
    }
    else if(num == 5){
        cout<<"five"<<endl;
    }
    else if(num == 6){
        cout<<"six"<<endl;
    }
    else if(num == 7){
        cout<<"seven"<<endl;
    }
    else if(num == 8){
        cout<<"eight"<<endl;
    }
    else if(num == 9){
        cout<<"nine"<<endl;
    }
    else if(num%2 == 0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    }
    return 0;
}