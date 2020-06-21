#ifndef _QUEUE_H
#define _QUEUE_H
#include "queue.h"
#include "binaryTreeNode.h"


template<typename T> class queue
{
public:
    queue(size_t theFirPointer = 0, size_t theLasPointer = 0):firstPointer(theFirPointer), lastPointer(theLasPointer) {}
    void queuePush(shared_ptr< binaryTreeNode<T> > theBinTreeNode);
    int queuePop(shared_ptr< binaryTreeNode<T> > &theBinTreeNode);
private:
    static const size_t queueSize = 20;
    size_t firstPointer, lastPointer;
    shared_ptr< binaryTreeNode<T> > queueVec[queueSize];
};

#endif
