#include<iostream>
using namespace std;
int main()
{
    int x,y,i,year=0;
    cin>>x>>y;

    while(x<=y){
    x*=3;
    y*=2;
    year++;
    }

    cout<<year<<endl;
}
