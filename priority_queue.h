//Name: CS302.1001 - HW3 - Priority Queue
//Author: John Watson
//Date: 14 March 2021

#ifndef PRIORITY_QUEUE
#define PRIORITY_QUEUE

#include "queue_interface.h"
#include "customer.h"

template<class ItemType>
class priorityQueue: public QueueInterface<ItemType>{
    private:
        //Member attributes
        static const int DEFAULT_CAPACITY = 50;
        ItemType items[DEFAULT_CAPACITY]; //array holding all items

        int front_dude; //points to first out
        int back_dude; //points to last out
        int item_count;

    public:
        // Constructor
        priorityQueue();

        // Interface functions
        bool isEmpty();
        bool enqueue(const ItemType& new_entry);
        bool dequeue();
        ItemType peekFront() const;

};

#include "priority_queue.cpp"
#endif
