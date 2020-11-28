#include<iostream>
using namespace std;

//HERE I HAVE IMPLEMENTED ALL FUNCTIONS OF QUEUE(LINKED-LIST FORM):::::::::::::::::::

// (1) CREATING QUEUE(LINKED-LIST) CLASS:::::::::
class Queuenode{
    public:
    int value;
    Queuenode* nextnode;
};
Queuenode* front=NULL;
Queuenode* rear=NULL;

///////////////////////////////////////////////////////////////////

// (2) INSERTING VALUES TO QUEUE AT REAR::::::::
void insert(int val){
    Queuenode* temporary= new Queuenode;
    temporary->value=val;
    temporary->nextnode=NULL;
    if(rear==NULL){
        front=temporary;
        rear=temporary;
        return;
    }
    rear->nextnode=temporary;
    rear=temporary;
}
////////////////////////////////////////////////////////////////////

// (3) DELETING A VALUE FROM QUEUE AT FRONT:::::::::
void remove(){
    if(rear==NULL or front==NULL){
        cout<<"THE QUEUE IS ALREADY EMPTY\n";
        return;
    }
    Queuenode* temporary=front;
    front=front->nextnode;
    if(front==NULL){
        rear=NULL;
    }
    delete temporary;
}
/////////////////////////////////////////////////////////////////////

// (4) DISPLAY THE QUEUE::::::::::::
void display(){
    Queuenode* temporary=new Queuenode;
    temporary=front;
    if(front==NULL or rear==NULL){
        cout<<"THE QUEUE IS EMPTY\n";
        return;
    }
    while(temporary!=NULL){
        cout<<temporary->value<<" ";
        temporary=temporary->nextnode;
    }
    cout<<"\n";
}
///////////////////////////////////////////////////////////////////////
