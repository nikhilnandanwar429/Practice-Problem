#include<stdio.h>

int main(){
    int size;
    printf("enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d elements of array : \n",size);
    for(int i=0 ; i<size ; i++){
        scanf("%d",&array[i]);
    }
    printf("Before Reversing array : \n");
    for(int i=0 ; i<size ; i++){
        printf("%d ",array[i]);
    } printf("\n");
    for (int i = 0; i < (size/2)+1; i++){
        int t = array[i];
        array[i] = array[size-i-1];
        array[size-i-1] = t;
    }
    printf("After Reversing array : \n");
    for(int i=0 ; i<size ; i++){
        printf("%d ",array[i]);
    } printf("\n");
    
}