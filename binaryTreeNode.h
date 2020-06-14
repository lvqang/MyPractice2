#ifndef _BINARYTREENODE_H
#define _BINARYTREENODE_H
#include "binaryTreeNode.h"
#include <iostream>

template<typename T> class binaryTreeNode//创建树节点
{
public:
        binaryTreeNode()
        {
                leftChild = rightChild = NULL;
        }
        binaryTreeNode(const T &theElement, binaryTreeNode<T> *theLeftChild = NULL, binaryTreeNode<T> *theRightChild = NULL)
        {
                element(theElement);//无法确定T 的类型，所以使用初始化方式
                leftChild = theLeftChild;
                rightChild = theRightChild;
        }
protected:

private:
        T element;
        binaryTreeNode<T> *leftChild, *rightChild;
};
#endif
