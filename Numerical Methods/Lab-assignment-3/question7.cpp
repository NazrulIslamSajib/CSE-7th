#include<bits/stdc++.h>
using namespace std;
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
       double brr[4][4];
       brr[1][1]=((arr[2][2]*arr[3][3])-(arr[2][3]*arr[3][2]));
       brr[1][2]=-((arr[2][1]*arr[3][3])-(arr[2][3]*arr[3][1]));
       brr[1][3]=((arr[2][1]*arr[3][2])-(arr[2][2]*arr[3][1]));
       brr[2][1] = -(arr[1][2]*arr[3][3] - arr[1][3]*arr[3][2]);
       brr[2][2] =  (arr[1][1]*arr[3][3] - arr[1][3]*arr[3][1]);
       brr[2][3] = -(arr[1][1]*arr[3][2] - arr[1][2]*arr[3][1]);
       brr[3][1] =  (arr[1][2]*arr[2][3] - arr[1][3]*arr[2][2]);
       brr[3][2] = -(arr[1][1]*arr[2][3] - arr[1][3]*arr[2][1]);
       brr[3][3] =  (arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1]);
       double inv[4][4];
       for(int i=1;i<=3;i++)
       {
           for(int j=1;j<=3;j++)
           {
               inv[i][j]=double(brr[j][i])/dit;
           }
       }
       double ans[4];
       for(int i=1;i<=3;i++)
       {
           ans[i]=0;
           for(int j=1;j<=3;j++)
           {
               ans[i]+=(inv[i][j]*d[j][1]);
           }
       }
       cout<<"ans X "<<ans[1]<<endl;
       cout<<"ans Y "<<ans[2]<<endl;
       cout<<"ans Z "<<ans[3]<<endl;
    }
    return 0;
}
/*
1
1 1 1 1
1 2 3 6
1 3 4 6
*/

