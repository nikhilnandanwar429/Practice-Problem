#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(5,1);

    vector<int> last(a);
     for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Printing Last "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"Capacity --> "<<v.capacity()<<endl;
   
    v.push_back(1);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    
    v.push_back(2);
    
    cout<<"Capacity --> "<<v.capacity()<<endl;
   
    v.push_back(3);
    
    //Capacity = No of space assinged
    cout<<"Capacity --> "<<v.capacity()<<endl;
    //Size = No of element present
    cout<<"Size --> "<<v.size()<<endl;
    
    
    cout<<"Element at 2nd index "<<v.at(2)<<endl;


    cout<<"Front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<"Before pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
     for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"________>"<<v.empty() <<endl;;

    cout<<"Before Clear Size "<<v.size()<<endl;
    v.clear();
     cout<<"After Clear Size "<<v.size()<<endl;

    cout<<"________>"<<v.empty();

}