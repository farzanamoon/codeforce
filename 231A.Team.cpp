#include<iostream>
using namespace std;
int main()
{
    int n,t=0,a,b,c,i,sum;
    cin>>n;
    while(n--){
            sum=0;
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum>=2 && sum<=3)
        {
            t++;
        }
    }
        cout<<t<<endl;

    return 0;
}
