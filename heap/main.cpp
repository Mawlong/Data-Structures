#include <iostream>
#include"header.h"
using namespace std;

int main()
{
    int n, i, choice, ch=1;
    cout<<"enter no of elements of array\n";
    cin>>n;
    int a[20];
    for (i = 1; i <= n; i++)
    {
        cout<<"enter element"<<(i)<<endl;
        cin>>a[i];
    }
    build_maxheap(a,n);
    heapPrint(a,n);

    while(ch)
    {
        cout << "*****Options*****\n1.Insert element\n2.Delete element\n3.Display heap\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            heapInsert(a,n);
            build_maxheap(a,n);
            break;
        case 2:
            heapDelete(a,n);
            build_maxheap(a,n);
            break;
        case 3:
            heapPrint(a,n);

        default:
            break;
        }
        cout << "Press 1 to continue, 0 to exit:\n";
        cin >> ch;
    }
}