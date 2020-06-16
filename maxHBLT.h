#ifndef _MAXHBLT_H
#define _MAXHBLT_H
#include "maxHBLT.h"
#include "binaryTreeNode.h"
#include "queue.h"

template<typename T> class maxHBLT
{
public:
    void iniHBLT();
    void insertHBLT();
    void delmaxHBLT();
    void meld(maxHBLT<T> &theHBLT);
protected:

private:
    void meld(shared_ptr< binaryTreeNode<pair<int, T>> > &x, shared_ptr< binaryTreeNode<pair<int, T>> > &y);//combine two tree
    shared_ptr< binaryTreeNode<pair<int, T>> > root;//the maxHBLT's root
};


#endif
