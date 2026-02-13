//print matrix using array in C

#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,m,n,r,c,ch;
    printf("\n---------------------------------");
    printf("\n          MENU DRIVEN            ");
    printf("\n---------------------------------");
    printf("\naddition of matrices:1");
    printf("\nsubtraction of matrices:2");
    printf("\nmultiplication of matrices:3");
    printf("\ndetermination of matrices:4");
    printf("\n---------------------------------");
    printf("\nenter your choice");
    scanf("%d",&ch);
    printf("\n enter the no. of row and column of matrix1:");
    scanf("%d %d",&r,&c);
    printf("\nenter the elements of matrix1:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\nelement %d:",i+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n enter the no. of row and column of matrix2:");
    scanf("%d %d",&m,&n);
    printf("\nenter the elements of matrix2:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\nelement %d:",i+1);
            scanf("%d",&b[i][j]);
        }
    }
    
    switch(ch){
        case 1:
    for(i=0;i<r;i++){
        for(j=0;j<n;j++){
            
        }
    }
    break;
        case 2:
    for(i=0;i<r;i++){
        for(j=0;j<n;j++){
            
        }
    }
    break;
        case 3:
    for(i=0;i<r;i++){
        for(j=0;j<n;j++){
            
        }
    }
    break;
        case 4:
    for(i=0;i<r;i++){
        for(j=0;j<n;j++){
            
        }
    }
    break;
    
    }
    printf("\nThe result is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}
