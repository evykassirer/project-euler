/* EVY KASSIRER
Problem 9 */
#include<stdio.h>
#include<iostream>
#include<string>
#include<fstream>
#include<math.h>

using namespace std;


int main() {
    float a, b, c;
    bool answ = false;
    for(a = 1; !answ && a < 1000; a++){
        c =0;
        for(b = 1; !answ && b < 1000; b++){
            c = sqrt(a*a + b*b);
            if(a+b+c == 1000) {
                cout << a << " " << b << " " << c << " " << a+b+c << " " << a*b*c;
                answ =true;
            }
        }
    }
    
  
    
    fflush(stdin);
    getchar();
    return 0;
}
