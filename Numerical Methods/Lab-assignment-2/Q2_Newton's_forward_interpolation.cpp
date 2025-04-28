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
       vector<double>x(n+10,0),y(n+10,0);
       for(int i=1;i<=n;i++)
       {
           cin>>x[i];
       }
       for(int i=1;i<=n;i++)
       {
           cin>>y[i];

       }
       double point;
       cin>>point;
       double ans[n+10][n+10];
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
       cout<<endl;
       cout<<"Difference Table"<<endl;
       cout<<endl;
       for(int i=1;i<=n;i++)
       {
           for(int j=0;j<=n-i;j++)
           {
               cout<<ans[i][j]<<" ";
           }
           cout<<endl;
       }
       vector<double>need;
       for(int i=0;i<=n;i++)
       {
           need.push_back(ans[1][i]);
       }
       double h,u,sum=0;
       h=x[2]-x[1];
       u=(point-x[1])/h;
       double fact=1;
       sum+=need[0];
       for(int i=1;i<=n;i++)
       {
           fact=fact*i;
           double u1=u,u2=1;
           for(int j=0;j<i;j++)
           {
               u2*=(u-j);
           }
           sum+=(u2/fact)*need[i];
       }
       cout<<endl;
       cout<<"Values of point : "<<point<<"---> ";
       cout<<sum<<endl;
    }
    return 0;
}
/* input
1
5
1 2 3 4 5
1 8 27 64 125
1.7


*/

