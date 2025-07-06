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
         for(int i=1;i<n;i++)
         {
             double tmp=ans[i-1];
             if(i%2==0)
             {
                 tmp=tmp*-1;
             }
             tmp=(tmp/double(i));
             sum+=tmp;
         }
         sum=sum*(1.0/h);
         cout<<"answer of first derivatives   : "<<sum<<endl;


         ///second derivatives
         vector<double>coff={1.0,-1,(11.0/12),-5.0/6,137.0/180};
         sum=0;
         int index=0;
         for(int i=2;i<=n-1;i++)
         {
             sum+=double(coff[index]*ans[i-1]);
             index++;
         }
         cout<<"Second derivatives : "<<sum<<endl;

    }
    return 0;
}
