#include<bits/stdc++.h>
using namespace std;
///Cramer's Rule
double check_dit(double arr[][4]) {
    double ans = 0;
    ans += arr[1][1] * (arr[2][2] * arr[3][3] - arr[2][3] * arr[3][2]);
    ans -= arr[1][2] * (arr[2][1] * arr[3][3] - arr[2][3] * arr[3][1]);
    ans += arr[1][3] * (arr[2][1] * arr[3][2] - arr[2][2] * arr[3][1]);
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin>>tt;
    while(tt--)
    {
       double arr[4][4],d[4][2];
       for(int i=1;i<=3;i++)
       {
           for(int j=1;j<=4;j++)
           {
               if(j<4)
               {
                   cin>>arr[i][j];
               }
               else
               {
                   cin>>d[i][1];
               }
           }
       }
       double dit=check_dit(arr);
       cout<<dit<<endl;
       if(abs(dit)<1e-12)
       {
           cout<<"none it will be singular"<<endl;
           continue;
       }
       ///for dx
       double tmp[4][4];
       for(int i=1;i<=3;i++)
          for(int j=1;j<=3;j++)tmp[i][j]=arr[i][j];


       for(int i=1;i<=3;i++)
       {
           tmp[i][1]=d[i][1];
       }
       double dx=check_dit(tmp);
       cout<<"X "<<double(dx/dit)<<endl;
       ///dy
        for(int i=1;i<=3;i++)
          for(int j=1;j<=3;j++)tmp[i][j]=arr[i][j];
       for(int i=1;i<=3;i++)
       {
           tmp[i][2]=d[i][1];
       }
        double dy=check_dit(tmp);
       cout<<"y "<<double(dy/dit)<<endl;
        for(int i=1;i<=3;i++)
          for(int j=1;j<=3;j++)tmp[i][j]=arr[i][j];
       for(int i=1;i<=3;i++)
       {
           tmp[i][3]=d[i][1];
       }
       double dz=check_dit(tmp);
       cout<<"z "<<double(dz/dit)<<endl;

    }
    return 0;
}

