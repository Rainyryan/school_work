#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMedian(vector<int> vec){
//    Find median of a vector
    int median;
    size_t size = vec.size();
    sort(vec.begin(),vec.end());
    median = vec[(size/2)];
    cout<<"Median is "<<median<<'\n';
    return median;
}

int findMedianOfMedians(vector<vector<int> > values){
    vector<int> medians;

    for (int i = 0; i < values.size(); i++) {
        int m = findMedian(values[i]);
        medians.push_back(m);
    }

    return findMedian(medians);
}

void selectionByMedianOfMedians(const vector<int> values, int k){
//    Divide the list into n/5 lists of 5 elements each
    vector<vector<int> > vec2D;

    int count = 0;
    while (count != values.size()) {
        int countRow = 0;
        vector<int> row;

        while ((countRow < 5) && (count < values.size())) {
            row.push_back(values[count]);
            count++;
            countRow++;
        }
        vec2D.push_back(row);
    }

    cout<<endl<<endl<<"Printing 2D vector : "<<endl;
    for (int i = 0; i < vec2D.size(); i++) {
        for (int j = 0; j < vec2D[i].size(); j++) {
            cout<<vec2D[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

//    Calculating a new pivot for making splits
    int m = findMedianOfMedians(vec2D);
    cout<<"Median of medians is : "<<m<<endl;

//    Partition the list into unique elements larger than 'm' (call this sublist L1) and
//    those smaller them 'm' (call this sublist L2)
    vector<int> L1, L2;

    for (int i = 0; i < vec2D.size(); i++) {
        for (int j = 0; j < vec2D[i].size(); j++) {
            if (vec2D[i][j] > m) {
                L1.push_back(vec2D[i][j]);
            }else if (vec2D[i][j] < m){
                L2.push_back(vec2D[i][j]);
            }
        }
    }

//    Checking the splits as per the new pivot 'm'
    cout<<endl<<"Printing L1 : "<<endl;
    for (int i = 0; i < L1.size(); i++) {
        cout<<L1[i]<<" ";
    }

    cout<<endl<<endl<<"Printing L2 : "<<endl;
    for (int i = 0; i < L2.size(); i++) {
        cout<<L2[i]<<" ";
    }

//    Recursive calls
    if ((k - 1) == L1.size()) {
        cout<<endl<<endl<<"Answer :"<<m;
    }else if (k <= L1.size()) {
        return selectionByMedianOfMedians(L1, k);
    }else if (k > (L1.size() + 1)){
        return selectionByMedianOfMedians(L2, k-((int)L1.size())-1);
    }

}

int main()
{
    int values[] = {5,1,2,3,4,7,6};

    vector<int> vec(values, values + 8);

    cout<<"The given array is : "<<endl;
    for (int i = 0; i < vec.size(); i++) {
        cout<<vec[i]<<" ";
    }

    selectionByMedianOfMedians(vec, 3);

    return 0;
}