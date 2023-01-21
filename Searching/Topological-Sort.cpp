#include<iostream>
#include<unordered_map>
#include<set>
#include<stack>
#include<bits/stdc++.h>

using namespace std;

void topo_sort(int node,unordered_map<int,bool> &visited,stack<int> &s,unordered_map<int,set<int>> &adjlist)
{
	visited[node] = 1;
	
	for(auto i:adjlist[node])
	{
		if(!visited[i])
		{
			topo_sort(i,visited,s,adjlist);
		}
	}
	s.push(node);
}
int main()
{
	int nodes,edge;
	
	cout<<"Enter the number of nodes\n";
	cin>>nodes;
	
	cout<<"Enter the number of edges\n";
	cin>>edge;
	
	unordered_map<int,set<int>> adjlist;
	
	vector<pair<int,int>> edges;
	int x,y;
	for(int i=0;i<edge;i++)
	{
		cout<<"Enter the nodes which have edges\n";
		cin>>x>>y;
		edges.push_back({x,y});
		
	}
	
	for(int i=0;i<edges.size();i++)
	{
		int u = edges[i].first;
		int v = edges[i].second;
		
		adjlist[u].insert(v);
		adjlist[v].insert(u);
	}
	
	unordered_map<int,bool> visited;
	stack<int> s;
	for(int i=0;i<nodes;i++)
	{
		if(!visited[i])
		{
			topo_sort(i,visited,s,adjlist);
		}
	}
	
	cout<<"Topological_Sort:\n";
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	
	return 0;
}
