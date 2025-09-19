#include<stdio.h>
int main(){
    int m,n,p,q,i,j,k;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d",&p,&q);
    int arr1[m][n],arr2[p][q],res[m][q];
    if(n==p){
        printf("Enter first matrix");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d %d",&arr1[i][j]);
            }
        }
        printf("Enter second matrix");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d %d",&arr2[i][j]);
            }
        }
        printf("The multiplied matrix");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                res[i][j]=0;
                for(k=0;k<n;k++){
                    res[i][j]=(res[i][j]+arr1[i][k]*arr2[k][j]);
                }
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }else
         printf("Invalid!");

}
