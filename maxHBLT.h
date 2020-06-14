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
protected:

private:
    void meld(binaryTreeNode<pair<int, T>>* &x, binaryTreeNode<pair<int, T>>* &y);//combine two tree
    binaryTreeNode<pair<int, T>> *root;//the maxHBLT's root
};


#endif
