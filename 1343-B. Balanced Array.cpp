    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
     
        while(t--)
        {ll n;
          cin>>n;
          ll k=0;
          ll x=0;
            if((n/2)%2==0)
            {
                cout<<"YES"<<endl;
                for(int i=2;i<=n;i=i+2)
                {
                    cout<<i<<" ";
                   x+=i;
                }for(int i=1;i<n-1;i+=2)
                {
                    cout<<i<<" ";
                    k+=i;
                }
                cout<<x-k<<endl;
            }else cout<<"NO"<<endl;
        }
    }
