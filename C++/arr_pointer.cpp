#include<iostream>     

using namespace std;
int main(){
    int arr[10] ={2,3,8,54,5,548,84,9};

    cout<<"Address of memory block is  "<< arr << endl;
    cout<< arr[0] << endl;
    cout<<"Address of memory block is  "<< &arr[0] << endl;

    cout<<" 4th " << *arr << endl;
    cout<<" 5th " << *arr + 1 << endl;
    cout<<" 6th " << *(arr + 1) << endl;
    cout<<" 7th " << *(arr) + 1 << endl;
    cout<<" 8th " << arr[2] << endl;
    cout<<" 7th " << *(arr + 2) << endl;

    // arr[i] = *(arr + i)
    // i[arr] = *(i + arr)

    int i=3;
    cout << " " << i[arr] <<endl;


    int temp[10];
    cout <<" 1st " << sizeof(temp) << endl;
    cout << " 2st " <<sizeof(*temp) << endl;
    cout << " 3rd " <<sizeof(&temp) << endl;

    int *ptr = &temp[0] ;

    cout <<" 4st " << sizeof(ptr) << endl;
    cout <<" 5t " << sizeof(*ptr) << endl;
     cout << " 6st " <<sizeof(&ptr) << endl;





}








