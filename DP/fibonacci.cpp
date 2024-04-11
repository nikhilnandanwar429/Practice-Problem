#include<bits/stdc++.h>
using namespace std;

int fibo(int n , vector<int> &dp){
    //base case
    if(n<=1){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = fibo(n-1 , dp) + fibo(n-2 , dp);

    return dp[n];
}

int main(){
    int n;
    cin>>n;
//====>  1st type
    // vector<int> dp(n+1);
    // for(int i=0 ; i<n+1 ; i++){
    //     dp[i] = -1;
    // }

    // cout<<fibo(n , dp)<<endl;


//====> 2nd type
    vector<int> dp(n+1);

    dp[0] = 0;
    dp[1] = 1;

    for(int i=2 ; i<=n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    cout<<dp[n]<<endl;


    return 0;
}