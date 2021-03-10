//Name: CS302.1001 - HW3 - Customer Header File
//Author: John Watson
//Date: 14 March 2021

#ifndef CUSTOMER
#define CUSTOMER

class Customer{
    private:
        // Member attributes
        int arrival_time;
        int processing_time;
        int departure_time;

        void set_departure_time();


    public:
        // Constructors
        Customer();
        Customer(int,int);
        Customer(const Customer&);

        // Setters
        void set_arrival_time(int);
        void set_processing_time(int);
        void set_departure_time(int);

        //Getters
        int get_arrival_time();
        int get_departure_time();
        int get_processing_time();

};

#endif
