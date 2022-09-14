#include <iostream>
#include <fstream>
#include <queue>
#include <stack>

using namespace std;

class BST{
public:
    int data;
    BST *left, *right;
    BST();
    BST(int);
    BST* Insert(BST*, int);
    BST* InsertNT(BST*, int);
    BST* Delete(BST*, int);
    BST* DeleteNT(BST*, int);
    BST* Remove(BST*, int&);
    void Search(BST*, int);
    BST* Find(BST*, int);   //returns a ptr to the node
    void FindC(BST*, int, stack<int>&);
    void FindPath(BST*, int, int);
    void Inorder(BST*);
    void Preorder(BST*);
    void Postorder(BST*);
    void PostorderVec(BST*, vector<int> &);
    void Levelorder(BST*);
};

BST::BST(){         //default constructor          
    data = 0;
    right = left = NULL;
}

BST::BST(int i){    //constructor
    data = i;
    right = left = NULL;
}

void BST::Search(BST* root, int val){
    !Find(root, val) ? cout<<"SORRY. "<<val<<" is not found."<<endl : cout<<"Bingo! "<<val<<" is found."<<endl;
}

BST* BST::Find(BST* root, int val){
    if(!root || root->data == val)      //recursion ending conditions: if root is NULL or had the targeted value, then return it
        return root;
    if(val > root->data)                //walk through the tree recursively until ending conditions is met
        return Find(root->right, val);
    else
        return Find(root->left, val);
}

BST* BST::Insert(BST* root, int val){
    if(!root){                          //recursion ending condition : if we've reached the end of the tree, create a new node and return it
        cout<<"Number "<<val<<" is inserted."<<endl;
        return new BST(val);
    }
    if(val > root->data)                //walk throught the tree to reached the intended location while reconnecting the path walked with the return value
        root->right = Insert(root->right, val);
    else if(val < root->data)
        root->left = Insert(root->left, val);
    else                                //if we find a node with the target value, return root to keep the tree as is
        cout<<"Error. Number "<<val<<" exists."<<endl;
    return root;                        
}

BST* BST::InsertNT(BST* root, int val){ //Insert() with No Text
    if(!root){                          //recursion ending condition : if we've reached the end of the tree, create a new node and return it
        return new BST(val);
    }
    if(val > root->data)                //walk throught the tree to reached the intended location while reconnecting the path walked with the return value
        root->right = InsertNT(root->right, val);
    else if(val < root->data)
        root->left = InsertNT(root->left, val);
    else                                //if we find a node with the target value, return root to keep the tree as is
        cout<<"Error. Number "<<val<<" exists."<<endl;
    return root;                        
}

BST* BST::Delete(BST* root, int val){
    if(!root){                          //if we reached the end of the path without finding the intended node, the node doesn't exist. return root (NULL) for the recursion
        cout<<"Number "<<val<<" doesn't exist."<<endl;
        return root;
    }
    if(val > root->data)                //walk throught the tree to reached the intended location while reconnecting the path walked with the return value
        root->right = Delete(root->right, val);
    else if(val < root->data)
        root->left = Delete(root->left, val);
    else{                               //if we find a node with the target value, declare the deletion of the node
        cout<<"Number "<<val<<" is deleted."<<endl;
        if(root->left && root->right){     //if the node has both subtrees, Remove the smallest node in the right subtree while taking its value, then update the subtree
            root->right = Remove(root->right, root->data);
            return root;                //reconnect the previous ptr via recursion
        }
        else                            //if the node has eight 1 or 0 subtrees, connect the previous ptr to the subtree or NULL (if 0 subtrees)
            return root->left ? root->left : root->right;
    }
    return root;
}

BST* BST::DeleteNT(BST* root, int val){ //Delete() with No Text (non-existant error)
    if(!root){                          //if we reached the end of the path without finding the intended node, the node doesn't exist. return root (NULL) for the recursion
        return root;
    }
    if(val > root->data)                //walk throught the tree to reached the intended location while reconnecting the path walked with the return value
        root->right = DeleteNT(root->right, val);
    else if(val < root->data)
        root->left = DeleteNT(root->left, val);
    else{                               //if we find a node with the target value, declare the deletion of the node
        cout<<"Number "<<val<<" is deleted."<<endl;
        if(root->left && root->right){     //if the node has both subtrees, Remove the smallest node in the right subtree while taking its value, then update the subtree
            root->right = Remove(root->right, root->data);
            return root;                //reconnect the previous ptr via recursion
        }
        else                            //if the node has eight 1 or 0 subtrees, connect the previous ptr to the subtree or NULL (if 0 subtrees)
            return root->left ? root->left : root->right;
    }
    return root;
}

BST* BST::Remove(BST* root, int &val){  //Removes the smallest node in the tree and pass it's value back by reference
    if(!root->left && !root->right){    //if we've reached the end of the tree, reconnect the previous ptr to NULL via recursion
        val = root->data;
        return NULL;
    }
    else                                //walk through the tree prefering the smaller (left) side to reach the smallest node, while reconnecting the ptrs in the path
        root->left ? root->left = Remove(root->left, val) : root->right = Remove(root->right, val);
    return root;
}

void BST::Inorder(BST* root){
    if(!root)
        return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void BST::Preorder(BST* root){
    if(!root)
        return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void BST::Postorder(BST* root){
    if(!root)
        return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

void BST::PostorderVec(BST* root, vector<int> &post){
    if(!root)
        return;
    PostorderVec(root->left, post);
    PostorderVec(root->right, post);
    post.push_back(root->data);
}

void BST::Levelorder(BST* root){        //prints the tree in Levelorder with queue
    queue<BST*> myQ;
    BST* cur;
    myQ.push(root);                     //push the root into the queue
    while(!myQ.empty()){                //while loop would run #layers times
        for(int i = 0; i < myQ.size(); i++){    //for loop would run #nodes-in-each-layer times in each iteration (layer)
            cur = myQ.front();
            cout<<cur->data<<" ";
            if(cur->left)               //put all the subnodes that we encounter into the queue
                myQ.push(cur->left);
            if(cur->right)
                myQ.push(cur->right);
            myQ.pop();                  //pop the printed node from the queue
        }
    }
}

void BST::FindC(BST* root, int val, stack<int> &path){
    if(!root)
        return;
    path.push(root->data);
    cout<<root->data;
    if(root->data == val)
        return;
    cout<<"->";
    if(val > root->data)
        FindC(root->right, val, path);
    else
        FindC(root->left, val, path);
}

void BST::FindPath(BST* root, int a, int b){
    if(!root)
        return;
    if(root->data < a && root->data < b){
        cout<<root->data<<"->";
        FindPath(root->right, a, b);
    }else if(root->data > a && root->data > b){
        cout<<root->data<<"->";
        FindPath(root->left, a, b);
    }else{
        stack<int> path;
        FindC(root, a, path);
        if(a != root->data)
            cout<<"->";
        path.pop();
        while(!path.empty()){
            cout<<path.top();
            path.pop();
            if(!path.empty())
                cout<<"->";
        }
        if(b == root->data){
            cout<<endl;
            return;
        }
        cout<<"->";
        b > root->data ? FindC(root->right, b, path) : FindC(root->left, b, path);
        cout<<endl;
    }
}

bool Contains(int num, int target){     //checks if an int num Contains the target number
    if(!num)
        return false;
    return num % 10 == target ? true : Contains(num / 10, target);
}

void FindMeaty(){
    BST tree, *root = NULL;
    string line, filename;

    cout << "Please input the map filename : "; //get filename
    cin >> filename;
    ifstream myfile (filename);
    vector<int> values, postval;
    if (myfile.is_open()){
        while(getline(myfile,line)){
            values.push_back(stoi(line));       //stores values into a vector
        }
        cout<<"Load file success."<<endl<<endl;
        myfile.close();
    }else{
        cout << "Unable to open file\n";
        exit(0);
    }
    for(int i : values)
        root ? tree.InsertNT(root, i) : root = tree.InsertNT(root, i);    //construct the BST
    
    int sp, mp, bi;                     //get locations
    cout<<"Please input the sword location : ";
    cin>>sp;
    cout<<"Please input Meaty (dragon) location : ";
    cin>>mp;
    cout<<"Please input broccoli trap index : ";
    cin>>bi;
    cout<<endl;

    tree.PostorderVec(root, postval);
    for(int i : postval)                 //delete the nodes with values containing the trap index
        if(Contains(i, bi))
            tree.DeleteNT(root, i);

    cout<<endl<<"Cappo has successfully found his favorite Meaty <3"<<endl<<endl;
    cout<<"Shortest path to find Meaty :"<<endl;
    tree.FindPath(root, sp, mp);             //cout the stack containing the path
}

void BinarySearchTree(){
    BST tree, *root = NULL;
    bool done;
    while(!done){
        cout<<"(I)nsert a number"<<endl<<
        "(D)elete a number"<<endl<<
        "(S)earch a number."<<endl<<
        "(P)rint 4 kinds of orders"<<endl<<
        "(R)eturn."<<endl;

        char op;
        cin>>op;
        int num;

        switch(op){
            case 'i':
                cout<<"Enter numbers to insert : ";
                cin>>num;
                while(num != -1){
                    root ? tree.Insert(root, num) : root = tree.Insert(root, num);  //if the root is NULL, connect it to the node created and returned in Insert() 
                    cin>>num;
                }
                break;
            case 'd':
                cout<<"Enter numbers to be deleted: ";
                cin>>num;
                while(num != -1){
                    tree.Delete(root, num);
                    cin>>num;
                }
                break;
            case 's':
                cout<<"Enter numbers to search : ";
                cin>>num;
                while(num != -1){
                    tree.Search(root, num);
                    cin>>num;
                }
                break;
            case 'p':
                cout<<"The tree in prefix order : ";
                tree.Preorder(root);
                cout<<endl;
                cout<<"The tree in infix order : ";
                tree.Inorder(root);
                cout<<endl;
                cout<<"The tree in post order : ";
                tree.Postorder(root);
                cout<<endl;
                cout<<"The tree in level order : ";
                tree.Levelorder(root);
                cout<<endl;
                break;
            case 'r':
                done = true;
                break;
        }
    }
}

int main(){
    bool done;
    while(!done){
        cout<<"(1)Binary searching Tree."<<endl<<
        "(2)Finding Meaty."<<endl<<
        "(0)Escape and face to music next year."<<endl;

        int op;
        cin>>op;

        switch(op){
            case 1:
                BinarySearchTree();
                break;
            case 2:
                FindMeaty();
                break;
            case 0:
                done = true;
                break;
        }
    }
    return 0;
}