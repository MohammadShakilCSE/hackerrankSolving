#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int >v;
    int n,value;
    cin>>n;
    vector<int >v2;
    for(int i=0;i<n;i++){
        cin>>value;
        v.push_back(value);
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    return 0;
}
