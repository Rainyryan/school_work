#include <iostream>
#include <unordered_map>
#include <deque>

using namespace std;

unordered_map<int, int> Map;
deque<int> Dq;

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
            if(Map.count(a)){
                auto it = Dq.begin();
                while(*it != a) it++;
                Dq.erase(it);
            }
            Map[a] = b;
            Dq.push_back(a);
        }else{
            if(Map.count(a)){
                cout<<Map[a]<<endl;
                auto it = Dq.begin();
                while(*it != a) it++;
                Dq.erase(it);
                Dq.push_back(a);
            }else 
                cout<<"-1"<<endl;
        }
        if(Dq.size() > N){
            Map.erase(Dq.front());
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