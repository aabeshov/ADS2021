#include <iostream>

using namespace std;

struct st{
    private:
        int top;
        int * a;
    public:
        st(int n){
            top = -1;
            a = new int{};
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

        void clear(){
            top = -1;
            cout <<"ok"<<endl;
        }
};

int main(){



    int d[] = {1,5,61,56,2,4};
    int n = sizeof(d) / sizeof(int);

    st s(n);
    s.clear();


    return 0;
}
