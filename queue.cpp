#include <iostream>
using namespace std;
class queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    queue()
    {
        size = 100;
        int *arr[100];
        front = 0;
        rear = 0;
    }

    int IsEmpty(){
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

    void enQueue(int data)
    {
        if (rear == size)
        {
            cout << "The Queue is full";
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void deQueue()
    {

        if (front == rear)
        {
            cout << "The Queue is full";
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    int front(){

        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};
int main()
{

    return 0;
}