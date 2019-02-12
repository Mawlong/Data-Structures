#include <iostream>
using namespace std;

void heapPrint(int *a, int n)
{
    int i;
    cout<<"\nMax Heap: \n";
    for (i = 1; i <= n; i++)
        cout<<a[i]<<endl;    
}