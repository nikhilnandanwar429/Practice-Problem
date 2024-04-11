#include<iostream>
using namespace std;

void update(int **p2)
{
    
   // p2 = p2 + 1;
    //Kuch change hoga?? ==> NO

   //*p2 = *p2 + 1;
   //Kuch change hoga?? ==> YES

    **p2 = **p2 + 1;
    //Kuch change hoga?? ==> YES

}
int main()
{
    int i = 5;
    int* p = &i ;
    int** p2 = &p ;
/*
    cout<<"printing p "<< p <<endl;
    cout<<"printting adress of &p "<< &p <<endl;

    cout<<"p2 "<< p2 <<endl;


    cout<<"printting adress of *p2 "<< *p2 <<endl;
cout<<endl;

    cout<< i <<endl;
    cout<< *p <<endl;
    cout<< **p2 <<endl;

cout<<endl;

    cout<< &i <<endl;
    cout<< p <<endl;
    cout<< *p2 <<endl;

cout<<endl;   

    cout<< &p <<endl;
    cout<< p2 <<endl;

cout<<endl;

    cout<<"Before "<< i <<endl;
    cout<<"Before "<< p <<endl;
    cout<<"Before "<< p2 <<endl;

cout<<endl;
    update(p2);
    cout<<"After "<< i <<endl;
    cout<<"After "<< p <<endl;
    cout<<"After "<< p2 <<endl;

*/
    int first = 8 ;
    int second = 18 ;
    int* ptr = &second ;
    *ptr = 9 ;
    cout<< first <<" "<< second <<endl;

    


}