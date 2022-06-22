//https://bit.ly/3JoEvmF
class Deque
{int *arr;
 int front;
 int rear;
 int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
        
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //if queue is full
        if(isFull())
        {return false;}
        if(front==-1) //first element
        {
            front=0;
            rear=0;
        }
        else if(front==0 && rear!=size-1) //cyclic
        {front=size-1;}
        else //normal
        {
            front--;
        }
        arr[front]=x;
        return true;
        
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x) //same as cyclic queue enqueue
    {
        if(isFull())
            //queue is full
        {return false;}
        else if(front==-1) //first element
        {front=0;
        rear=0;
        arr[rear]=x;}
        else if(rear==size-1 && front!=0)//cyclic
        {
            rear=0;
            arr[rear]=x;
        }
        else //normal case
        {
            rear++;
            arr[rear]=x;
        }
            
        return true; 
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront() //same as cyclic queue enqueue
    {
       //queue is empty
        if(front==-1)
        {return -1;}
        int ans=arr[front];
        arr[front]=-1;
        //single element
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if(front==size-1) //cyclic
        {front=0;}
        else //normal case
        {front++;}
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
       //if queue is empty
        if(front==-1)
        {return -1;}
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear)//single element
        {
            front=-1;
            rear=-1;
        }
       else if(rear==0)//cyclic
        {rear=size-1;}
        else//normal
        {rear--;}
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(front==-1)//queue is empty
        {return -1;}
        else
        {return arr[front];}
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(front==-1)//queue is empty
        {return -1;}
        else
        {return arr[rear];}
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
       if(front==-1)//queue is empty
        {return true;}
        else
        {return false;}
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
  if((front==0 && rear==size-1)||(front!=0 && (rear==(front-1)%(size-1))))  //if front==0,then rear=0-1=-1 i.e. -ve
        {return true;}
        else
        {return false;}
    }
};