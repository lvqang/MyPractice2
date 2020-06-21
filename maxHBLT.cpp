#include"maxHBLT.h"

template<typename T> void maxHBLT<T>::meld(shared_ptr< binaryTreeNode<pair<int, T>> > &x, shared_ptr< binaryTreeNode<pair<int, T>> > &y)
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
        shared_ptr< binaryTreeNode<pair<int, T>> > tmp = x;
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
            shared_ptr< binaryTreeNode<pair<int, T>> > tmp = x->leftChild;
            x->leftChild = x->rightChild;
            x->rightChild = tmp;
        }
        x->element.first = x->rightChild->element.first+1;
    }
}


template<typename T> void maxHBLT<T>::iniHBLT(ifstream &theIfs)
{
    std::cout<<"Please enter no more than 15 integers for establish maxHBLT:"<<std::endl;
    queue<pair<int, T>> maxHBLTqueue;//create queue
    T integer;
    istream is(theIfs);
    while (is>>integer)
    {
        shared_ptr< binaryTreeNode<pair<int, T>> > theBinTreeNode(   new binaryTreeNode<pair<int,T>>( {1, integer} )   );
        maxHBLTqueue.queuePush(theBinTreeNode);
    }
    shared_ptr< binaryTreeNode<pair<int, T>> > thebinTN1, thebinTN2;
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



template<typename T> void maxHBLT<T>::meld(maxHBLT<T> &theHBLT)
{
        meld(root, theHBLT.root);
        theHBLT.root = NULL;
}


template<typename T> void maxHBLT<T>::insertHBLT(const T &theElement)
{
        shared_ptr< binaryTreeNode<pair<int , T>> > theBinTreeNode(   new binaryTreeNode<pair<int, T>>( {1, theElement} )   );
        meld(root, theBinTreeNode);
}

template<typename T> void maxHBLT<T>::delmaxHBLT()//删除大顶堆
{
        shared_ptr< binaryTreeNode<pair<int , T>> > root1 = root->rightChild;
        root = root->leftChild;
        meld(root, root1);
}























