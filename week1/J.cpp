#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n;
    cin>> m >> n ;
    int total = 0;

    if ( m < n){
        for (int i = 1; i <= n; i++)
        {
            if (m%i == 0 and n%i == 0)
            {
                total = i;
            }
            
        }
        
    }
    else
    {
        for (int i = 1; i <= m; i++)
        {
            if (m%i == 0 and n%i == 0)
            {
                total = i;
            }
            
        }
    }
    

    cout<< total<<endl;
    return 0;
}