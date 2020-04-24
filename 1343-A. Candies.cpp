    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
       ll t;
       cin>>t;
       while(t--)
       {
           ll n,x=0,ans=1;
           cin>>n;
           for(ll i=1;;i++)
           {
               x=pow(2,i);
               ans+=x;
             
               if(n%ans==0)
               {
                   cout<<n/ans<<endl;
                   break;
               }
     
           }
     
       }
    }
