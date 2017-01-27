//
// Created by Chris on 1/18/2017.
//

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
    SimpleArray::SimpleArray(allocTrack);
}