/* EVY KASSIRER
Problem 8 */
#include<stdio.h>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int main() {
    string line;
    int i = 0;
    int v, w, x, y, z; //first second third fourth fifth
    v = 0;
    w = 0;
    x = 0;
    y = 0;
    z = 0;
    
    int answ = 0;
    
    ifstream myfile("Problem 8 input.txt");
    if (myfile.is_open()){
        getline(myfile,line);
        v = atoi(line.substr(0, 1).c_str());
        w = atoi(line.substr(1, 1).c_str());
        x = atoi(line.substr(2, 1).c_str());
        y = atoi(line.substr(3, 1).c_str());
        z = atoi(line.substr(4, 1).c_str());
        answ = v*w*x*y*z;
        cout << v << " " << w << " " << x << " " << y << " " << z << " " << answ << endl;
        
        for(i = 5; i < line.length(); i++){
            v = w;
            w = x;
            x = y;
            y = z;
            z = atoi(line.substr(i, 1).c_str());
            if(v*w*x*y*z > answ) {
                answ = v*w*x*y*z;
                cout << answ << endl;
            }
        }
        
        while (getline(myfile,line)){
            for(i = 5; i < line.length(); i++){
                v = w;
                w = x;
                x = y;
                y = z;
                z = atoi(line.substr(i, 1).c_str());
                if(v*w*x*y*z > answ) {
                    answ = v*w*x*y*z;
                    cout << answ << endl;
                }
            }
        }
        myfile.close();
    }
    else cout << "Unable to open file"; 
                
    cout << answ;
    
    fflush(stdin);
    getchar();
    return 0;
}
