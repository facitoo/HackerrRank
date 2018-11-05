#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,k,count=0,j=1,temp=0,i=0;cin>>n>>k;
    long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    while(j<n){
        temp=arr[j]-arr[i];
        if(temp==k){
            count++;
            j++;
        }
        else if(temp < k)
            j++;
        else if(temp > k)
            i++;
    }
    cout<<count;
}
