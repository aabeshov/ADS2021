#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    while(a*b>0){
        if(a>b) {
            
            a=a %b;
            cout<<a<<endl;
        }
        else{ 
            b=b %a;

            cout<<b<<endl;
        }
        }
    cout<<a+b;


    return 0;
}