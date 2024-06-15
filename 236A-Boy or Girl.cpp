#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    string s;
    cin>>s;
    for(int i='a';i<='z';i++){
        for(int j=0;j<=s.size();j++){
            if(i==s[j]){
                sum++;
                break;
            }
        }
    }
    if(sum%2==0){
        cout<<"CHAT WITH HER!"<<endl;

    }
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
