#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin>>tt;
    while(tt--)
    {
       long long n;
       cin>>n;
       vector<long long>x(n+10,0),y(n+10,0);
       for(int i=1;i<=n;i++)
       {
           cin>>x[i];
       }
       for(int i=1;i<=n;i++)
       {
           cin>>y[i];

       }
       long long ans[n+10][n+10];
       for(int i=1;i<=n;i++)
       {
           ans[i][0]=y[i];
       }
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=n-i;j++)
           {
               y[j]=y[j+1]-y[j];
               ans[j][i]=y[j];
           }
       }
       cout<<"Difference Table"<<endl;
       for(int i=1;i<=n;i++)
       {
           for(int j=0;j<=n-i;j++)
           {
               cout<<ans[i][j]<<" ";
           }
           cout<<endl;
       }
    }
    return 0;
}
/* input
1
5
1 2 3 4 5
1 8 27 64 125


*/

