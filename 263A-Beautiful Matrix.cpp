#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    for(i=1; i<=5; i++){
        for(j=1;j<=5; j++){

            cin>>n;
            if(n==1){
                int ans= abs(3-i)+ abs(3-j);
                cout <<ans<<endl;
            }
        }
    }
}
