#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    char s[100]={0};
    char ss[100]={0};
    string sss;
    gets(s);
    cin>>sss;
    ll sz=sss.size();
    ll i=0;
    ll j=0;
    ll cnt=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            i++;
            continue;
        }
        ss[j]=s[i];
        i++;
        j++;


    }
    ll cal=0;
    ll strt=-1;
    for(int i=0;i<=j-sz;i++)
    {
        cal=0;
        for(int j=i;j<i+sz;j++)
        {
             if(sss[cal]==ss[j])
             {
                 cal++;
             }
             else
             {
                 break;
             }
        }
        if(cal==sz)
        {
            strt=i;
            break;
        }

    }
    for(int i=0;i<strt;i++)
    {
        cout<<ss[i];
    }
    for(int i=strt+sz;i<j;i++)
    {
        cout<<ss[i];
    }
}

