#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,q,index,base=0;cin>>n>>k>>q;
    index=2*n;
    int arr[index];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i+n]=arr[i];
    }
    index=index-((k%n)+1);
    base=index-n;
    for(int i=0;i<q;i++)
    {
        cin>>n;
        cout<<arr[base+1+n]<<endl;
    }
}
