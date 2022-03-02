#include <set>
#include <stack>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

map< set<int>, int > Index;
vector< set<int> > Set;

int getIndex(set<int> s){
    if(!Index.count(s)){
        Set.push_back(s);
        Index[s] = Set.size()-1;
    }
    return Index[s];
}

int main(){
    stack<int> S;
    int N;
    cin>>N;
    string C;
    while(N--){
        cin>>C;
        if(C[0] == 'P'){
            S.push(getIndex(set<int>()));
        }
        else if(C[0] == 'D'){
            S.push(S.top());
        }else{
            set<int> s1, s2, ins;
            s1 = Set[S.top()];
            S.pop();
            s2 = Set[S.top()];
            S.pop();
            switch(C[0]){
                case 'U':{
                    s1.insert(s2.begin(),s2.end());
                    S.push(getIndex(s1));
                }
                break;
                case 'I':{
                    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),std::inserter(ins, ins.begin()));
                    S.push(getIndex(ins));
                }
                break;
                case 'A':{
                    s2.insert(Index[s1]);
                    S.push(getIndex(s2));
                }
                break;
            }
        }
        cout<<Set[S.top()].size()<<endl;
    }
}
/*
10 
PUSH 
PUSH 
PUSH 
ADD 
DUP 
DUP 
DUP 
ADD 
INTERSECT 
ADD
*/