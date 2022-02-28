#include <iostream>
#include <vector>

using namespace std;

int main(){
    cout << "What is the size of your vector? ";
    int size;
    cout<<"hi"<<endl;
    cin >> size;
    cout<<size<<endl;
    std::vector<std::vector<int>> ref(size);
}