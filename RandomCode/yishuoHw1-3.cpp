#include<iostream>

using namespace std;

class queue{
    int *arr, front, rear, size, capacity;
    public:
    queue(int);
    ~queue();

    void push(int);
    int top();
    int pop();
    bool empty();
};
queue::queue(int size){
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    this->size = 0;
}
queue::~queue(){
    delete[] arr;
}
bool queue::empty(){
    return this->size == 0;
}
void queue::push(int item){
    ++rear %= capacity;
    arr[rear] = item;
    ++size;
}
int queue::pop(){
    int ret = arr[front];
    ++front %= capacity;
    --size;
    return ret;
}
int queue::top(){
    return arr[front];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int time = 0;
    queue Q(5);

    int T[5], C[5];
    cout<<"enter arrival times\n";
    for(int i = 0; i < 5; ++i) cin>>T[i];
    cout<<"enter coin amounts\n";
    for(int i = 0; i < 5; ++i) cin>>C[i];

    

}