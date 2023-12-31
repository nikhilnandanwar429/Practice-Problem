#include<iostream>
using namespace std;

int getSum(int* arr , int size){

    //base case
    if(size == 0)
    return 0;

    int sum = arr[size-1] + getSum(arr, size - 1);
    return sum;
}

int main()
{
    int arr[8] = {0,2,4,9,9,0,0,9};

    int size = 8;
    int ans = getSum(arr , size);
    cout << ans << endl;

} 