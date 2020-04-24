    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        string a,b,c;
        while(cin>>a>>b)
        {c="";
            for(int i=0;i<a.size();i++)
            {
                if (a[i]=='1'&&b[i]=='1')c+="0";
                else if(a[i]=='1'&&b[i]=='0'||a[i]=='0'&&b[i]=='1')c+="1";
                else c+="0";
            }cout<<c<<endl;
        }
    }
