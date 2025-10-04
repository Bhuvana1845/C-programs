#include<stdio.h>
#include<stdlib.h>
void arrayInput(int n,int *arr){
    printf("Enter array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void arrayDisplay(int n,int *arr){
    if(n==0){
        printf("Array is empty\n");
        return;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int linearSearch(int key,int n,int *arr){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("key found at position %d\n",i+1);
            return i;
        }
    }
    printf("key not found\n");
    return -1;
}
void binarySearch(int *arr,int low,int high,int key){
    while(low<=high){
        int mid=(low + high)/2; 
        if(arr[mid] == key){
            printf("key found at position:%d\n",mid);
            return;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high = mid-1;
        }
    }
    printf("key not found\n");
}
void insertion(int *n,int *arr,int pos,int key){
    for(int i= *n; i == pos-1;i--){
        *(arr+i) = *(arr+i-1);
    }
    *(arr+pos-1) = key;
    (*n)++;
}
void deleteIndex(int *n,int *arr,int index){
    for(int i=index;i < *n;i++){
        *(arr+i) = *(arr+i+1);
    }
    (*n)--;
    printf("Deleted Successfully :)\n");
}
void deleteValue(int *n,int *arr,int key){
    int idx = linearSearch(key,*n,arr);
    if(idx >= 0) deleteIndex(n,arr,idx);
    else printf("%d does not exist in array :(\n",key);

}
void reverse(int n,int *arr){
    int l=0, h=n-1;
    int temp;
    while(l<h){
        temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
        l++;
        h--;
    }
}
void bubbleSort(int n,int *arr){
    for(int step=0;step < n-1;step++){
        int swapped = 0;
        for(int i=0;i<n-1-step;i++){
            if(arr[i] > arr[i+1]){
                //swap arr[i] and arr[i+1]
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
}
int main(){
    int choice,n=0,key,pos,index;
    int arr[5];
    while(choice){
        printf("--------Array Operations-----------\n1.Input\n2.Output\n3.Linear Search\n4.Binary Search\n5.Insert at position\n6.Delete at Index\n7.Delete using Value\n8.Reverse\n9.Bubble Sort\nSelect an option:");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                printf("Enter array size:");
                scanf("%d",&n);
                arrayInput(n,arr);
                break;
            }
            case 2:{
                arrayDisplay(n,arr);
                break;
            }
            case 3:{
                printf("Enter key/value to search:");
                scanf("%d",&key);
                linearSearch(key,n,arr);
                break;
            }
            case 4:{
                printf("Enter key/value to search:");
                scanf("%d",&key);
                binarySearch(arr,0,n-1,key);
                break;
            }
            case 5:{
                printf("Enter value to insert");
                scanf("%d",&key);
                printf("Enter position to insert");
                scanf("%d",&pos);
                if((pos<=0)|(pos>n+1)){
                    printf("Index/position out of range!!!\n");
                    break;
                }
                insertion(&n,arr,pos,key);
                printf("Insertion Successful :)\n");
                break;
            }
            case 6:{
                printf("Enter index of element delete: ");
                scanf("%d",&index);
                if((index < 0)|(index > n-1)){
                    printf("Index/position out of range!!!\n");
                    break;
                }
                deleteIndex(&n,arr,index);
                break;
            }
            case 7:{
                printf("Enter value/key to delete: ");
                scanf("%d",&key);
                deleteValue(&n,arr,key);
                break;
            }
            case 8:{
                reverse(n,arr);
                break;
            }
            case 9:{
                bubbleSort(n,arr);
                break;
            }
            default:exit(1);

        }
    }
}
