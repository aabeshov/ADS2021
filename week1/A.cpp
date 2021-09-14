#include <bits/stdc++.h>
using namespace std;




struct st{
    private:
        long long top;
        int * a;
    public:
        st(long long n){
            top = -1;
            a = new int{};
        }
        void size(){
            cout << top+1 << endl;
        }

        void back(){
            if ( top == -1) {
                cout<<"error"<<endl;
            }
            else{
                cout<< a[top]<< endl;
        }}

        void push(int x){
                top++;
                a[top] = x;
            
        
            
        }

        void pop(){
            if (top > -1){
            cout << a[top];
            top--;

            }
            else
            {
                cout<<"error"<<endl;
            }

        }

        void clear(){
            top = 0;
            a[top] = 0;
            cout <<"ok"<<endl;
        }
};



















int main()
{   
    st s(100);



    string x;
    long long n;
    while (cin>> x)
    {   
        if (x == "exit"){
            cout<<"bye";
            break;
        }
        else if (x == "size")
        {
            s.size();
        }
        else if (x == "pop")
        {
            s.pop();
        }
        else if (x == "size")
        {
            s.size();
        }
        else if (x == "back")
        {
            s.back();
        }
        else if (x == "push")
        {
            cin >> n;
            s.push(n);
            cout << "ok" <<endl;
        }

    }



    return 0;
}