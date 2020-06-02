#include"maxHeap.h"


template<T> void heap::initialize(T *theHeap, size_t theHeapsize)
{
    size_t heapsize = theHeapsize;
    T *Heap = theHeap;

    for(size_t root=heapsize/2; root>=1; --root)
    {
        T theElement = Heap[root];
        size_t child = root*2;
        while(child<=heapsize)
        {
            if(child<heapsize && Heap[child]<Heap{child+1})
            {
                child++;
            }
            if(theElement>=Heap[child]) return;
            Heap[child/2] = Heap[child];
            child=*2;
        }
        Heap[child/2] = theElement;
    }
}

template<T> void heap::addnode(T &theNode)
{
    size_t child = 1;
    if(heapSize>=spacesize)
    {
        delete []heapTree;
        heapTree = new T[2*spacesize];
    }
    T theElement = heapTree[1];
    while (child<=heapSize)
    {
        if()
    }
}












