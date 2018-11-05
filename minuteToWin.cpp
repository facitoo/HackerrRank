#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,size,k,max=0,temp;cin>>size>>k;
    long long int arr[size];
    map<int,int> val;
    for(i=0;i<size;i++)
        cin>>arr[i];
    for(i=0;i<size;i++){
        temp=arr[i]-(i*k);
        if(val.find(temp)!=val.end())
            val[temp]++;
        else
            val[temp]=1;
    }
    max=0;
    for(auto itr=val.begin();itr!=val.end();itr++)
        if(itr->second > max)
            max=itr->second;
    cout<<size-max;}