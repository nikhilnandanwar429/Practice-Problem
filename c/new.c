#include<stdio.h>

int fun (int num){
    int cnt = 0;
    while(num < 1000){
        cnt++;
        num <<= 1;
        printf(" cnt == > %d \n",cnt);
        printf(" num == > %d \n",num);
    }
    return cnt;
} 

int main(){
    int n;
    scanf("%d",&n);
    printf("final ans ==> %d \n \n " ,fun(n));
    return 0;
}