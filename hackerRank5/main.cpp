#include <iostream>

using namespace std;

int main()
{
    int hh,mm,ss;
    string s,i;
    while(cin>>hh>>i>>mm>>i>>ss>>s){
        if(s=="PM"){
        hh=12+hh;
    }
    }

    cout<<hh<<":"<<mm<<":"<<ss;
    return 0;
}
