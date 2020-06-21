#ifndef _MAXHBLT_H
#define _MAXHBLT_H
#include "maxHBLT.h"
#include "binaryTreeNode.h"
#include "queue.h"

template<typename T> class maxHBLT
{
    //friend template<typename T> void printMaxHBLT(const shared_ptr<binaryTreeNode< pair<int, T> > > &theBT);
public:
    maxHBLT(shared_ptr< binaryTreeNode<pair<int, T>> > theBNode = NULL):root(theBNode){}
    void iniHBLT(ifstream &theIfs);
    void insertHBLT(const T &theElement);
    void delmaxHBLT();
    void meld(maxHBLT<T> &theHBLT);
    shared_ptr< binaryTreeNode<pair<int, T>> > root;//the maxHBLT's root
protected:

private:
    void meld(shared_ptr< binaryTreeNode<pair<int, T>> > &x, shared_ptr< binaryTreeNode<pair<int, T>> > &y);//combine two tree

};


#endif
