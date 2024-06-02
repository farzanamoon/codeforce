#include<iostream>
using namespace std;
int main()
{
    string str_1,str_2;
    cin>>str_1>>str_2;
    for(int i=0;i<str_1.size(); i++ ){
      str_1[i] = toupper(str_1[i]);
      str_2[i] = toupper(str_2[i]);
    }
     if(str_1==str_2)
            cout<<"0"<<endl;
     else if(str_1<str_2)
        cout<<"-1"<<endl;
     else
        cout<<"1"<<endl;

    return 0;
}

