#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;cin>>a;
    int row,col,j=0;
    float flr,temp=0;
    temp=sqrt(a.length());
    row=temp;
    flr=floor(temp);
    if(flr==temp) col=row;
    else col=row+1;
    for(int i=0;i<col;i++){
        for(j=i;j<a.length();j=j+row){
            cout<<a[j];
            if(flr!=temp)
                j++;
        }
        cout<<" ";
    }
}
