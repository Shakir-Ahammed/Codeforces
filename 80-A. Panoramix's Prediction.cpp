    #include<bits/stdc++.h>
    using namespace std;
    int a[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43,47};
    int main()
    {
        int n,m,c;
        while(cin>>n>>m)
        {
            for(int i=0;i<n;i++)
            {
                if (a[i]==n){c=i;
                break;}
            }if(a[c+1]==m)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
