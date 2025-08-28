#include<stdio.h>
int main(){
    int n,q;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter an element to delete from array");
    scanf("%d",&q);
    for(int i=0;i<n;i++){
        if(arr[i]==q){
            for(int j=i+1;j<n;j++){
                arr[i]=arr[j];
                i++;
            }
        }
    }
    for(int i=0;i<n-1;i++)
        printf("%d ",arr[i]);
}
