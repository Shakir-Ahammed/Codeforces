    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int  k,l,m,n,d,c=0;
        cin>>k>>l>>m>>n>>d;
        bool a[d+1]={false};
        for(int i=k;i<=d;i=i+k)
        {
            a[i]=true;
        }for(int i=l;i<=d;i=i+l)
        {
            a[i]=true;
        }for(int i=m;i<=d;i=i+m)
        {
            a[i]=true;
        }for(int i=n;i<=d;i=i+n)
        {
            a[i]=true;
        }
        for(int i=1;i<=d;i++)
            if(a[i]==true)c++;
        cout<<c<<endl;
    }
