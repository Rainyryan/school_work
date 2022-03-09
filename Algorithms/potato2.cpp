#include <iostream>
#include <vector>
using namespace std;

#define INSERSION_THRESH 5
#define swap(x, y) (t = *(x), *(x) = *(y), *(y) = t)
long IN=0;
vector<int> V;

static void merge(int* a, long an, long bn){
	int *b = a + an, *e = b + bn, *s, t;

	if (an == 0 || bn == 0 || !(*b < *(b - 1)))
		return;

	if (an < INSERSION_THRESH && an <= bn){
		for (int *p = b, *v; p > a; p--) 
			for (v = p, s = p - 1; v < e && *v < *s; s = v, v++){
				swap(s, v);
                IN++;
            }
		return;
	}

	if (bn < INSERSION_THRESH){
		for (int *p = b, *v; p < e; p++) 
			for (s = p, v = p - 1; s > a && *s < *v; s = v, v--){
				swap(s, v);
                IN++;
            }
		return;
	}

int *pa = a, *pb = b;

	for (s = a; s < b && pb < e; s++)
		if (*pb < *pa)
			pb++;
		else
			pa++;
	pa += b - s;

	for (int *la = pa, *fb = b; la < b; la++, fb++){
		swap(la, fb);
        IN += b-pa;
        // for(auto i : V) cout<<i<<"|";
        // cout<<'\n';
    }

	merge(a, pa - a, pb - b);
	merge(b, pb - b, e - pb);
}

#undef swap
#undef INSERSION_THRESH

void merge_count(int* a, long n){
	long m = (n + 1) / 2;

	if (m > 1)
		merge_count(a, m);
	if (n - m > 1)
		merge_count(a + m, n - m);
	merge(a, m, n - m);
}

int main(){
    int N,a;
    cin>>N;
    V.reserve(N);
    while(N--) {
        cin>>a;
        V.push_back(a);
    }

	merge_count(&V[0], V.size());
    cout<<IN%524287<<'\n';
}