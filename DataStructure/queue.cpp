#include <iostream>
using namespace std;

class QNode{
    public:
    int value;
    QNode* next;
    QNode(int val){
        value = val;
    }

};

class Queue{
    public:
    QNode* front;
    QNode* rear;

    void enQueue(int val){
        QNode* node = new QNode(val);
        rear->next = node;
        rear = node;
    }

    void deQueue(){
        QNode *temp = front; 
        front = front->next;
        *temp = NULL;
        delete(temp);
    }

    Queue(int val){
        front = new QNode(val);
        rear = front;
    }

};


int main(){
    Queue myQ = Queue(1);
    myQ.enQueue(2);
    myQ.enQueue(3);
    myQ.deQueue();
    myQ.deQueue();
    cout<< myQ.front->value;

    return 0;
};