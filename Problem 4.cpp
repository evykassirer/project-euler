/* EVY KASSIRER
Problem 4c++ */
#include<stdio.h>
#include<iostream>
#include<string>
#include<fstream>
#include<math.h>

using namespace std;

int makepalendrome(int i){
    char n[6];
    char half[3];
    itoa(i, half, 10);
    n[0] = half[0];
    n[1] = half[1];
    n[2] = half[2];
    n[3] = half[2];
    n[4] = half[1];
    n[5] = half[0];
    return atoi(n);
}

//check if has 3 digit divisors
bool hasdivisors(int n){
    for(int i = 999; i > 99; i--){
        if(n%i == 0 && (n/i < 1000)) return true;
    }
    return false;
}

int main() {
    int i = 999; //highest half of palendrome
    int n;
    while(true){
        n = makepalendrome(i);
        if(hasdivisors(n)) break;
        i--;
    }
    cout << n;
         
    fflush(stdin);
    getchar();
    return 0;
}
