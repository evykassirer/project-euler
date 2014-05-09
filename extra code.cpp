/* EVY KASSIRER
Problem 3 */
#include<stdio.h>
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct NODE{
    int val;
    NODE* next;
    NODE* prev;
};


NODE *cons(int i, NODE *rest){
    NODE *n = new NODE;
    n->val = i;
    n->next = rest;
    n->prev = NULL;
    if(rest != NULL) rest->prev = n;
    return n;
}

NODE *remove(NODE *node){
    if(node->prev){
        node->prev->next = node->next;
    }
    if(node->next){
        node->next->prev = node->prev;
    }
    NODE *temp = node->next;
    delete node;
    return temp;
}

void print_list(NODE *node){
    while(node != NULL){
        cout << node->val << " ";
        node = node->next;
    }
}

NODE *makelist(int length){
    NODE *head = NULL;
    for(int i = length; i > 0; i--){
        head = cons(i, head);  
    }    
    return head;
}        

int main() {
    //NODE *list = cons(3, remove(cons(4, cons(5, NULL))));
    //print_list(makelist(20));

    //note that 775146 is the square root of 600851475143
    
    NODE *list = makelist(775146);
    
    
    fflush(stdin);
    getchar();
    return 0;
}
