
#include <iostream>
#include "priority_queue.h"


using namespace std;

int main(){
cout<<"Code is starting"<<endl;

        priorityQueue<int> test;

        cout<<"Here"<<endl;
        test.enqueue(5);
        test.enqueue(6);
        test.enqueue(2);

        


        for(int i = 0; i <10; i++) {
                cout<<"Here 2"<<endl;

                cout<<test.peekFront()<< endl;
                test.dequeue();
        }

        return 0;
}
