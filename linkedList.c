//Linked list in DSA
#include<stdio.h>
#include<stdlib.h>

struct Node* insertBegin();
struct Node* insertEnd();
struct Node* insertRandom();
void delNodeBegin();
void delNodeEnd();
void delNodeRandom();
void search();
void displayList();


struct Node{
    int data;
    struct Node *next;
};
 struct Node *head=NULL;

int main(){
   
    int ch,i;
    //while with 1 has been execute until user not 
    while(1){
    printf("\n-------------------------------");
    printf("\n     *** MENU DRIVEN ***       ");
    printf("\n-------------------------------");
    printf("\ninsert node at beginning:1");
    printf("\ninsert node at end:2");
    printf("\ninsert node at random:3");
    printf("\ndelete node from begin:4");
    printf("\ndelete node from end:5");
    printf("\ndelete node from random:6");
    printf("\nsearch a node:7");
    printf("\ndisplay node list:8");
    printf("\n-------------------------------");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        insertBegin();
        break;
        case 2:
        insertEnd();
        break;
        case 3:
        insertRandom();
        break;
        case 4:
        delNodeBegin();
        break;
        case 5:
        delNodeEnd();
        break;
        case 6:
        delNodeRandom();
        break;
        case 7:
        search();
        break;
        case 8:
        displayList();
        break;
        case 0:
        // this case terminates the continue executing loop and pass the control outside of loop
        printf("\nThank you for visit..!");
        return 0;
        default:
        printf("\nInvalid choice!");
        break;
    }
    }
    return 0;
}
struct Node* insertBegin(){
struct Node *newNode,*temp;
    int x;
newNode = (struct Node*)malloc(sizeof(struct Node));  //To allocate the memory to a node
    printf("\nenter the data:");
    scanf("%d",&x);
newNode->data=x;
if(head==NULL){             //Create the first node, if no node is created 
    head=newNode;
    newNode->next=NULL;
}
else{
    temp=head;
    head=newNode;
    newNode->next=temp;
}
}

struct Node* insertEnd(){
struct Node *newNode,*temp;
    int x;
newNode = (struct Node*)malloc(sizeof(struct Node));  //To allocate the memory to a node
    printf("\nenter the data:");
    scanf("%d",&x);
newNode->data=x;
temp=head;
    while(temp->next!=NULL){
    temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}

struct Node* insertRandom(){
struct Node *newNode,*temp;
    int x,key;
newNode = (struct Node*)malloc(sizeof(struct Node));  //To allocate the memory to a node
    printf("\nenter the data:");
    scanf("%d",&x);
newNode->data=x;
printf("\nenter the key after which you want to be insert the data:");
    scanf("%d",&key);
    temp=head;
    while(temp!=NULL){
    if(temp->data==key){
    newNode->next=temp->next;
    temp->next=newNode;
    break;
    }
    temp=temp->next;
    }
}

void delNodeBegin(){
struct Node *temp;
  temp=head;
  head=temp->next;
  free(temp);
}

void delNodeEnd(){
struct Node *temp,*ptr;
  temp=ptr=head;
  while(temp->next!=NULL){
      ptr=temp;
      temp=temp->next;
  }
    ptr->next=NULL;
  free(temp);
}

void delNodeRandom(){
struct Node *temp,*ptr;
int key;
printf("\nenter the key that you want to be delete:");
    scanf("%d",&key);
    temp=ptr=head;
    while(temp!=NULL){
    if(temp->data==key){
        ptr->next=temp->next;
        free(temp);
    break;
    }
    ptr=temp;
    temp=temp->next;
    }
    if(temp==NULL){
        printf("\nSoory!, Element not found");
    }
}

void search(){
struct Node *temp;
    temp=head;
    int key;
    printf("\nenter the search key:");
    scanf("%d",&key);
    while(temp!=NULL){
    if(temp->data==key){
    printf("\nElement found!");
    break;
    }
    temp=temp->next;
    }
     if(temp==NULL){
        printf("\nSoory!, Element not found");
    }
}

void displayList(){
struct Node* temp;
    temp=head;
    while(temp!=NULL){
      printf("\t %d",temp->data);
        temp=temp->next;
    }
}


