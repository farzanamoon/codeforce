#include<iostream>
using namespace std;
int main()
{
    int n,i,count1=0,count2=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++){
        if (s[i]=='A')
        count1++;
        else if
            (s[i]=='D')
            count2++;
    }
    if(count1>count2)
        cout<<"Anton";
    else if(count1<count2)
        cout<<"Danik";
    else
        cout<<"Friendship";

    return 0;

}
