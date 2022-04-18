#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, a;
    
    cin>>N;
    int V[N];
    // V.reserve(N);
    for(int i = 0; i < N; ++i){
        cin>>a;
        V[i] = a;
    }
    // std::make_heap(V.begin(), V.end(), less<int>());
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(V, N, i);
    for(auto i : V) cout<<i<<' ';
    sort(V, V+N);
    cout<<'\n';
    for(auto i : V) cout<<i<<' ';
    cout<<'\n';
}
/*
8
10 20 25 6 12 15 4 16 

*/