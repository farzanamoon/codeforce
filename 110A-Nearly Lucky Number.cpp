#include<iostream>
using namespace std;
int main()
{
    int i,count=0;
    string n;
    cin>>n;
    for(i=0;  i<n.size();i++){
        if(n[i]=='4'|| n[i]=='7')
            count++;
    }
    if(count==4||count==7)
        cout<<"YES";

    else
        cout<<"NO";
    return 0;
}
