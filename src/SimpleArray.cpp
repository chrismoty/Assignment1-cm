// File name: SimpleArray.h
// Name: Chris Motyczka
// VUnetid: motyczcr
// Email: christian.r.motyczka@vanderbilt.edu
// Class: CS3251
// Assignment Number: 1
// Honor statement: I have neither given nor received unauthorized aid on this assignment
// Last Changed: 1/26/17

#include "SimpleArray.h"

//Default Constructor
SimpleArray::SimpleArray(){

}

//Alt Constructor
SimpleArray::SimpleArray(AllocationTracker* cArray):
    mArray(cArray)
{

}

//Copy Constructor
SimpleArray::SimpleArray(SimpleArray& inArr):
    mArray(inArr.mArray)
{

}

//Destructor
SimpleArray::~SimpleArray()
    {
        mArray = 0;
    }

//Get
SimpleArray SimpleArray::get() const{
    AllocationTracker *A = mArray;
    SimpleArray getArray(A);
    return getArray;
}

//isNonNull
bool SimpleArray::isNonNull() const{
    if (!mArray){
        return false;
    }
    else{
        return true;
    }
}

//reset
void SimpleArray::reset(AllocationTracker* allocTrack){
    SimpleArray A(allocTrack);
    mArray = 0;
}

//Alt Reset (no parameters)
void SimpleArray::reset(){
    mArray = 0;
}

//swap
void SimpleArray::swap(SimpleArray A){
    AllocationTracker* tmp = mArray;
    mArray = A.mArray;
    A.mArray = tmp;
}