#include<iostream>
using namespace std;
int main()
{
    int i,up=0,low=0;
    string s;
    cin>>s;
    for( i=0;i<s.size();i++){
        if(s[i]<97)
             up++;
        else
             low++;
    }
    if(up>low)
    {
        for(i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
        cout<<s<<endl;
    }
 if(low>=up){
        for(i=0;i<s.size();i++){
    s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
 }

    return 0;
}
