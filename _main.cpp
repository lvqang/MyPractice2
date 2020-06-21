#include"maxHBLT.h"

template<typename T> void printMaxHBLT( shared_ptr<binaryTreeNode< pair<int, T> > > theBT)
{
    queue<pair<int, T>> qu;
    shared_ptr<binaryTreeNode< pair<int, T> > > theBTNode;
    qu.queuePush(theBT);
    while (qu.queuePop(theBTNode) != 3)
    {
        qu.queuePush(theBTNode->leftChild);
        qu.queuePush(theBTNode->rightChild);
        cout<<theBTNode->element.second<<"  "<<endl;
        //qu.queuePop(theBTNode);
    }
}


int main(int argc, char *argv[])
{
    //template<typename T> void printMaxHBLT(const shared_ptr<binaryTreeNode< pair<int, T> > > &theBT);
    string s1;
    if(argc<2)
    {
        //string file;
        cout<<"please enter file name: ";
        getline(cin, s1);
    }
    else
    {
        s1 = string(argv[1]);
    }
    ifstream ifs(s1);
    maxHBLT<size_t> MaxHBLT;
    MaxHBLT.iniHBLT(ifs);
    printMaxHBLT(MaxHBLT.root);

}
















