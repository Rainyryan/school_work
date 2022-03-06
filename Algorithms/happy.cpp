#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin>>N>>M;
    
    vector<int> posOf(N+1);
    stack<int> temp;
    vector< stack<int> > pile(N);

    for(int i = 0; i < pile.size(); i++){
        pile[i].push(i+1);
        posOf[i+1] = i;
        }
    
    string token;
    bool move;
    bool onto;
    int a, b;

    while(M--){
        cin>>token;
        if(token == "move") move = true;
        else move = false;
        cin>>token;
        a = stoi(token);
        cin>>token;
        if(token == "onto") onto = true;
        else onto = false;
        cin>>token;
        b = stoi(token);

        if(posOf[a] == posOf[b]) continue;
        if(move && onto){
            while(pile[posOf[a]].top() != a){
                int top = pile[posOf[a]].top();
                pile[posOf[a]].pop();
                pile[top-1].push(top);
                posOf[top] = top-1;
            }
            while(pile[posOf[b]].top() != b){
                int top = pile[posOf[b]].top();
                pile[posOf[b]].pop();
                pile[top-1].push(top);
                posOf[top] = top-1;
            }
            pile[posOf[b]].push(a);
            pile[posOf[a]].pop();
            posOf[a] = posOf[b];
        }
        if(!move && onto){
            while(pile[posOf[b]].top() != b){
                int top = pile[posOf[b]].top();
                pile[posOf[b]].pop();
                pile[top-1].push(top);
                posOf[top] = top-1;
            }
            while(pile[posOf[a]].top() != a){
                int top = pile[posOf[a]].top();
                pile[posOf[a]].pop();
                temp.push(top);
            }
            temp.push(a);
            pile[posOf[a]].pop();
            while(!temp.empty()){
                int top = temp.top();
                temp.pop();
                pile[posOf[b]].push(top);
                posOf[top] = posOf[b];
            }
        }
        if(move && !onto){
            while(pile[posOf[a]].top() != a){
                int top = pile[posOf[a]].top();
                pile[posOf[a]].pop();
                pile[top-1].push(top);
                posOf[top] = top-1;
            }
            pile[posOf[b]].push(a);
            pile[posOf[a]].pop();
            posOf[a] = posOf[b];
        }
        if(!move && !onto){
            while(pile[posOf[a]].top() != a){
                int top = pile[posOf[a]].top();
                pile[posOf[a]].pop();
                temp.push(top);
            }
            temp.push(a);
            pile[posOf[a]].pop();
            while(!temp.empty()){
                int top = temp.top();
                temp.pop();
                pile[posOf[b]].push(top);
                posOf[top] = posOf[b];
            }
        }
    }

    for(int i = 0; i < pile.size(); i++){
        cout<<i+1<<":";
        while(!pile[i].empty()){
            temp.push(pile[i].top());
            pile[i].pop();
        }
        while(!temp.empty()){
            cout<<" "<<temp.top();
            temp.pop();
        }
        cout<<'\n';
    }

}



/*
10 8 
pile 1 onto 1 
pile 8 over 6 
move 3 onto 5 
move 8 over 8 
move 4 onto 9 
pile 10 over 10 
move 9 onto 2 
pile 3 onto 7

1: 1 
2: 2 9 
3: 
4: 4 
5: 5 
6: 6 8 
7: 7 3 
8: 
9: 
10: 10 

10 8
move 9 onto 1
move 8 over 1
move 7 over 1
move 6 over 1
pile 8 over 6
pile 8 over 5
move 2 over 1
move 4 over 9
*/