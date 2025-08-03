#include<bits/stdc++.h>
using namespace std;
void least_square()
{
        cout<<"How many number you need to input"<<endl;
        long long n;
        cin>>n;
        double arr[n+10],brr[n+10];
        cout<<"Give "<<n<<" "<<"number of x : "<<endl;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Give "<<n<<" "<<"number of y"<<endl;
        for(int i=1;i<=n;i++)
        {
            cin>>brr[i];
        }
        double y=0,x2=0,xhole2=0,xy=0,x;
        for(int i=1;i<=n;i++)
        {
           y+=brr[i];
           x2+=(arr[i]*arr[i]);
           x+=arr[i];
           xy+=(arr[i]*brr[i]);

        }
        double a=((y*x2)-(x*xy))/((n*x2)-(x*x));
        double b=(n*(xy)-(x*y))/((n*x2)-(x*x));
        cout<<"y="<<a<<"+"<<b<<"x"<<endl;
        return;
}
double check_dit(double arr[][4])
{
            double ans = 0;
            ans += arr[1][1]*(arr[2][2]*arr[3][3]-arr[2][3]*arr[3][2]);
            ans -= arr[1][2]*(arr[2][1]*arr[3][3]-arr[2][3]*arr[3][1]);
            ans += arr[1][3]*(arr[2][1]*arr[3][2]-arr[2][2]*arr[3][1]);
            return ans;
}
void call(double arr[][4],double d[][5])
{

            double dit=check_dit(arr);
            cout<<dit<<endl;
            if(abs(dit)<1e-12)
            {
               cout<<"none it will be singular"<<endl;
               return;
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
            cout<<double(dx/dit)<<"+"<<double(dy/dit)<<"x"<<double(dz/dit)<<"x^2"<<endl;



}
void least_square_parabola()
{
        cout<<"How many number you need to input"<<endl;
        long long n;
        cin>>n;
        double ar[n+10],br[n+10];
        cout<<"Give "<<n<<" "<<"number of x :"<<endl;
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        cout<<"Give "<<n<<" "<<"number of y :"<<endl;
        for(int i=1;i<=n;i++)
        {
            cin>>br[i];
        }
        double x1=0,x2=0,x3=0,x4=0,y=0,xy1=0,xy2=0;
        for(int i=1;i<=n;i++)
        {
            x1+=ar[i];
            x2+=(ar[i]*ar[i]);
            x3+=(ar[i]*ar[i]*ar[i]);
            x4+=(ar[i]*ar[i]*ar[i]*ar[i]);
            y+=br[i];
            xy1+=(ar[i]*br[i]);
            xy2+=(ar[i]*ar[i]*br[i]);
        }
        ///call();
        double arr[4][4],d[4][5];
        arr[1][1]=n;
        arr[1][2]=x1;
        arr[1][3]=x2;
        d[1][1]=y;
        arr[2][1]=x1;
        arr[2][2]=x2;
        arr[2][3]=x3;
        d[2][1]=xy1;
        arr[3][1]=x2;
        arr[3][2]=x3;
        arr[3][3]=x4;
        d[3][1]=xy2;
        call(arr,d);

}
void least_square_exponential()
{
        cout<<"How many number you need to input"<<endl;
        long long n;
        cin>>n;
        double arr[n+10],brr[n+10];
        cout<<"Give "<<n<<" "<<"number of x"<<endl;
        for(int i=1;i<=n;i++)
        {
           cin>>arr[i];
        }
        cout<<"Give "<<n<<" "<<"number of y"<<endl;
        for(int i=1;i<=n;i++)
        {
           cin>>brr[i];
        }
        double y=0,x2=0,xhole2=0,xy=0,x=0;
        for(int i=1;i<=n;i++)
        {
           y+=log(brr[i]);
           x2+=(log(arr[i])*(log(arr[i])));
           x+=log(arr[i]);
           xy+=(log(arr[i])*(log(brr[i])));
        }
        double a=((y*x2)-(x*xy))/((n*x2)-(x*x));
        double b=(n*(xy)-(x*y))/((n*x2)-(x*x));
        a=exp(a);
        cout<<"Y="<<a<<"e"<<b<<"x"<<endl;
}
int f=0;
void manu()
{
    while(1)
    {
        if(f==0)
        {
             cout<<"--------------Welcome to Numerical Analysis project----------"<<endl;
             f=1;
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Enter 1 to find Least Square line : "<<endl;
        cout<<"Enter 2 to find Least square parabola : "<<endl;
        cout<<"Enter 3 to find exponential : "<<endl;
        cout<<"Enter any to exit"<<endl;
        int x;
        cin>>x;
        if(x==1)
        {
             system("cls");
             least_square();
        }
        else if(x==2)
        {
            system("cls");
            least_square_parabola();
        }
        else if(x==3)
        {
            system("cls");
            least_square_exponential();
        }
        else
        {
             break;
        }


    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    manu();
    return 0;
}


