//Name: CS302.1001 - HW3 - Priority Queue
//Author: John Watson
//Date: 14 March 2021

#include "priority_queue.h"

//Constructor
template<class ItemType>
priorityQueue<ItemType>::priorityQueue() : front_dude(0), back_dude(DEFAULT_CAPACITY - 1), item_count(0){
}

//Interface functions
template<class ItemType>
bool priorityQueue<ItemType>::isEmpty(){
        return item_count == 0;
}

template<class ItemType>
bool priorityQueue<ItemType>::enqueue(const ItemType& new_entry){
        bool can_insert = false;

        if(isEmpty()) {
                back_dude = (back_dude + 1);
                items[back_dude] = new_entry;

                std::cout << items[back_dude] << '\n';

        }else{

// Lower Numbers = High Priority
                bool proceed = false;
                int i = 0;

                while (proceed == false) {








                        // // find where along the index I'm inserting new_entry
                        // if (items[front_dude + i] < new_entry) {
                        //         i++;
                        //         //std::cout << "i: " << i << '\n';
                        // }else{
                        //
                        //         items[i] = new_entry;
                        //         for(int j = i+1; j < item_count + 1; i++) {
                        //                 items[j] = items[j+1];
                        //         }
                        //         proceed = true;
                        // }

                }

        }

        can_insert = true;
        item_count++;
        return can_insert;
}

template<class ItemType>
bool priorityQueue<ItemType>::dequeue(){
        bool can_insert = false;

        if(!(isEmpty())) { //check queue is not empty
                front_dude = (front_dude + 1) % DEFAULT_CAPACITY; //move front index to front of array if rightward drift is a problem
                item_count--;

                can_insert = true;
        }


        return can_insert;
}

template<class ItemType>
ItemType priorityQueue<ItemType>::peekFront() const {

        // if(isEmpty()) { //in case queue is empty
        //         std::cout << "This queue is empty." << std::endl;
        //         exit(0);
        // }

        return items[front_dude];
}
