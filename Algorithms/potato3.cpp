#include <iostream>
#include <vector>

using namespace std;


vector<int> V, out;
int merge(vector<int> O, int* B, int*E){
    int *k, *l=B, *r=E, *M=&V[(*B+*E)/2];
    for(int* k = B; l<=M && r<=E; k++){
        if(*l < *r){
            O[l-&V[0]] = *l;
            l++;
        }
        else{
            O[r-&V[0]] = *r;
            r++;    
        }

    }
    while(l<M){
        O[l-&V[0]] = *l;
        l++;   
    }
    while(r<E){
        O[r-&V[0]] = *r;
        r++;    
    }
}


int mergeSort(vector<int> &V, int *B, int *E, vector<int> O){

    if(B == E) return 0;
    int *M = &V[(B-&V[0]+E-V[0])/2];
    cout<<*M;
    mergeSort(V, B, M, O);
    mergeSort(V, M, E, O);
    merge(O, B, E);
    
}

void merge_sort(int* a, long n)
{
	long m = (n + 1) / 2;

	if (m > 1) merge_sort(a, m);
	if (n - m > 1) merge_sort(a + m, n - m);
	merge(a, m, n - m);
}

int main(){
    // int N,a;
    // cin>>N;
    // V.reserve(N);
    // while(N--) V.push_back(a);
    int t;
    vector<int> V;
    out.reserve(10);
    for(int i = 5; i > 0; i--)
        V.push_back(i);
    //cout<<V[0]<<"|"<<V[V.size()-1]<<'\n';

    mergeSort(V, &V[0], &V[V.size()], out);
    for(auto i : V)
        cout<<i<<"|";
    cout<<"\n--------------\n";
    for(auto i : out)
        cout<<i<<"|";
    cout<<"\n--------------\n";
    
}

/*
4
4 3 2 1

4 3|2 1
3 4|1 2
1 3 2 4


1 2 3 4

6 
4 5 10 4 7 1
4 5 10|4 7 1
4 5|10\4 7|1
4 5 10|1 4 7



*/