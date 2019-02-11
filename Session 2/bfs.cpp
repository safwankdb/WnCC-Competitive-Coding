#include<bits/stdc++.h>
using namespace std ;

const int N=100010;
vector<int> adj[N] ;
int dist[N] ;

void bfs(int node)
{
	for(int i=0 ; i<N ; i++) dist[i]=-1 ;
	queue<int> q ;
	q.push(node) ; dist[node]=0 ;
	while(!q.empty()){
		int u=q.front() ;
		q.pop() ;
		for(int v: adj[u]){
			if(dist[v]==-1){
				dist[v]=dist[u]+1 ;
				q.push(v); 
			}
		}


	}
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
	bfs(1) ;

	return 0 ;
}