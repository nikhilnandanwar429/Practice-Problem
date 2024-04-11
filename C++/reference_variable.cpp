#include<iostream>
using namespace std;

int& func(int a){
    int num = a;
    int& ans = num ;
    return ans;
}

void update2(int& n){
    n++;
}

void update1(int n){
    n++;
}


int main()
{

/*
    //REFERENCE VARIABLE == same memory but different names 
    int i = 5 ;
    
    //Creating reference variable 

    int& j = i ;

    cout<< i <<endl;
    i++;
    cout<< i <<endl;
    j++;
    cout<< j <<endl;

*/
    int n = 5 ;
    cout<<"Before update "<< n <<endl;
    update1(n);
    cout<<"After update1 "<< n <<endl;
    update2(n);
    cout<<"After update2 "<< n <<endl;


    func(n);
    
    

}