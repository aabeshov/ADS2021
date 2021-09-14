#include <iostream>
#include <string>
using namespace std;
 
struct queue{
    int storage[100];
    int start;
    int finish;
    queue(){
        start = 0;
        finish = 0;
    }
 
    void push_back(int n){
        storage[finish] = n;
        finish++;
    }

    void push_front(int n){
        storage[start] = n;
        start++;
        finish++;
    }
    
    int pop_back(){
        int a = storage[finish-1];
        finish--;
        return a;
    }
 
    
    int pop_front(){
        int a = storage[start];
        start++;
        return a;
    }
 
    int front(){
        return storage[start];
    }


    int back(){
        return storage[finish];
    }
 
    int size(){
        return finish - start;
    }
 
    string clear(){
        finish = 0;
        start = 0;
        return "ok";
    }
 
    string exit(){
        return "bye";
    }
};
 
int main() {
    string a;
    string n;
    queue x;
    string i = "";
    while(cin >> a){
        if(a == "push_back"){
            int n;
            cin >> n;
            x.push_back(n);
            i += "ok\n";
        }

        if(a == "push_front"){
            int n;
            cin >> n;
            x.push_front(n);
            i += "ok\n";
        }



        else if(a == "pop_front" && x.size()!=0){
            n = to_string(x.front());
            x.pop_front();
            i += n + "\n";
        }
        else if(a == "pop_front" && x.size()==0){
            i += "error\n";
        }
        
        
        else if(a == "pop_back" && x.size()!=0){
            n = to_string(x.back());
            x.pop_back();
            i += n + "\n";
        }
        else if(a == "pop_back" && x.size()==0){
            i += "error\n";
        }
        
        
        
        
        if(a == "back" && x.size()!=0){
            n = to_string(x.back());
            i += n + "\n";
        }else if(a == "back" && x.size()==0){
            i += "error\n";
        }
        
        
        
        
        
        
        
        
        
        
        if(a == "front" && x.size()!=0){
            n = to_string(x.front());
            i += n + "\n";
        }else if(a == "front" && x.size()==0){
            i += "error\n";
        }
        if(a == "size"){
            n = to_string(x.size());
            i += n + "\n";
        }
        else if(a == "clear"){
            x.clear();
            i += "ok\n";
        }
        else if(a == "exit"){
            i += "bye\n";
            break;
        }
 
    }
    cout << i;
    return 0;
}