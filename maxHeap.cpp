#include"maxHeap.h"


template<T> void heap::initialize(T *theHeap, size_t theHeapsize)//初始化大顶堆
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

template<T> void heap::addnode(const T &theNode)//插入节点
{
    if(heapSize>=spacesize)
    {
        delete []heapTree;
        heapTree = new T[2*spacesize];
        spacesize = 2*spacesize;
    }
    size_t currentnode = ++heapSize;
    while (currentnode > 1 && heapTree[currentnode/2]<theNode)
    {
        heapTree[currentnode] = heapTree[currentnode/2];
        currentnode /=2;
    }
    heapTree[currentnode] = theNode;
}


template<T> void heap::delnode()//删除堆顶节点
{
    size_t child = 2;
    T lastElement = heapTree[heapSize--];
    while( child<= heapSize )
    {
            if(heapTree[child] < heapTree[child+1] && child<heapSize)
                    child++;
            if(lastElement >= heapTree[child])
                    break;
            heapTree[child/2] = heapTree[child];
            child *= 2;
    }
    heapTree[child/2] = lastElement;
}












