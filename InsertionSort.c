#include<stdio.h>
void inssort(int *arr,int n){
    int i,j,k,t;
    for(i=0;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(arr[i]>=arr[j]){
                t=arr[j];
                for(k=j-1;k>i;k--){
                    arr[j]=arr[k];
                    j--;
                }
                arr[j]=arr[i];
                arr[i]=t;
            }
        }
    }
}
int main(){
    int n,res;
    printf("Enter the size:");// 
    scanf("%d",&n);
    int arr[n];
    printf("Enter an elements of array ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    inssort(arr,n);
    printf("Sorted Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]); 
}
