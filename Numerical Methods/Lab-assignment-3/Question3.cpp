#include<bits/stdc++.h>
using namespace std;
double fun(double x)
{
    return double(log10(x));
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
         if(n<=0)
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
                 sum+=2*(fun(mp[i]));
             }
         }
         sum=(h/2.0)*sum;
         cout<<"Answer trapezoidal :"<<sum<<endl;

    }
    return 0;
}
/*
1
5
1 5
/*
/*
1  //test case
5  ///n
1 5 ///lower upper
*/

