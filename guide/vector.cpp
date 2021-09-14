#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> MyVec;
    MyVec.push_back(15);
    
    MyVec[1] = 100;

    MyVec[2] = 500;

    for (int i = 0; i < MyVec.size(); i++)
    {
        cout<< MyVec.at(2) << " ";
    }
    
    return 0;
}