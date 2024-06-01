#include<iostream>
using namespace std;
int main()
{
    int n,k,i,t=0;
    cin>>n>>k;
    int x[n];
        for(i=0;i<n;i++)
           cin>>x[i];
           k=k-1;
           for(i=0;i<n;i++){
           if(x[i]>=x[k] &&x[i]>0)
            t++;


        }
    cout<<t;
    return 0;


}
