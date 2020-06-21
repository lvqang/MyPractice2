#ifndef _BINARYTREENODE_H
#define _BINARYTREENODE_H
#include "binaryTreeNode.h"
#include <iostream>
#include<memory>
#include<fstream>
using namespace std;

template<typename T> class binaryTreeNode//创建树节点
{
public:
        binaryTreeNode()
        {
                leftChild = rightChild = NULL;
        }
        binaryTreeNode(const T &theElement, shared_ptr< binaryTreeNode<T> > theLeftChild = NULL, shared_ptr< binaryTreeNode<T> > theRightChild = NULL)
        {
                element(theElement);//无法确定T 的类型，所以使用初始化方式
                leftChild = theLeftChild;
                rightChild = theRightChild;
        }

        T element;
        shared_ptr< binaryTreeNode<T> > leftChild, rightChild;
protected:

private:
};
#endif
