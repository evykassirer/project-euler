/* EVY KASSIRER
Problem 10 */
#include<stdio.h>
#include<iostream>
#include<string>
#include<fstream>
#include<math.h>

using namespace std;


//using prime generating sieve from problem 7, but using arrays instead because that's what I should have done originally
//darn Racket for making me like lists so much
  
        
int main() {    
    
    const int LENGTH = 2000001;
    
    //initialize
    static int a[LENGTH];
    
    for(int i = 0; i < LENGTH; i++){
        a[i] = 1;
    }
    a[0] = 0;
    a[1] = 0;
    
    //sieve
    for(int i = 2; i < sqrt(LENGTH); i++){
        if(a[i] == 1){
            for(int j = i+i; j < LENGTH; j += i){
                a[j] = 0;
            }
        }
    }
    
    
    unsigned long int sum = 0;
    int counter = 0; //counts number of times it goes over the max
    for(int i = 0; i < LENGTH; i++){
        if(a[i] == 1) {
            sum += i;
            if(sum > 4000000000) {
                sum -= 4000000000;
                counter++;
            }
        }
    }
      
    
    cout << sum << " + 4000000000*" << counter;
    
    
    fflush(stdin);
    getchar();
    return 0;
}
