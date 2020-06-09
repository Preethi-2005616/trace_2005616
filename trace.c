#include<stdio.h>
int main(){
    int a[10][10],t,i,j,r,c;
    printf("enter the order of matrix\n");
    scanf("%d%d",&r,&c);
    printf("enter the values\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
            }
     t=0;
     if(r==c){
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
           if(i==j)
             t=t+a[i][j];
                }
               }
      printf("\ntrace of the matrix = %d",t);
            }
      else
           printf("\nNo diagonal elements");
           printf("\n");

        return 0;
}

