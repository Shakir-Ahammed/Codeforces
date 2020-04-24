    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
       while(cin>>n)
       {
          if(n%2==1) cout<<"-1"<<endl;
          else{
            for(int i=1;i<=n;i++)
                if(i%2==0)cout<<i<<" "<<i-1<<" ";
          }cout<<endl;
       }
     
    }
