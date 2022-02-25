#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(){

    int N, M;
    cin>>N>>M;
    
    
    string command;
    vector<list<int>> pos;
    
    //vector<list<int>>::iterator i;
    

    // int a = 1;
    
    // for(i=pos.begin(); i!=pos.end(); i++){
    //     i->push_back(a++);
    // }

    
    for(int i = 0; i < N; i++){
        list<int> a;
        a.push_back(i+1);
        pos.push_back(a);
    }
    for(auto i : pos){
        cout<<i.front();
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