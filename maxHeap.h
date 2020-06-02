#include<iostream>
#include<string>
using namespace std;


class Node
{
    int

};

template<typename T> class heap
{
public:
    heap(size_t size):heapTree(new T[size]), spacesize(size), heapSize(0){}

    void initialize();//initial maxheap
    void addnode();//add node to heap
    void delnode();//delete node from heap
    void changeLen(T*, size_t oriLen, size_t desirLed);

private:
    ~heap()
    {
        delete []heapTree;
    }
    T *heapTree;
    size_t spacesize;
    size_t heapSize;
protected:
};
