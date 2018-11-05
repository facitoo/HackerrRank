#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> a;
    int t;cin>>t;
    for (int j,i=0;i<t;i++)
    {
        cin>>j;
        a.insert(j);
    }
    int al;cin>>al;
    int scor;
    for(int i=0;i<al;i++)
    {
        auto itr=a.begin();
        cin>>scor;
        a.insert(scor);
        int j=0;
        for(itr=a.begin();itr!=a.end();itr++)
        {
            if(scor==*itr)
            {
                cout<<a.size()-j<<endl;
                break;
            }
            j++;
        }
        a.erase(a.begin(),itr);
        
    }
}
