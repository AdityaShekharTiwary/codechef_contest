#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='Y')
            {
                flag=1;
                break;
            }
            else if(s[i]=='I')
            {
                flag=2;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==0)
            cout<<"NOT SURE"<<endl;
        else if(flag==1)
            cout<<"NOT INDIAN"<<endl;
        else if(flag==2)
            cout<<"INDIAN"<<endl;
    }
    return 0;
}
