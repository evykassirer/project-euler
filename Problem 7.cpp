/* EVY KASSIRER
Problem 7 */
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

NODE *makeOddList(int length){
    NODE *head = NULL;
    if(length%2 == 0)  length--;
    for(int i = length; i > 1; i-=2){
        head = cons(i, head);  
    }    
    return head;
} 

NODE *removeMultiples(NODE *head, int n){
    NODE *node = head;
    while(node && node->val != n) node = node->next;
    node = node->next;
    while(node){
        if(node->val % n == 0){
            node = remove(node);
        }
        else{
            node = node->next;    
        } 
    }    
    return head;
}   

int nthPrime(NODE *list, int n){
    if(n==1) return 2;
    n--;
    while(n > 1){
        if(!list){
            cout << "ran out of numbers at " << n << "!";
            return 1;
        }
        n--;
        list = list->next;
    }
    if(!list){
            cout << "ran out of numbers at " << n << "!";
            return 1;
    }
    return list->val;
}
        
int main() {
    //NODE *list = cons(3, remove(cons(4, cons(5, NULL))));
    //print_list(makelist(20));
    
    NODE *list = makeOddList(105000);
    NODE *node = list;
    while(node){
        list = removeMultiples(list, node->val);
        node = node->next;
    }
    
    int answ = nthPrime(list, 10001);
    cout << answ;
    
    fflush(stdin);
    getchar();
    return 0;
}
