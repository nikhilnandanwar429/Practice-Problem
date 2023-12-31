#include<iostream>
using namespace std;

void sumarr(int a[][10],int row )
{
    
    for(int i=0 ; i<row ; i++){
        int sum=0;
        for(int j=0 ; j<10 ; j++){
            sum = sum + a[i][j];
        }
        cout<<sum<<endl;
    }
    
}

int main()
{
    int row;
    cout<<"ENter row and column"<<endl;
    cin>>row;
    int a[row][10];
    cout<<"Enter elements"<<endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<10 ; j++){
            cin>>a[i][j];
        }
    }
    cout<<"prnting elements"<<endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<10 ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The sum of rows "<<sumarr(a,row);


}