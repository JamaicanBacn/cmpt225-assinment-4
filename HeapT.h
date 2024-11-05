
#include<iostream>

#pragma once

template <class T>
class HeapT
{
    public:

        HeapT(int i)
        {
            capacity = i;
            arr = new T[capacity];
            elements = 0;
        }

        HeapT(const HeapT& reference)
        {

            capacity = reference.capacity;
            arr = new T[capacity];

            for( int i = 0; i < capacity; i++)
            {
                arr[i] = reference.arr[i];
            }


        }

        void insert(T new_data)
        {
            // check the capacity

            if(elements == capacity)
            {
                return;
            }

            arr[elements] = new_data;
            bubble_up(elements);
            elements++;


        }


        int size()
        {
            return capacity;
        }


    private:
        T* arr;
        int capacity;
        int elements;

        void bubble_up(int index)
        {
            int parent = (index-1)/2;
            int temp;

            while( index > 0 && arr[index] > arr[parent])
            {
                temp = arr[index];
                arr[index] = arr[parent];
                arr[parent] = temp;
                bubble_up(parent);
            }
        }
};
