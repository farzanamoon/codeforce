#include<iostream>
using namespace std;
int main()
{
    int n,i,count=1,ans;
    cin>>n;
    int x[n];
    for(i=0;i<n;i++){
        cin>>x[i];
}

       for(i=0;i<n-1;i++){
        if(x[i]!=x[i+1]){
                count++;

        }

    }
    cout<<count;
    return 0;
}
