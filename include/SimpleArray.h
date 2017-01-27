// File name: SimpleArray.h
// Name: Chris Motyczka
// VUnetid: motyczcr
// Email: christian.r.motyczka@vanderbilt.edu
// Class: CS3251
// Assignment Number: 1
// Honor statement: I have neither given nor received unauthorized aid on this assignment
// Last Changed: 1/26/17

#ifndef SIMPLE_ARRAY_H
#define SIMPLE_ARRAY_H

// Just include the special AllocationTracker class
#include "AllocationTracker.h"

class SimpleArray {
public:
    /*** Add some constructors/destructor goodness here ***/

    //Constructor
    SimpleArray();

    //Alt Constructor
    SimpleArray(AllocationTracker* cArray);


    //Copy Constructor
    SimpleArray(SimpleArray& inArr);

    //Destructor
    ~SimpleArray();


    /**
     *  getReference is const and returns a non-const type in order to mimic
     *  dereferencing raw pointers through the subscript operator as closely
     *  as possible. A pointer-that-is-const is permitted to alter the data
     *  where it points, but may never be pointed to a different address; the
     *  same should be true of SimpleArrays-that-are-const.
     */
    AllocationTracker& getReference(const uint32_t i) const;

    /*** Need to add some things here ***/

    //Get method returns the SimpleArray
    SimpleArray get() const;


    //isNonNull
    bool isNonNull() const;

    //reset
    void reset(AllocationTracker* allocTrack);

    //Alt reset (no parameters)
    void reset();

    //swap
    void swap(SimpleArray A);

    //release
    AllocationTracker* release();

private:
    /*** Maybe some things here ***/

    // Data members - make sure to use this
    AllocationTracker* mArray;
};

#endif
