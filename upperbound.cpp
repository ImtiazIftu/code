#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mid,left,right;
ll ok=0;
ll binary_searh(ll arr[],ll a)
{
     ll left=0LL;
     ll right=ok-1;
     //cout<<a<<endl;
     ll ans=-1;
     while(left<=right)
     {
         mid=(left+right)/2;
         if(arr[mid]>a)
         {
             ans=mid;
             right=mid-1;
         }
         else
         {
             left=mid+1;
         }

     }
     return ans;


}
int main()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n+5]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    //cout<<arr.size()<<endl;
    ok=sizeof(arr)/sizeof(arr[0]);
    cout<<binary_searh(arr,m);
}

