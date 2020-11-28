#include<iostream>
using namespace std;
#define size 3 /*NOTE!!!!! : IF YOU WANT TO SPECIFY THE SIZE OF ARRAY STACK, SUBSTITUTE THAT INT SIZE IN PLACE OF 5. */


//HERE I HAVE IMPLEMENTED ALL THE FUCNTIONS FOR STACK(STATIC)::::::::::::::::::::::::::

// [1]-FOR ARRAY (STATIC) STACK:::::::::::::::::::::::::

// (A) CREATING STATIC-STACK CLASS:::::
class Stack{
    public:
    int topvalue;
    int maximum1;
    int maximum2;
    int a[size];
    void insert(int z);
    void pop();
    void display();
    void findmax();
    Stack(){
        topvalue=-1;
        int a[size];
    }
};
/////////////////////////////////////////////////////////////////// 

// (B) INSERTING ELEMENT/INTEGER AT TOP:::::
void Stack::insert(int x){
    if(topvalue>size-2){
        cout<<"STACK IS ALREADY FULLY OCCUPIED\n";
        return;
    }
    else if(topvalue==-1){
        maximum1=x;
        maximum2=x;
        topvalue=0;
        a[topvalue]=x;
        return;
    }
    else {
        a[++topvalue] = x;
        if (maximum2<x){
            maximum1=maximum2;
            maximum2=x;
        }
    }
}
/////////////////////////////////////////////////////////////////////////

// (C) DELETING ELEMENT/INTEGER AT TOP:::::
void Stack::pop(){
    if(topvalue==-1){
        cout<<"STACK IS ALREADY EMPTY\n";
        return;
    }
    
    if(topvalue>-1){
        if(maximum2==a[topvalue]){
            maximum2=maximum1;
        }
    }
    topvalue=topvalue-1;
}
///////////////////////////////////////////////////////////////////////

// (D) FINDING MAXIMUM ELEMENT/INTEGER IN A STATIC-STACK::::::::
void Stack::findmax(){
    if (topvalue==-1){
        cout<<"THE STACK IS EMPTY\n";
    }
    else{
        cout<<maximum2<<"\n";
    }
}
///////////////////////////////////////////////////////////////////////

// (E) DISPLAYING THE STACK::::::::
void Stack::display(){
    if(topvalue==-1){
        cout<<"THE STACK IS EMPTY\n";
        return;
    }
    for(int i=0;i<topvalue+1;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
/////////////////////////////////////////////////////////////////////