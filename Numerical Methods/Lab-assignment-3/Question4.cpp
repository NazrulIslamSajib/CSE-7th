#include<bits/stdc++.h>
using namespace std;
double fun(double x)
{
    return exp(sin(x));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin>>tt;
    while(tt--)
    {

         long long n; ///term
         cin>>n;
         if(n<=0 || n%2==1)
         {
             cout<<"Error"<<endl;
             continue;
         }
         double lower,upper;
         cin>>lower>>upper;
         double h=double(upper-lower)/n;
         map<long long,double>mp;
         mp[0]=lower;
         mp[n]=upper;
         for(int i=1;i<=n-1;i++)
         {
             mp[i]=double(lower+double(i*h));
         }
         double sum=0;
         for(int i=0;i<=n;i++)
         {
             if(i==0 || i==n)
             {
                 sum+=fun(mp[i]);
             }
             else
             {
                 if(i%2)
                 {
                     sum+=4*(fun(mp[i]));
                 }
                 else
                 {
                    sum+=2*(fun(mp[i]));
                 }

             }
         }
         sum=(h/3.0)*sum;
         cout<<"Answer Simpson's one third :"<<sum<<endl;

    }
    return 0;
}
/*
1
4
0 1.5708
*/

