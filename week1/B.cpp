#include <iostream> 
using namespace std; 
struct queue { 
    long long s[100]; 
    int cursorstart=0;
    int cursorfinal=0; 
    
    void push(long long n){ 
        s[cursorfinal++]=n; 
    } 
    void pop(){ 
        cout<< s[cursorstart]<<endl;
        cursorstart += 1;
        ; 
    } 
    long long front(){ 
        return s[0]; 
    } 
    unsigned size(){ 
        return cursorfinal-cursorstart; 
    } 
    void clear(){ 
        cursorstart=0;
        cursorfinal=0; 
        s[0]=0; 
    } 
}; 
int main() { 
    queue x; 
    string b; 
    long long n; 
    while(cin>>b){   
        if(b=="push"){  
            cin>>n; 
            x.push(n); 
            cout<<"ok"<<endl; 
        } 
        else if(b=="pop"){ 
            if(x.size()==0){
                cout<<"error"<<endl;
            }
            else
            {
                x.pop();
            }
            
            
        }
        else if(b=="front"){ 
                if(x.size()==0){
                cout<<"error"<<endl;
            }
            else cout<<x.front()<<endl;  
        } 
        else if(b=="size"){ 
        cout<<x.size()<<endl; 
        } 
        else if(b=="clear"){ 
            x.clear(); 
            cout<<"ok"<<endl; 
        } 
        else if(b=="exit"){ 
            cout<<"bye"<<endl; 
            break; 
        } 
    } 
    return 0; 
}