#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin>>N>>M;

    unordered_map<int, int> Mem;
    vector<int> V;
    string C; 
    int a, b;

    while(M--){
        cin>>C;
        if(C[0] == 'g'){
            cin>>a;
            //Mem.count(a)? cout<<Mem[a]<<endl : cout<<"-1"<<endl;
            if(Mem.count(a)){
                cout<<Mem[a]<<endl;
                for(auto it = V.cbegin(); it != V.end(); it++)
                    if(*it == a)
                        V.erase(it);
                V.push_back(a);

            }else{
                cout<<"-1"<<endl;
            }
        }else{
            cin>>a>>b;
            /*if(Mem.size() > N){
                Mem.erase(V.front());
                V.erase(V.begin());
            }*/
            cout<<"where";
            Mem[a] = b;
            V.push_back(a);
            
            for(int i = 0; i < V.size(); i++)
                cout<<" "<<i;
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
*/