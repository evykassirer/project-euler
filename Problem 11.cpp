/* EVY KASSIRER
Problem 11 */
#include<stdio.h>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int main() {
    string line;
    const int LENGTH = 20;
    
    int a[LENGTH][LENGTH];
    
    int w, x, y, z; //first second third fourth 
    
    int answ = 0;
    
    ifstream myfile("Problem 11 input.txt");
    if (myfile.is_open()){
               
        for(int i = 0; i < LENGTH; i++){
            getline(myfile,line);
            for(int j = 0; j < LENGTH; j++){
                a[i][j] = atoi(line.substr(j*3, 3).c_str());
                //cout << a[i][j] << " ";
            }
            //cout << endl;
        }
        myfile.close();
    }
    else cout << "Unable to open file"; 
    
    int current = 0;
    for(int i = 0; i < LENGTH; i++){
        for(int j = 0; j+3 < LENGTH; j++){
            current = a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3];
            if(current > answ) answ = current;
        }
    }
    for(int j = 0; j < LENGTH; j++){
        for(int i = 0; i+3 < LENGTH; i++){
            current = a[i][j] * a[i+1][j] * a[i+2][j] * a[i+3][j];
            if(current > answ) answ = current;
        }
    }
    for(int i = 0; i+3 < LENGTH; i++){
        for(int j = 0; j+3 < LENGTH; j++){
            current = a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3];
            if(current > answ) answ = current;
        }
    }
    for(int i = 3; i < LENGTH; i++){
        for(int j = 0; j+3 < LENGTH; j++){
            current = a[i][j] * a[i-1][j+1] * a[i-2][j+2] * a[i-3][j+3];
            if(current > answ) answ = current;
        }
    }
                
    cout << answ;
    
    fflush(stdin);
    getchar();
    return 0;
}
