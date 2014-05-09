/* EVY KASSIRER
Problem 6*/
#include<stdio.h>
#include<iostream>
#include<string>
#include<fstream>
#include<math.h>

using namespace std;


int main() {
    int sumsqr = 0;
    for(int i = 1; i <= 100; i++){
        sumsqr += i*i;
    }
    cout << sumsqr << endl;  
    
    int sqrsum = (100*101/2)*(100*101/2);    
    cout << sqrsum << endl;   
    
    cout << sqrsum - sumsqr;
    
    //this is pretty brute force, but also doesn't take very long to code or run
          
    fflush(stdin);
    getchar();
    return 0;
}
