//https://bit.ly/3uL7QDG
//TC : O(1)
//SC : O(1)
#include<iostream>
using namespace std;
class Queue {
     int *arr;
        int qfront;
        int rear;
        int size;
public:
    Queue() {
        // Implement the Constructor
        size=100000;//since size is not passed as a parameter in constructor,so initialisng size to a large number
         arr=new int[size];
        qfront=0;
        rear=0;
       
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront==rear)
        {return true;}
        else
        {return false;}
    }

    void enqueue(int data)  //push
    {
        // Implement the enqueue() function
        if(rear==size) //check if queue is full
        {cout<<"Queue is full"<<endl;}
        else
        {arr[rear]=data;
        rear++;
        }
        
    }

    int dequeue()  //pop
    {
        // Implement the dequeue() function
        int ans=arr[qfront];
        if(qfront==rear)
        {return -1;}
        else
        { arr[qfront]=-1;
        qfront++;
        if(qfront==rear)
        {
            qfront=0;
            rear=0;
        }}
        return ans;
    }

    int front() {
        // Implement the front() function
         if(qfront==rear)
        {return -1;}
        else
        {return arr[qfront];}
    }
};