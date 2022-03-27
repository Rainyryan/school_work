#include<iostream>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    while(1){
        int c = 0;
        int S = 0; //represents the stack.size() since we only need the size
        cout<<"enter string\n";
        cin>>s;
        for(auto it = s.begin(); it != s.end(); ++it){
            if(*it == '(') ++S;
            else if(S>0) --S;
            else ++c;
        }
        cout<<"output\n";
        S ? cout<<S : cout<<c;
        cout<<'\n';
    }
}