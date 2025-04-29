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
       for(int i=0;i<n;i++)
       {
           cin>>x[i];
       }
       for(int i=0;i<n;i++)
       {
           cin>>y[i];

       }
       double point;
       cin>>point;
       double sum=0;
       for(int i=0;i<n;i++)
       {
           double up=1,down=1;
           for(int j=0;j<n;j++)
           {
               if(i!=j)
               {
                   up*=(point-y[j]);
               }

           }
           for(int j=0;j<n;j++)
           {
                 if(i!=j)
                {
                       down*=(y[i]-y[j]);
                }

           }
           sum+=(up/down)*x[i];
       }
       cout<<"Lagranges's inverse value : "<<sum<<endl;
    }
    return 0;
}
/* input
1
5
1 2 3 4 5
1 8 27 64 125
85


*/

