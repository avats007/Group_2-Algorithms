#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<queue>
using namespace std;


void bfs(unordered_map<int, set<int>> &adjlist,	unordered_map<int,bool> &visited,vector<int> &ans,int node)
{
	
	queue<int> q;
	q.push(node);
	
	visited[node] = 1;
	
	while(!q.empty())
	{
		int top = q.front();
		q.pop();
		
		ans.push_back(top);
		for(auto i:adjlist[top])
		{
			if(!visited[i])
			{
				q.push(i);
				visited[i] = 1;
			}
		}
	}
}

int main()
{
	int vertex,edge,u,v;
	cout<<"Enter the number of vertexes\n";
	cin>>vertex;
	
	cout<<"Enter the number of edges\n";
	cin>>edge;
	vector<pair<int,int>> edges;
	vector<int> ans;
	
	for(int i=0;i<edge;i++)
	{
		cout<<"Enter the nodes which have edgesn: ";
		cin>>u>>v;
		edges.push_back({u,v});
	}
	
	unordered_map<int, set<int>> adjlist;

    int x,y;	
	for(int i=0;i<edges.size();i++)
	{
		x = edges[i].first;
		v = edges[i].second;
		
		adjlist[u].insert(v);
		adjlist[v].insert(u);
	}
	
	unordered_map<int,bool> visited;
	for(int i=0;i<vertex;i++)
	{
		if(!visited[i])
		{
			bfs(adjlist,visited,ans,i);
			
		}
		
	}
	
	cout<<"BFS Traversal of the following Graph is: ";
	for(int i=0;i<ans.size();i++)
	{
	    cout<<ans[i]<<" ";
	}
	return 0;
}
