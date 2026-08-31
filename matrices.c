#include<stdio.h>

int main(){
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,m,n,p;
    printf("enter the number of rows and columns for matrix1:");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\n enter the element[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the number of rows and columns for matrix2:");
    scanf("%d %d",&n,&p);
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("\n enter the element[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

   printf("\n the matrix 1 is:\n");
   for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\t %d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n the matrix 2 is:\n");
   for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("\t %d",b[i][j]);
        }
        printf("\n");
    }

 return 0;
}
