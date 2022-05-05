#include <stdio.h>
#include <stdbool.h>

#define size_of_queue 5

int front = -1, rear = -1;
int arr[size_of_queue];

bool queue_is_full();
void enqueue(int);
void dequeue(int);

int main()
{       
    // dequeue(10);
   enqueue(10);
   enqueue(10);
   enqueue(10);
   enqueue(10);
   enqueue(10);
   dequeue(20);
   printf("%d,", arr[0]);
   printf("%d,", arr[1]);
   printf("%d,", arr[2]);
   printf("%d,", arr[3]);
   printf("%d,", arr[4]);
//    printf("Data in queue is %d", arr[1]);
//    printf("Data in queue is %d", arr[2]);
//    printf("Data in queue is %d", arr[3]);
//    printf("Data in queue is %d", arr[4]);
   
}

bool queue_is_full()
{
    if(rear == size_of_queue - 1) return true;

    else return false;

}

void enqueue(int data){

    if (queue_is_full()) printf("I'm full.\n");
    else{
        if(front == -1) front = 0;
        arr[front] = data;
        rear++;
        front++;
    } 
}

void dequeue(int data){
    if (front == -1 & rear == -1) printf("No Element\n");
    else{
        arr[front] = 0;
        rear--;
        front--;
    }
}
