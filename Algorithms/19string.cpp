#include <iostream>
#include <string>

using namespace std;

int append(string& s, string& t){
    int ret = 0;
    bool flag;
    for(int itt = 0; itt < t.size();){
        flag = false;
        for(int its = 0; its < s.size(); ++its){
            if(s[its] == t[itt]){
                ++itt;
                flag = true;
            }
        }
        ++ret;
        if(!flag) return -1;
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T = 0;
    string s, t;
    cin>>T;

    for(int i = 0; i < T; ++i){
        cin>>s>>t;
        cout<<append(s, t)<<'\n';
   }
}

/*
3 
aabce 
ace 
abacaba 
aax 
ty 
yyt

*/