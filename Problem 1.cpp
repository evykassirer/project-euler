/* EVY KASSIRER
Project Euler Problem 1 */
#include<stdio.h>
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {
    int sum = 0; //the answer
    
    for(int i = 0; i < 1000; i++){
        if(i%3 == 0 || i%5 ==0) sum += i;
    }

    cout << sum;

    fflush(stdin);
    getchar();
    return 0;
}
