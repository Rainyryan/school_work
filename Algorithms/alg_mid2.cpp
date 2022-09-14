#include <iostream>
#include <vector>

using namespace std;
vector<int> countSmaller(vector<int>& nums){
    int arr[20001] = {0}, n = nums.size();
    vector<int> answer(n);

    for(int i = n - 1; i >= 0; i--){
        int idx = nums[i] + 10000;
        int id = idx--, prefix_sum = 0;
        
        for(;id < 20001;id = id | (id + 1)) arr[id]++;
            
        for (; idx >= 0; idx = (idx & (idx + 1)) - 1) prefix_sum += arr[idx];
        
        answer[i] = prefix_sum;
    }

    return answer;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> V(n,0);
    for(int i = 0; i < n; i++){
        cin>>V[i];
    }
    V = countSmaller(V);
    for(int i : V) cout<<i<<' ';
}

/*


*/