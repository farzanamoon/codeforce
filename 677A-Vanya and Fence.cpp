#include<iostream>
using namespace std;
int main()
{
    int n,h,i,in,count1=0,count2=0,sum=0;
    cin>>n>>h;
    for(i=0;i<n;i++){
        cin>>in;
        if(in>h)
            count1++;
        else if(in<=h)
            count2++;


    }
    sum=(count1*2)+(count2*1);
    cout<<sum;

    return 0;
}
