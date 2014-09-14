#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
        int data;
        struct Node *next;
}node;
node *start=(node *)malloc(sizeof(node));
 void create()
{
	    node *temp;
        temp = start;
        temp -> next = start;
        printf("\nEmpty circular linked list created\n");
 
}
void insert(node *pointer, int data)
{
        node *start = pointer;
        while(pointer->next!=start)
        {
                pointer = pointer -> next;
        }
        pointer->next = (node *)malloc(sizeof(node));
        pointer = pointer->next;
        pointer->data = data;
        pointer->next = start;
}
void insertf(node* pointer, int data)
{   
	
	node* temp=new node;
	temp->data=data;
	temp->next=start->next;
	start->next=temp;
	
}
void inserta(node* pointer,int data, int position)
{
	int i;
	node* temp=new node;
	temp->data=data;
	for(i=0;i<position;i++)
	{
		pointer=pointer->next;
	}
	temp->next=pointer->next;
	pointer->next=temp;
}
void delet(node *pointer, int data)
{
        node *start = pointer;
        while(pointer->next!=start && (pointer->next)->data != data)
        {
                pointer = pointer -> next;
        }
        if(pointer->next==start)
        {
                printf("Element %d is not present in the list\n",data);
                return;
        }
        node *temp;
        temp = pointer -> next;
        pointer->next = temp->next;
        free(temp);
        return;
}
void print(node *start,node *pointer)
{
        if(pointer==start)
        {
                return;
        }
        printf("%d ",pointer->data);
        print(start,pointer->next);
}
void deletatlast()
{
	   node *temp,*d,*j;
       temp=start;
       while(temp->next!=start)
       {
           d=temp;
           temp=temp->next;
       }

       d->next=start;
       delete temp;
}
void deletatbegin()
{
	node *temp;
    if(start==NULL)
    {
        printf("\nNo element found in the lisr\n");
        return;
    }
    else
    {
    temp=start;
    while(temp->next!=start)

    {
        temp=temp->next;
    }    
        if(start->next==start)
        {
            temp=start;
            start=NULL;
                delete temp;
            }
            else
            {

     			temp->next=start->next;
     			temp=start;
     			start=start->next;
        	}	
			delete temp;
    }
}
int main()
{
	   

        printf("1. Create\n");
        printf("2. Insert\n");
        printf("3. Delete any data\n");
        printf("4. Print\n");
        printf("5, Insert at first\n");
        printf("6, Insert at intermediate position\n");
        printf("7, Delete at last\n");
        printf("8, Delete at begining\n");
      
        while(1)
        {
                int query;
                scanf("%d",&query);
                if(query==1)
                {
					 create();
				}
                else if(query==2)
                {
                        int data;
                        scanf("%d",&data);
                        insert(start,data);
                }
                else if(query==3)
                {
                        int data;
                        scanf("%d",&data);
                        delet(start,data);
                }
                else if(query==4)
                {
                        printf("The list is ");
                        print(start,start->next);
                        printf("\n");
                }
                else if(query==5)
                {
						int data;
						scanf("%d",&data);
						insertf(start,data);
				}
				else if(query==6)
				{
					   int data,position;
					   scanf("%d%d",&data,&position);
					   inserta(start,data,position);
				}
				else if(query==7)
				{
					 deletatlast();
				}
				else if(query==8)
				{
					deletatbegin();
				}
                
        }


}
