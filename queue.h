#ifndef _QUEUE_H
#define _QUEUE_H
#include "queue.h"
#include "binaryTreeNode.h"


template<typename T> class queue
{
public:
    queue(size_t theQueueSize = 20, size_t theFirPointer = 0, size_t theLasPointer = 0):queueSize(theQueueSize), firstPointer(theFirPointer), lastPointer(theLasPointer) {}
    void queuePush(binaryTreeNode<T> *);
    void queuePop(binaryTreeNode<T>* &theBinTreeNode);
private:
    static size_t queueSize;
    size_t firstPointer, lastPointer;
    binaryTreeNode<T> queueVec[queueSize];
};

#endif
