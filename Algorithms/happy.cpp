#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int N, M;
    
    cin>>N>>M;
    cout<<"enter values"<<endl;
    
    
    string command;
    vector< list<int> > pos(N);

    for(int i = 0; i < pos.size(); i++){
        pos[i].push_back(i+1);
        }
    
    for(auto l : pos){
        cout<<l.front()<<endl;
    }
    
    // while(M--){
    //     cin>>command;
    //     switch(command){
    //         case: "move a onto b"

    //         case: "move a over b"
    //         case: "pile a onto b"
    //         case: "pile a over b"
    //     }
    
    // }

}