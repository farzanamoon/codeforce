#include<iostream>
using namespace std;
int main()
{
    int k,n,w,i,sum=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
    sum+=k*i;
    }
    if(sum>n)
    cout<<sum-n;
    else
        cout<<0;
    return 0;
}
