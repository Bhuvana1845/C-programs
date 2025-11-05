#include<stdio.h>
int main(){
    int n;
    printf("enter array size");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
        
    }
    printf("Maximum element:%d\n",max);
    printf("Minimum element:%d\n",min);
    
}
