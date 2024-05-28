#include<iostream>
using namespace std;
int main()
{
    int n;
    string y;
    cin>>n;
    while(n--){
        cin>>y;
        if(y.size()>10){
            cout<<y[0]<<y.size()-2<<y[y.size()-1]<<endl;
        }
        else
            cout<<y<<endl;
    }
    return 0;
}
