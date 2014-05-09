/* EVY KASSIRER
Problem 3 */
#include<stdio.h>
#include<iostream>
#include<string>
#include<fstream>
#include<math.h>

using namespace std;

int remainder(int i){
    //note we can write our big number as {600, 851, 475, 143}
    int num[4] = {600, 851, 475, 143};
    int remainder = 0;
    int index = 0;
    while(index < 4){
        remainder *= 1000;
        remainder = (remainder+num[index])%i;
        index++;
    }
    return remainder;
}

bool isprime(int n){
    for(int i = 2; i < sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}   

int main() {
    //note that 775146 is the integer square root of 600851475143
    bool prime = true;
    int divisor = 775146;
    while(prime == true){
        divisor--;
        if(divisor%2 != 0 && remainder(divisor) == 0){
            if(isprime(divisor)) prime = false;
        }
    }
    cout << divisor;
    fflush(stdin);
    getchar();
    return 0;
}
