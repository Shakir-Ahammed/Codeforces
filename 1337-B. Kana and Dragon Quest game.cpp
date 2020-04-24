    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            long long  a,n,m,ans,n2;
            cin>>a>>n>>m;
            n2=a;
            long long s=a-(10*m);
            if(s<=0)
            {cout<<"YES"<<endl;
             continue;
            }
            while(n--)
            {
                n2/=2;
                n2+=10;
     
            }
     
     
     
     
             if(n2>(10*m))cout<<"NO"<<endl;
             else cout<<"YES"<<endl;
     
        }
    }
