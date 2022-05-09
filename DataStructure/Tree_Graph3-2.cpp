#include <iostream>

using namespace std;

class Graph{
    public: 
    map<int, bool> visited;
    map<int, list<int>> adj;

    void addEdge(int v, int w);
    void DFS(int v);
}


int main(){
    
    BST* root;
    queue<BST*> trees;
    queue<bool> mode;
    int m;
    string line;
    cin>>m;
    while(m-- > 0){
        cin>>line;
        int size;
        cin>>size;
        int arr[size], in[size];
        if(line == "preorder-inorder"){
            mode.push(false);
            for(int j = 0; j < size; j++){
                cin>>arr[j];
            }
            for(int j = 0; j < size; j++){
                cin>>in[j];
            }
            root = ConstructBSTpre(arr, in, size);
        }else if(line == "postorder-inorder"){
            mode.push(true);
            for(int j = 0; j < size; j++){
                cin>>arr[j];
            }
            for(int j = 0; j < size; j++){
                cin>>in[j];
            }
            root = ConstructBSTpos(arr, in, size);
        }
        trees.push(root);
    }
    
    while(!trees.empty()){
        if(mode.front()){
            trees.front()->Preorder(trees.front());
            trees.pop();
            mode.pop();
        }else{
            trees.front()->Postorder(trees.front());
            trees.pop();
            mode.pop();
        }
        cout<<endl;
    }
        

}

/*
2
preorder-inorder
7
1 2 3 4 5 6 7
3 2 4 1 6 5 7
postorder-inorder
10
5 6 4 7 3 8 2 10 9 1
5 4 6 3 7 2 8 1 9 10
*/