#include<stdio.h>
void convert(int n){
    if(n<0){
        printf("%d \n",n);
    }
    else{
        convert(n/2);
        printf("%d \n",n%2);
    }
}
int main(){

    convert(400);
    
}