/* EVY KASSIRER
Problem 2 */
#include<stdio.h>
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {
    int sum = 2;
    int current = 2;
    int prev = 1;
    int temp = 0;
        
    //the pattern goes odd even odd  and then repeats, so I only need every third fib
    int iterations = 1;
    
    while(current < 4000000){
        temp = current;
        current += prev;
        prev = temp;
        if(iterations == 3){
            sum += current;
            iterations = 0;
            //cout << sum;
            //system("pause");
        }
        iterations++;
    }
    cout << sum; 

    fflush(stdin);
    getchar();
    return 0;
}
