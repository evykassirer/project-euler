/* EVY KASSIRER
Problem 5*/
#include<stdio.h>
#include<iostream>
#include<string>
#include<fstream>
#include<math.h>

using namespace std;

//highest power of n less than 20
int highpow(int n){
    int i = n;
    while(i <= 20) i *= n;
    i /= n;
    return i;
}

bool isprime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return false;    
    }
    return true;
}

int main() {
    int ans = 1;
    for(int i = 2; i <= 20; i++){
        if(isprime(i)) ans *= highpow(i);
    }
    cout << ans;         
    fflush(stdin);
    getchar();
    return 0;
}
