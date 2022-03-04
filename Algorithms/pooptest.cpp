#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<int, pair<int, int> > Map;
vector<int> V;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin>>N>>M;

    string C;
    int a, b;
    
    while(M--){
        cin>>C>>a;
        if(C[0]=='s'){
            cin>>b;
            if(Map.count(a)) V.erase(V.begin()+Map[a].second);
            V.push_back(a);
            Map[a] = make_pair(b, V.size()-1);
        }else{
            if(Map.count(a)){
                cout<<Map[a].first<<endl;
                V.erase(V.begin()+Map[a].second);
                V.push_back(a);
                Map[a].second = V.size();
            }else 
                cout<<"-1"<<endl;
        }
        if(V.size() > N){
            Map.erase(V.front());
            V.erase(V.begin());
        }
    }
}


/*
            int tmp = Mem[a];
            Mem.erase(a);
            Mem.emplace(a,tmp);
            
            if(Mem.count(a)){
                cout<<Mem[a]<<endl;
            }else{
                cout<<"-1"<<endl;
            }
10 10 
get 4 
set 4 4 
set 2 1 
get 4 
get 5 
set 2 3 
set 2 2 
get 3 
set 4 3 
get 2 


*/