#include<bits/stdc++.h>
using namespace std ;

const int N=100010;
vector<int> adj[N] ;
bool vis[N]={false} ;

void dfs(int node)
{
	vis[node]=true ;
	for(int i=0 ;i<adj[node].size() ; i++){
		int u=adj[node][i] ;
		if(!vis[u]){
			dfs(u) ;
		}
	}
	return ;
}

int main()
{
	int n,m ;
	cin >> n >> m ;
	for(int i=0 ; i<m ; i++){
		int u,v ;
		cin >> u >> v ;
		adj[u].push_back(v);
		adj[v].push_back(u) ;
	}
	dfs(1) ;

	return 0 ;
}