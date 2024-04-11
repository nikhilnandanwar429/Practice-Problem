#include<bits/stdc++.h>
using namespace std;

void sievePrime(int n , vector<int> &isPrime){

    for(int i=0 ; i<n+2 ; i++)
        isPrime[i] = 1;

    isPrime[0] = 0;
    isPrime[1] = 0;

    for(int i=2 ; i*i<= n; i++){
        if(isPrime[i]){
            for(int j=i*i ; j <= n ; j+=i){
                isPrime[j] = 0;
            }
        }
    }

}


int main(){
    int n;
    cin>>n;
    vector<int> isPrime(n+2);

    sievePrime(n , isPrime);

    for(int i=0 ; i<=n ; i++){
        if(isPrime[i])
        cout<<i <<" -> "<<isPrime[i]<<endl; 
    }

}