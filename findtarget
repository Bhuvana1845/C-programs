#include<stdio.h>
int findTarget(int n,int tar, int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]+arr[i+1] == tar)
           printf("[%d,%d]",i,i+1);
    }
}
int main(){
    int n,tar;
    printf("Enter array size");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the target");
    scanf("%d",&tar);
    findTarget(n,tar,& arr);
}
