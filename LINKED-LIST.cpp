#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//I HAVE IMPLEMENTED ALL FUNCTIONS FOR LINKED LISTS HERE:::::::::::::::::::::::: 

// (1) CREATING A NODE CLASS::::::::::
class Node{
    public:
        int integer;
        Node* nextnode;
};
/////////////////////////////////////////////////////////

// (2a) INSERTING A VALUE AT THE STARTING NODE OF LINKED LIST::::::::::: 
void pushatstart(Node** refof1stnode,int newinteger){
    Node* newfirstnode= new Node();
    newfirstnode->integer=newinteger;
    newfirstnode->nextnode=*refof1stnode;
    *refof1stnode=newfirstnode;
}
///////////////////////////////////////

// (2b) INSERTING A VALUE AT ANY GIVEN NODE EXCEPT THE STARTING/ENDING NODE OF LINKED LIST::::::::::::
void pushatnode(Node* prevnode,int newinteger){
    if(prevnode==NULL){
        cout<<"Previous node cannot be null";
        return;
    }
    if(prevnode->nextnode==NULL){
        cout<<"TO ADD ELEMENT AT END, USE pushatend(headreference,data)\n";
        return;
    }
    Node* freshnode=new Node();
    freshnode->nextnode=prevnode->nextnode;
    freshnode->integer=newinteger;
    prevnode->nextnode=freshnode;
}
///////////////////////////////////////

// (2C) INSERTING A VALUE AT ENDING NODE OF LINKED LIST:::::::::::::
void pushatend(Node** refto1stnode, int int2push){   
    Node* newnode = new Node();  
    Node *iteratenode = *refto1stnode;  
    newnode->integer = int2push;   
    newnode->nextnode = NULL;   
    if (*refto1stnode == NULL){
        *refto1stnode = newnode;   
        return;   
    }   
    while (iteratenode->nextnode != NULL){   
        iteratenode = iteratenode->nextnode;
    }   
    iteratenode->nextnode = newnode;   
    return;   
}
////////////////////////////////////////////////////////

// (3) DELETING A NODE/ELEMENT BY THE VALUE OF THE INTEGER::::::::
void deletenode(Node** refof1stnode,int inttodelete){
    Node* iteratenode=*refof1stnode;
    Node* justbforecurrentnode=NULL;
    if(iteratenode!=NULL and iteratenode->integer==inttodelete){
        *refof1stnode=iteratenode->nextnode;
        delete iteratenode;
        return;
    }
    while(iteratenode!=NULL and iteratenode->integer!=inttodelete){
        justbforecurrentnode=iteratenode;
        iteratenode=iteratenode->nextnode;
    }
    if (iteratenode==NULL){
        cout<<"Element does not exist";
        return;
    }
    justbforecurrentnode->nextnode=iteratenode->nextnode;
    delete iteratenode;
}
///////////////////////////////////////

// (4) SEARCH FUNCTION TO CHECK IF LIST HAS AN ELEMENT::::::
void count(Node* refto1stnode, int int2search){
    Node* iteratenode = refto1stnode; 
    while (iteratenode != NULL){ 
        if (iteratenode->integer== int2search){ 
            cout<<"THE ELEMENT IS PRESENT\n";
            break;
        } 
        iteratenode = iteratenode->nextnode; 
    }
    if(iteratenode==NULL){
        cout<<"THE ELEMENT IS NOT PRESENT\n";
    }
}
/////////////////////////////////////////

// (5) INSERTING AN ELEMENT IN SORTED ORDER TO A LINKED LIST:::::::
void sortinsert(Node** refto1stnode,int int2push){
    Node* iteratenode=*refto1stnode;
    if (iteratenode->integer>int2push or *refto1stnode==NULL){
        pushatstart(refto1stnode,int2push);
        return;
    }
    while(iteratenode->nextnode->integer<int2push){
        iteratenode=iteratenode->nextnode;
        if(iteratenode->nextnode==NULL){
            pushatend(refto1stnode,int2push);
            return;
        }
    }
    Node* insert=NULL;
    insert=new Node();
    insert->integer=int2push;
    insert->nextnode=iteratenode->nextnode;
    iteratenode->nextnode=insert;
}
/////////////////////////////////////////////////////////