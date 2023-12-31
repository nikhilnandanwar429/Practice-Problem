#include<iostream>
using namespace std;

int fibo(int n)
{
    //base case 
    if(n==0 || n==1 )
    return n;
    

    int sum = fibo(n-1) + fibo(n-2) ;
    return sum;

}

int main()
{
    int n;
    cin>>n;

    int ans = fibo(n);
    cout<< ans <<endl;
    
}