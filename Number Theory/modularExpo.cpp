#include<bits/stdc++.h>
using namespace std;

const int N = 0;

long long powerRecurssion(long long a , long long b){
    if(b == 0)
        return 1;
    if(b == 1)
        return a;
    
    int ans = power(a , b/2);
    
    //recursive call
    if(b%2 == 0)
        return ans * ans;
    else 
        return a * ans * ans;
}

long long power(long long a , long long b){
	long long  result = 1;
	while(b){
		if(b%2){
			result = result * a;
			b--;
		}
		else{
			a = a * a;
			b = b/2;
		}
	}
	return result;
}

int main(){
	long long  a,b;
	cin>>a>>b;
	cout<<power(a,b)<<endl;;
	
	return 0;
}