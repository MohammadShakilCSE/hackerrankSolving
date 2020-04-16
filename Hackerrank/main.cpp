#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int>a;
    vector<int>b;
    int alice=0,bob=0;
    for(int i=0;i<3;i++){
       cin>>a[i];
    }
    for(int j=0;j<3;j++){
       cin>>b[j];
    }
    for(int i=0;i<a.size();i++){
        if(a[i]>b[i])
            alice++;
        else if(a[i]<b[i])
            bob++;
        else
            return 0;
    }
    cout<<alice<<" "<<bob<<endl;

    return 0;
}

