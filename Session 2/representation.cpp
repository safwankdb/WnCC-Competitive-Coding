#include<bits/stdc++.h>
using namespace std ;

const int N=100010;
vector<int> adj[N] ;

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

	return 0 ;
}