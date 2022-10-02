#include<iostream>
#include <list>
using namespace std;
 
class Graph
{
    int V;  
    list<int> *adj; 
public: 

    Graph(int V);  
    void addEdge(int v, int w); 
    bool isReachable(int s, int d, int* k , int n); 
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); 
}
 
bool Graph::isReachable(int s, int d, int* k, int n)
{
    if (s == d)
      return true;
    
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
    for(int i = 0; i < n; ++i)
        visited[k[i]] = true;
    list<int> queue;
 
    visited[s] = true;
    queue.push_back(s);
 
    list<int>::iterator i;
 
    while (!queue.empty())
    {
        s = queue.front();
        queue.pop_front();
 
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (*i == d)
                return true;
 
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
     
    return false;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, K, A, B, a, b;
    cin>>N>>M>>K>>A>>B;

    Graph g(N);
    for(int i = 0; i < M; ++i){
        cin>>a>>b;
        g.addEdge(a-1, b-1);
    }
    int* k = new int[K];
    for(int i = 0; i < K; ++i){
        cin>>a;
        k[i] = a-1;
    }
    if(g.isReachable(A-1, B-1, k, K))
        cout<<"SAFE";
    else
        cout<<"UNSAFE";

 
    return 0;
}
