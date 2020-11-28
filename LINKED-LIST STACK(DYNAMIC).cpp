#include<iostream>
using namespace std;

//HERE I HAVE IMPLEMENTED ALL THE FUCNTIONS FOR STACK(DYNAMIC)::::::::::::::::::::::::::

// [2]-FOR LINKED-LIST (DYNAMIC) STACK::::::::::::::::::::::

// (A) CREATING THE NODE AND TOP::::::::
class Node{
    public:
    int data;
    Node* nextnode;
};
Node* topnode=NULL;
int maximum1;
int maximum2;
/////////////////////////////////////////////////////////////////////

// (B) ADDING DATA AT TOP::::::::
void push(int integer){
    if(topnode==NULL){
        maximum1=integer;
        maximum2=integer;
    }
    else{
        if(integer>=maximum2){
            maximum1=maximum2;
            maximum2=integer;
        }
    }
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data = integer;
    newnode->nextnode = topnode;
    topnode = newnode;
}
///////////////////////////////////////////////////////////////////////

// (C) DELETING DATA FROM TOP:::::::
void pop(){
    if(topnode==NULL){
        cout<<"STACK IS ALREADY EMPTY\n";
    }
    else{
        if (topnode->data>=maximum2){
            maximum2=maximum1;
        }
        topnode = topnode->nextnode;
   }
}
//////////////////////////////////////////////////////////////////////////

// (D) FINDING MAX IN A LIST OF INT USING STACK:::::::
void findmaximum(){
    if(topnode==NULL){
        cout<<"THE STACK IS EMPTY\n";
    }else{
        cout<<maximum2<<"\n";
    }
}
///////////////////////////////////////////////////////////////////////////

// (E) DISPLAYING THE LINKED-LIST STACK::::::::
void display(){
    struct Node* iteratenode;
    if(topnode==NULL){
    cout<<"THE STACK IS EMPTY\n";
    }
    else {
        iteratenode = topnode;
        while (iteratenode != NULL) {
            cout<< iteratenode->data <<" ";
            iteratenode = iteratenode->nextnode;
      }
   }
   cout<<"\n";
}
///////////////////////////////////////////////////////////////////////////