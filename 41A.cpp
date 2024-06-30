#include<iostream>
using namespace std;
int main()
{
    string s,rs;
    int i,j;
    cin>>s;
    cin>>rs;
   for(i=0, j=rs.length()-1;i<s.length(), j>=0;i++,j--){
    if(s[i]!=rs[j]){
    cout<<"NO";
    return 0;}
   }
        cout<<"YES";

    return 0;
}
