    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        char s[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        while(t--)
        {
            int n,a,b;
            int c=0;
            cin>>n>>a>>b;
            while(n--)
            {
                if(c<b){
                    cout<<s[c];
                    c++;
                }
                if(c==b)c=0;
            }cout<<endl;
     
     
        }
    }
