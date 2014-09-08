#include<iostream>
#include<cstdio>

using namespace std;

typedef struct node{
        int data;
        node *next;
        };
        
void insert_at_start(node *start, int data){
      node temp = new node;
      temp->data = data;
      temp->link = start->link;
      start->link = temp;
  }
  
void print_list(node *start){
      node temp = start;
      if(start==NULL)
      printf("Linked list is empty\n");
      else
      printf("The data present in the list are : ");
      while(start!=NULL){
            printf("%d ",temp->data);
            temp = temp->next;
      }
} 

int main(){
      node *start = new node;
      int choice,x;
      while(1){
        printf("Enter the valid choice \n");
        printf("\n1. Insert data at the begining");
        printf("\n2. Print the data of the list");
        scanf("%d",&choice);
        if(choice==1){
            printf("\nEnter the data that you want to add");
            scanf("%d",&x);
            insert_at_start(start,x);
        }
        else if(choice==2){
            print_list(start);
        }
      }
      return 0;
}
