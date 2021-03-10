//Name: CS302.1001 - HW3 - Customer Body File
//Author: John Watson
//Date: 14 March 2021

#include "customer.h"

// Constructors
Customer::Customer(){
        arrival_time = 0;
        departure_time = 0;
}
Customer::Customer(int new_arrival_time, int new_processing_time){
        set_arrival_time(new_arrival_time);
        set_processing_time(new_processing_time);
}
Customer::Customer(const Customer& rhs){
        set_arrival_time(rhs.arrival_time);
        set_processing_time(rhs.processing_time);
}

// Setters
void Customer::set_arrival_time(int new_arrival_time){
        arrival_time = new_arrival_time;
}
void Customer::set_departure_time(){
        departure_time = arrival_time + processing_time;
}
void Customer::set_processing_time(int new_processing_time){
        processing_time = new_processing_time;
}

//Getters
int Customer::get_arrival_time(){
        return arrival_time;
}
int Customer::get_departure_time(){
        return departure_time;
}
int  Customer::get_processing_time(){
        return processing_time;
}
