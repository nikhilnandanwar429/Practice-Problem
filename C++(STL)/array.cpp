#include<iostream>
#include<array>
using namespace std;
int main()
{ 
    int basic[3] = {1,2,3};

    array<int,4> a = {1,2,3,5};
    int size = a.size();

    cout<<"Size of array --> "<<size<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"Elements at 2nd Index --> " <<a.at(2)<<endl;

    cout<<"Empty   --> " <<a.empty()<<endl;

    cout<<"First Elements  --> " <<a.front()<<endl;
    cout<<"last Elements --> " <<a.back()<<endl;
    
}