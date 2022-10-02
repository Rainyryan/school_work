#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int MAX = 1e6-1;
int root[MAX];
pair <long long, pair<int, int> > p[MAX];
int nodes, edges;

int parent(int a)                                                
{
    while(root[a] != a)
    {
        root[a] = root[root[a]];
        a = root[a];
    }
    return a;
}

void union_find(int a, int b)                               
{
    int d = parent(a);
    int e = parent(b);
    root[d] = root[e];
}

long long kruskal()
{
    int a, b;
    long long cost, minCost = 0;
    for(int i = edges-1 ; i >= 0 ; --i)
    {
        a = p[i].second.first;
        b = p[i].second.second;
        cost = p[i].first;
        if(parent(a) != parent(b))               
        {
            minCost += cost;
            union_find(a, b);
        }
    }
    return minCost;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    long long weight, cost, minCost;
    int N,M;
    cin>>N>>M;
    nodes = N;
    edges = M;
    for(int i = 0;i < MAX;++i)                                 
    {
        root[i] = i;
    }
    int a, b, c;
    for(int i = 0; i < M; ++i){
        cin>>a>>b>>c;
        p[i] = make_pair(c, make_pair(a, b));
    }
    sort(p, p + edges);                                       
    minCost = kruskal();
    cout<<minCost<<'\n';
    return 0;
}

/*
33
0 1 50 1 2 60 0 2 40
*/