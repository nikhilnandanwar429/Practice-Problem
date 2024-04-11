//Program for counting number of digits in a random number
#include<stdio.h>
#include<unistd.h>

void countDigit(){
    int n,cnt = 0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n!=0){
        cnt++;
        n = n/10;
    }
    printf("No of digits is : %d",cnt);
}
int digitCount(int n,int cnt){
    if(n==0)
        return cnt;
    digitCount(n/10,cnt+1);
}

void forkTest(){
    
    int a;
    if(fork() && fork())
        fork();
    printf("1 ");
}

int main(){
    // int n,cnt=0;
    // printf("Enter number : ");
    // scanf("%d",&n);

    // //countDigit();

    // ;
    // printf(" number count : %d",digitCount(n,cnt));
    int a;
    if(fork() && fork())
        fork();
    printf("1 ");
    return 0;

}