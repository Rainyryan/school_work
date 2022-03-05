#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

unordered_map<int, int> Map;
unordered_map<int, list<int>::iterator> AinDq;
list<int> Dq;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin>>N>>M;

    Map.reserve(N+1);

    string C;
    int a, b;

    while(M--){
        cin>>C>>a;
        if(C[0]=='s'){
            cin>>b;
            if(Map.count(a)) Dq.erase(AinDq[a]);
            Map[a] = b;
            Dq.push_back(a);
            AinDq[a] = prev(Dq.end());
        }else{
            if(Map.count(a)){
                cout<<Map[a]<<endl;
                Dq.erase(AinDq[a]);
                Dq.push_back(a);
                AinDq[a] = prev(Dq.end());
            }else 
                cout<<"-1"<<endl;
        }
        if(Map.size() > N){
            Map.erase(Dq.front());
            AinDq.erase(Dq.front());
            Dq.pop_front();
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