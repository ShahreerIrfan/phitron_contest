#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        if(i%2 != 0)
        {
            for(int k=0;k<2*i-1;k++)
                cout<<'>';
            cout<<"\n";
        }
        else
        {
            for(int l=0;l<2*i-1;l++)
                cout<<'<';
            cout<<"\n";
        }
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<n-i;j++)
            cout<<" ";
        if(i%2 != 0)
        {
            for(int k=0;k<2*i-1;k++)
                cout<<'>';
            cout<<"\n";
        }
        else
        {
            for(int l=0;l<2*i-1;l++)
                cout<<'<';
            cout<<"\n";
        }
    }

    return 0;
}