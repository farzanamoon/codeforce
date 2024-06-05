#include<iostream>
using namespace std;
int main()
{
    int i;
    string n;
    cin>>n;
    for(i=0; i<n.size(); i+=2)
    {
        int mini=i;

        for(int j=i+2;j<n.size();j+=2)
        {
            if(n[mini]>n[j])
                mini=j;
        }
    if(mini!=i)
        swap(n[i],n[mini]);
    }
    cout<<n;
    return 0;
}
