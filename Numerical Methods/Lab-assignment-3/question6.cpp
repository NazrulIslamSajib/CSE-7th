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
        double arr[4][4];
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=3;j++)
            {
                cin>>arr[i][j];
            }
        }
        double ans=0;
        ans+=arr[1][1]*((arr[2][2]*arr[3][3])-(arr[2][3]*arr[3][2]));
        ans+=-arr[1][2]*((arr[2][1]*arr[3][3])-(arr[2][3]*arr[3][1]));
        ans+=arr[1][3]*((arr[2][1]*arr[3][2])-(arr[2][2]*arr[3][1]));
        cout<<"determinant of a 3X3 matrix. "<<ans<<endl;
    }
    return 0;
}

