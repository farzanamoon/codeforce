#include<iostream>
using namespace std;
int main()
{
    int k,n,w,i,sum=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
    sum+=k*i;
    }
    cout<<sum-n;
    return 0;
}
