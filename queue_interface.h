//Name: CS302.1001 - HW3 - Queue Interface
//Author: Ximena Vasquez Bueno
//Date: 14 March 2021

#ifndef QUEUE_INTERFACE
#define QUEUE_INTERFACE

template<class ItemType>
class QueueInterface{
    public:
        virtual bool isEmpty() = 0;
        virtual bool enqueue(const ItemType& newEntry) = 0;
        virtual bool dequeue() = 0;
        virtual ItemType peekFront() const = 0;
};

#endif
