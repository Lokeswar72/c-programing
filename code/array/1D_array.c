#include<stdio.h>

int main(){
    int i,size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements of the array are\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}