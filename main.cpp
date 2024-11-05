#include"HeapT.h"
#include<iostream>

using namespace std;

int main()
{

    HeapT<int>* testing = new HeapT<int>(15);

    for( int i = 0; i < 15; i++)
    {
        testing->insert(i);
    }

    HeapT<int>* copied = new HeapT<int>(*testing);

    return 0;
}