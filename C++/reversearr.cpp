#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0 ; i<n ; i++ )
    {
        cin>>a[i];
    }
    int e=n-1 , s=0,k;
    while(s<=e)
    {
        swap(a[s],a[e]);
       // k = a[s];
       // a[s] = a[e];
       //a[e] = k;
        s++;
        e--;
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}