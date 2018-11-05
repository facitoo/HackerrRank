#include <bits/stdc++.h>
using namespace std;


int main() {
    int t,n,total,fr,flag;cin>>t;
    while(t!=0){
        cin>>n;
        total=0;fr=0;flag=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total+=arr[i];
        }
        for(int i=0;i<n;i++){
             fr += arr[i-1];
            total -= arr[i];
        if(total == fr)
        {
            flag = 1;
            break;
        }

    }
    if(flag == 1)
        printf("YES\n");
    else
        printf("NO\n");
            t--; 
        }
       
    }
