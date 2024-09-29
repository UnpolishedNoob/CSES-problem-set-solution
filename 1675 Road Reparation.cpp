/*
Problem link : https://cses.fi/problemset/task/1675/
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class dsu
{
	ll *parent;
	ll n;
public:
	dsu(ll v)
	{
		n = v;
		parent = new ll[n + 1];
		for (ll i = 0; i <= n; i++)
		{
			parent[i] = i;
		}
	}

	ll find(ll node)
	{
		if (parent[node] == node)
		{
			return node;
		}
		return parent[node] = find(parent[node]);
	}

	void unite(ll n1, ll n2)
	{
		ll s1 = find(n1);
		ll s2 = find(n2);
		if (s1 != s2)
		{
			parent[s1] = s2;
		}
	}
};

void kruskal(vector<vector<ll>> &graph, ll v, ll e)
{
	dsu s(v);
	ll ans = 0;
	ll path = 0;

	sort(graph.begin(), graph.end(), [](const vector<ll> &a, const vector<ll> &b)
		 { return a[2] < b[2]; });

	for (auto it : graph)
	{
		ll u = it[0];
		ll v = it[1];
		ll w = it[2];
		if (s.find(u) != s.find(v))
		{
			s.unite(u, v);
			ans += w;
			path++;
		}
	}
	if (path != v - 1)
	{
		cout << "IMPOSSIBLE" << endl;
	}
	else
	{
		cout << ans << endl;
	}
}

int main()
{
	vector<vector<ll>> graph;

	ll v, e;
	cin >> v >> e;
	ll e1 = e;
	while (e1--)
	{
		ll u, v, w;
		cin >> u >> v >> w;
		graph.push_back({u, v, w});
	}
	kruskal(graph, v, e);
}
