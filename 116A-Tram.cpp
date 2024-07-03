#include<iostream>
using namespace std;
int main()
{
    int a,b,n,i,sum=0,crnt_passenger=0;
    cin>>n;
    for(i=0;i<n;i++){
    cin>>a>>b;
   crnt_passenger=crnt_passenger-a+b;
   if(crnt_passenger>sum)
    sum=crnt_passenger;
    }
   cout<<sum;
   return 0;
}
