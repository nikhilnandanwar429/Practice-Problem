#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isValidParenthesis(string exp){

    stack<char> s;
    for(int i=0 ; i<exp.size() ; i++){

        char ch = exp[i];

        //If opening bracket, Stack Push
        //if close bracket, stacktop check and pop

        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{

            //for closing bracket
            if(!s.empty()){
                char top = s.top();

                if( (ch == ')' && top == '(') || 
                (ch == '}' && top == '{') || 
                (ch == ']' && top == '[') ) {
                    s.pop();
                }

                else
                    return false;
            }

            else{
                return false;
            }
        }
    }
    if(s.empty())
        return true;
    
    else
        return false;
}

int main()
{
    string s;
    cin>>s;

    bool ans = isValidParenthesis(s);

    if(ans)
        cout<<"Sahi hai"<<endl;

    else
        cout<<"Nahi hai"<<endl;
}
