#include<stdio.h>
#define SIZE 10

void enQueue();
void deQueue();
void display();

int queue[SIZE], front = 0, rear = 0;
void main()
{
   int value, choice,c=1;
   while(c){
      printf("\n\n*** MENU ***\n");
      printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1:  enQueue();
		 break;
	 case 2: deQueue();
		 break;
	 case 3: display();
		 break;
	 case 4: c=0;
		 break;
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}void enQueue(){
   if(SIZE == rear)
      printf("\nQueue is Full!!! Insertion is not possible!!!");
   else{
	   int element;
	   printf("enter the element to be inserted\n");
	   scanf("%d",&element);
      queue[rear] = element;
      rear++;
      printf("\nInsertion success!!!");
   }
}void deQueue(){
   if(front == rear)
      printf("\nQueue is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", queue[front]);
      //front++;
      int i;
      for(i=0;i<rear-1;i++)
      {
	      queue[i]=queue[i+1];

   }
      rear--;
}
}
void display(){
   if(front == rear)
      printf("\nQueue is Empty!!!");
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=front; i<rear; i++)
	  printf("%d\t",queue[i]);
   }
}