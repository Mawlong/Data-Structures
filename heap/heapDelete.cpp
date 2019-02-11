#include <iostream>
//#include"maxHeap.cpp"
using namespace std;

void heapDelete(int *a, int& n)
{
    if(n == 0)
    {
        cout<<"Heap is empty!";
        return;
    }
    else
    {
        a[0] = a[n - 1];
        n--;
    }
}
