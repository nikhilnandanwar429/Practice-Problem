#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cout<<"Enter1"<<endl;
        int c;
        cin>>c;
        int b[c];
        for(int j=0 ; j<c ; j++)
        {
            cout<<"enter2"<<endl;
            cin>>b[j];
        }
        a[i] = b[c];
    }
    for(int i=0 ; i<n ;i++)
    {
        cout<<a[i]<<" ";
    }
}