#include<iostream>

using namespace std;
void revStr(string& a,int s,int e){

    cout << "Call received for " << a << endl;
    cout << "s = " << s << " " << "e = " << e << endl;

    //base case
    if(s>e)
    return ;

   swap(a[s],a[e]);

    //recursive call
    revStr(a,s+1,e-1);
    
}

int main()
{
    string st = "abcde";
    int e = st.length()-1 ;
    revStr(st,0,e);
    cout<<st<<endl;
}