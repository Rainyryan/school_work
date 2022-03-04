#include <iostream>
#include <unordered_map>
#include <forward_list>

using namespace std;

unordered_map<int, int> Map;
forward_list<int> Dq;

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
            if(Map.count(a)) Dq.remove(a);
            Map[a] = b;
            Dq.emplace_front(a);
        }else{
            if(Map.count(a)){
                cout<<Map[a]<<endl;
                if(Map.count(a)) Dq.remove(a);
                Dq.emplace_front(a);
            }else 
                cout<<"-1"<<endl;
        }
        if(Map.size() > N){
            Map.erase(*prev(Dq.end()));
            Dq.resize(N);
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