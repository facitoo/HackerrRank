#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,max=0,temp=0; cin>>a>>b;
    for(int i=a;i<=b;i++)
        for(int j=a;j<=b;j++){
            temp=(i^j);
            if(temp>max)
                max=temp;
    }
    cout<<max;
}
