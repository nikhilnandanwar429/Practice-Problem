#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum = sum + arr[i];
    } 
    return sum;
}

int main()
{
/*
    char ch = 'q';
    cout<< sizeof(ch) <<endl;

    char* c = &ch;
    cout<< sizeof(c) <<endl;


    int n;
    cin>>n;

    //varible size array
    int* arr = new int[n];

    //Taking input in array
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int ans = getSum(arr , n);

    cout<<"Answer is "<< ans << endl;

    delete []arr;

*/
    //For 2D array

    int row;
    cin>>row;

    int col;
    cin>>col;

    int** arr = new int *[row];

    for(int i=0 ; i<row ; i++)
    {
        arr[i] = new int[col];
    }

    //taking input

    for(int i=0 ;i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cin>>arr[i][j];
        }
    }

    //taking output
    
    for(int i=0 ;i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    //releasing memory 
    
    for(int i=0 ; i<row ; i++)
    {
        delete [] arr[i];
    }


    delete []arr;

    return 0;
}





//HOMEWORK
// Jaggered array ==> Dynamic memory 