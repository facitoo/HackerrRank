#include<bits/stdc++.h>
using namespace std;
 
void subString(string s, int n){
    set<string> count;
    string aa;
    for (int i = 0; i < n; i++) 
        for (int len = 1; len <= n - i; len++){
            aa=s.substr(i, len);
            count.insert(aa);
        }
    cout<<count.size()<<endl;
}
int main(){
    long long int len,qur,l,r;cin>>len>>qur;
    string s,a;cin>>s;
    for(int i=0;i<qur;i++){
        cin>>l>>r;
        r=(r-l)+1;
        a=s.substr(l,r);
        subString(a,a.length());
        
    }
}