#include <iostream>

using namespace std;

int main()
{
  long long int n,sum=0,a[10];;
   cin>>n;

   for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<n;i++)
      sum=sum+a[i];

    cout<<sum<<endl;
    return 0;
}
