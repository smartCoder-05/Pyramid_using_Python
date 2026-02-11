//Linked list in DSA
#include<stdio.h>
#define Max 20

struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;

int main(){
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
    }
    }
    return 0;
}
