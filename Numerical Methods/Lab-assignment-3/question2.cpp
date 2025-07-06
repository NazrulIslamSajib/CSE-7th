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
         double x;
         cin>>n>>x;
         double arr[n+10];
         double brr[n+10];
         for(int i=1;i<=n;i++)
         {
             cin>>arr[i];
         }
         vector<double>v;
         for(int i=1;i<=n;i++)
         {
             cin>>brr[i];
             v.push_back(brr[i]);
         }
         int cur=0;
         vector<long long>ans;
         cout<<"Table   :  "<<endl;
         for(int i=1;i<n;i++)
         {
             vector<double>v1;
             for(int j=1;j<n-cur;j++)
             {
                 v1.push_back(v[j]-v[j-1]);
             }
             v=v1;
             cur++;
             ans.push_back(*v.begin());
             cout<<*v.begin()<<" ";
         }
         cout<<endl;
         ///formula of first derivatives
         ///f(x)=1/h(d0-1/2d^2
        double sum=0;
        double h=(arr[2]-arr[1]);
        double tmp=double(x-arr[1])/h;
        map<long long,double>mp;
        mp[1]=1;
        mp[2]=double(2*tmp-1)/fact(2);
        mp[3]=double(3*tmp*tmp-6*tmp+2)/fact(3);
        mp[4]=double(4*tmp*tmp*tmp-18*tmp*tmp+22*tmp-6)/fact(4);
        for(int i=1;i<=n-1;i++)
        {
            sum+=(mp[i]*ans[i-1]);
        }
        sum=(1.0/h)*sum;
        cout<<"First derivatives ans  : "<<sum<<endl;
        mp[2]=1;
        mp[3]=double(tmp-1);
        mp[4]=double(12*tmp*tmp-36*tmp+22)/24;
        sum=0;
        for(int i=2;i<=n-1;i++)
        {
            sum+=double(ans[i-1]*mp[i]);
        }
        sum=((1.0)/(h*h*1.0))*sum;
        cout<<"Second derivatives : "<<sum<<endl;
    }
    return 0;
}
/*
1
5 1.5
1 2 3 4 5
1 8 27 64 125
*/
