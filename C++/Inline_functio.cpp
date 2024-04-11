#include<iostream>
using namespace std;


// functions ==>  used to reduce the function calls overhead
// inline function applicable only for max 3 line functions
//inline for 1 line => yes 
//inline for 2 or 3 line function => maybe 
//no extra memory usage
//no functiion call overhead


inline int getMax(int& a,int& b)
{
    return (a>b) ? a : b; 
}

int main()
{
    int a=1 , b=2;
    
    int ans = 0;

    ans =  getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;

    return 0;

}