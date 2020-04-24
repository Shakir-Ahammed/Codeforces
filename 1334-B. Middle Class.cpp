    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        ll t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            ll p,a[n],sum=0,l,ans=0;
            cin>>p;
            for(int i=1;i<=n;i++)
            {
                cin>>a[i];
     
            }sort(a+1,a+n+1,greater <ll>());
     
           for(int i=1;i<=n;i++)
           {
               sum+=a[i];
               l=i*p;
               if(l<=sum)ans=i;
     
           }cout<<ans<<endl;
        }
    }
     
