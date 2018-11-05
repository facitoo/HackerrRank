#include<bits/stdc++.h>
using namespace std;
#define DEBUG(x) cout<<'>'<<#x<<':'<<x<<endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0)
#define MAXN 111111

const int INF = 1 << 29 ;
typedef long long ll ;
typedef pair < int , int > pii ;

bool visited[MAXN] ;
ll ans ;
int cl , cr ;

void dfs(int u , vector < vector < int > > &g)
{
    visited[u] = true;
    for(int i =0 ;i<g[u].size() ;i++) 
        if(!visited[g[u][i]])
        {
            ans+=cr;
            dfs(g[u][i],g);
        }
}
int main()
{
    int t,n,m,a,b;
    scanf("%d" ,&t);
    while(t--) 
    {
        scanf("%d %d %d %d" ,&n ,&m ,&cl , &cr);
        vector < vector < int > > g(n+2) ;
        for(int i = 1 ; i<= m ;i++)
        {
            scanf("%d %d" ,&a ,&b);
            g[a].pb(b) ;
            g[b].pb(a) ;
        }
        mem(visited , 0) ;
        ans =0LL;
        for(int i = 1 ; i<= n ; i++) 
            if(!visited[i])
            {
                ans+=cl ;
                dfs(i , g) ;
            }

        printf("%lld\n" , min(cl*1LL*n , ans)) ;
     }
    return 0 ;
}