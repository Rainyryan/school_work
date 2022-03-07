#include <set>
#include <stack>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

unordered_map<set<int>, int> Set;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> S;
    int N;
    cin>>N;
    string C;
    while(N--){
        cin>>C;
        if(C[0] == 'P'){
            S.push(Set[{}]);
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
        cout<<Set[S.top()].size()<<'\n';
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
*