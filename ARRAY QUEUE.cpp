#include<iostream>
using namespace std;


// HERE I HAVE IMPLEMENTED ALL FUNCTIONS OF QUEUE (ARRAY FORM)::::::::::::::::::::::::

// (1) CREATING QUEUE CLASS::::::::::
class Queue{
    public:
    int front;int rear;int size;int queue[];
    Queue(int max){
        int queue[max];front=-1;rear=-1;size=max;
    }
    void insert(int value);
    void display();
    void remove();
};
///////////////////////////////////////////////////////////////////
// (2) ADDING VALUES TO QUEUE AT REAR::::::::::
void Queue::insert(int value){
    if (rear==size-1){
        cout<<"THE QUEUE IS ALREADY OCCUPIED COMPLETELY\n";
        return;
    }
    if (front==-1){
        front=0;
    }
    rear=rear+1;
    queue[rear]=value;
}
////////////////////////////////////////////////////////////////////
// (3) DELETING VALUES FROM QUEUE FROM FRONT:::::::::::
void Queue::remove(){
    if (front==-1 or front>rear){
        cout<<"QUEUE IS ALREADY EMPTY\n";
        return;
    }
    front=front+1;
}
////////////////////////////////////////////////////////////////////
// (4) DISPLAYING THE QUEUE:::::::::::::::
void Queue::display(){
    if(front==-1 or front>rear){
        cout<<"THE QUEUE IS EMPTY\n";
        return;
    }
    for(int i=front;i<rear+1;i++){
        cout<<queue[i]<<" ";
    }
    cout<<"\n";
}
/////////////////////////////////////////////////////////////////////    
