#include"queue.h"


template<typename T> void queue<T>::queuePush(shared_ptr< binaryTreeNode<T> > theBinTreeNode)
{

    queueVec[lastPointer] = theBinTreeNode;
    lastPointer = (lastPointer+1)%queueSize;
    if(firstPointer == lastPointer)
    {
        std::cout<<"Warning: the queue is full!"<<std::endl;
        return;
    }
}


template<typename T> int queue<T>::queuePop(shared_ptr< binaryTreeNode<T> > &theBinTreeNode)
{
    if(firstPointer == lastPointer)
    {
        std::cout<<"Warning: the queue is empty!"<<std::endl;
        return 3;
    }
    theBinTreeNode = queueVec[firstPointer];
    firstPointer = (firstPointer+1)%queueSize;
}
