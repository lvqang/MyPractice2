#include"maxHBLT.h"

template<typename T> void maxHBLT<T>::meld(binaryTreeNode<pair<int, T>>* x, binaryTreeNode<pair<int, T>>* &y)
{
    if(y == NULL)
    {
        return;
    }
    if(x == NULL)
    {
        x=y;
        return;
    }
    if(x->element.second < y->element.second)//select bigger element as root
    {
        binaryTreeNode<pair<int, T>> *tmp = x;
        x = y;
        y = tmp;
    }
    meld(x->rightChild, y);
    if(x->leftChild == NULL)
    {
        x->leftChild = x->rightChild;
        x->rightChild = NULL;
        x->element.first = 1;
    }
    else
    {
        if(x->leftChild->first < x->rightChild->first)
        {
            binaryTreeNode<pair<int, T>> *tmp = x->leftChild;
            x->leftChild = x->rightChild;
            x->rightChild = tmp;
        }
        x->element.first = x->rightChild->element.first+1;
    }
}


template<typename T> void maxHBLT::iniHBLT()
{
    std::cout<<"Please enter no more than 15 integers for establish maxHBLT:"<<std::endl;
    queue<pair<int, T>> maxHBLTqueue;//create queue
    T integer;
    while (std::cin>>integer)
    {
        shared_ptr< binaryTreeNode<pair<int, T>> > theBinTreeNode(new binaryTreeNode({1, integer}));
        maxHBLTqueue.queuePush(theBinTreeNode);
    }
    binaryTreeNode<pair<int, T>> *thebinTN1, *thebinTN2;
    while(maxHBLTqueue.queuePop(thebinTN1) != 3)
    {
         if(maxHBLTqueue.queuePop(thebinTN2) != 3)
         {
             meld(thebinTN1, thebinTN2);
             maxHBLTqueue.queuePush(thebinTN1);
         }
         else break;
    }
    root = thebinTN1;
}
























