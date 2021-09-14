#include <bits/stdc++.h>

using namespace std;
int main()
{
    
    queue <int> steck;
    queue <int> steck2;

    int n = 0;
    for ( int i = 0 ; i < 5; ++i){  
        int x ;
        cin >> x;
        steck.push(x);
    }
    for ( int i = 0 ; i < 5; ++i){  
        int x ;
        cin >> x;
        steck2.push(x);
    }

        while (!steck.empty() and !steck2.empty()){
            

            
            if (n >= 1000000){
                cout<<"botva"<<endl;
                break;
            }
            if (steck.front() == 0 and  steck2.front() == 9){
                steck.push(steck.front());
                steck.push(steck2.front());
            }
            else if (steck.front() == 9 and  steck2.front() == 0){
            
                steck2.push(steck.front());
                steck2.push(steck2.front());

            }
            else if (steck.front() > steck2.front()){
                
                steck.push(steck.front());
                steck.push(steck2.front());

            }
            else if (steck.front() < steck2.front())
            {   

                steck2.push(steck.front());
                steck2.push(steck2.front());
            }
            
            steck.pop();
            steck2.pop();



           ++n;  
    }
    if (steck.size() > steck2.size()){
        
        cout<<"first "<<n;
    }
    else{
        cout<<"second "<<n<<endl;
    }

    return 0;
}