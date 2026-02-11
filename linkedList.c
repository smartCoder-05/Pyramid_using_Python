//Linked list in DSA
#include<stdio.h>
#define Max 20

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head=NULL;
    int ch,i;
    //while with 1 has been execute until user not 
    while(1){
    printf("---------------------------------");
    printf("       *** MENU DRIVEN ***       ");
    printf("---------------------------------");
    printf("insert node at beginning:1");
    printf("insert node at end:2");
    printf("insert node at random:3");
    printf("delete node from begin:4");
    printf("delete node from end:5");
    printf("delete node from random:6");
    printf("search a node:7");
    printf("display node list:8");
    printf("---------------------------------");
    printf("enter your choice:");
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
        printf("Thank you for visit..!");
        return 0;
        default:
        printf("Invalid choice!");
        break;
    }
    }
    return 0;
}
struct Node* insertBegin(){
struct Node *newNode,*temp;
    int x;
newNode = (struct Node*)malloc(sizeof(struct Node));  //To allocate the memory to a node
    printf("enter the data:");
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
    printf("enter the data:");
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
    printf("enter the data:");
    scanf("%d",&x);
newNode->data=x;
printf("enter the key after which you want to be insert the data:");
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

struct Node* delNodeBegin(){
struct Node *temp;
  temp=head;
  head=temp->next;
  delete temp;
}

struct Node* delNodeEnd(){
struct Node *temp,*ptr;
  temp=ptr=head;
  while(temp->next!=NULL){
      ptr=temp;
      temp=temp->next;
  }
    ptr->next=NULL;
  delete temp;
}

struct Node* delNodeRandom(){
struct Node *temp,*ptr;
printf("enter the key that you want to be delete:");
    scanf("%d",&key);
    temp=ptr=head;
    while(temp!=NULL){
    if(temp->data==key){
        ptr->next=temp->next;
        delete temp;
    break;
    }
    ptr=temp;
    temp=temp->next;
    }
    if(temp==NULL){
        printf("Soory!, Element not found");
    }
}

void search(){
struct Node *temp;
    temp=head;
    while(temp!=NULL){
    if(temp->data==key){
    printf("Element found!");
    break;
    }
    temp=temp->next;
    }
     if(temp==NULL){
        printf("Soory!, Element not found");
    }
}




































