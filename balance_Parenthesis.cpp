#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isValid(string s){
    int n=s.size();
    stack<char> st;
    bool ans = true;
    for(int i=0; i<n; i++){
        if(s[i] =='{' or s[i]=='(' or s[i]=='['){
            st.push(s[i]);
        }
        else if(!st.empty() and s[i]==')'){
            if(st.top() == '('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
         else if(s[i]==']'){
            if(!st.empty() and st.top() == '['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
         else if(!st.empty() and s[i]=='}'){
            if(st.top() == '{'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }
    if(!st.empty())
    return false;

    return ans;
}
int main(){
    string s="{([]}";
    if(isValid(s)){
        cout<<"String is valid";
    }else{
        cout<<"String is not valid";
    }
}