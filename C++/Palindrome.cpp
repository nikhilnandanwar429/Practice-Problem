#include<iostream>
using namespace std;
bool IsPalindrome(string st,int s,int e){

    //base case
    if(s>e)
        return true;

    if(st[s] != st[e])
        return false;
    
    else
        return IsPalindrome(st,s+1,e-1);
    
}

int main() 
{
    string m = "NikhillihkiN";
    int e = m.length()-1;
    bool ans = IsPalindrome(m , 0 , e);
    if(ans)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}