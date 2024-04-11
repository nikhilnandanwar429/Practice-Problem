#include<stdio.h>
int main(){
    int n,m,k=0,i,j;
    printf("Enter size of 1st array : ");
    scanf("%d",&n);
    printf("Enter size of 2nd array : ");
    scanf("%d",&m);
    int arr1[n],arr2[m],arr[n+m];
    printf("Enter %d elements in ascending order \n",n);
    for( i=0 ; i<n ; i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter %d elements in ascending order \n",m);
    for( i=0 ; i<m ; i++){
        scanf("%d",&arr2[i]);
    }
    i=0,j=0;
    while(i<n && j<m){
        if(arr1[i] > arr2[j]){
            arr[k] = arr2[j];
            k++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr[k] = arr1[i];
            arr[k+1] = arr2[j];
            i++;
            j++;
            k = k+2;
        }
    }
    while(i<n){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr[k] = arr2[j];
        j++;
        k++;
    }
    printf("After merging \n");
    for(int i=0 ; i<m+n ; i++){
        printf("%d ",arr[i]);
    }
}
