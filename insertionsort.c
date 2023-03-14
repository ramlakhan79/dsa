#include<stdio.h>
#define maxsize 100
int main(){
    int n,i,j,temp,arr[maxsize];
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    arr[n];
    printf("Enter %d elements : ",n);
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("Sorted Array is : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}