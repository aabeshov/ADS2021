#include <iostream>
using namespace std;



int IsPrime(int n){
    int d = 2;
    while (d*d <=n and n%d !=0)
    {
        d++;
    }
    return d*d > n;
}





int main()
{
    int n;
    cin>> n;
    if (IsPrime(n)) cout<<"prime";
    else cout<<"composite";
    return 0;
}