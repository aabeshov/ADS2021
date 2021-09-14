#include <iostream>

using namespace std;

struct st{
    int a[100];
    int top;
    st(){
        top = -1;
    }
    int getTop(){
        if ( top == -1) return -1;
        return a[top];
    }
    void push(int x){
        top++;
        a[top] = x;

    }

    void pop(){
        if (top != -1){
        top--;
        }

    }
};

int main(){

    st s;

    int d[];
    int n = sizeof(d) / sizeof(int);


    return 0;
}
