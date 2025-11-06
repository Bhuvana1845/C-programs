#include<stdio.h>
int main(){
    int n,count0=0,count1=0;
    printf("enter array size");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(arr[i]==0)
           count0++;
        else if(arr[i]==1)
           count1++;
        
    }
    printf("Zero counts:%d\n",count0);
    printf("One counts:%d\n",count1);
    
}
