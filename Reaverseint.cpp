#include<iostream>
using namespace std;
int main(){
    int n;
    int reverse=0;
    cout<<"Enter your number:";
    cin>>n;
    int m=n;
    while(n!=0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n/=10;
    }
    cout<<"This is original value:"<<m<<endl;
    cout<<"this is reverse value:"<<reverse;

    return 0;
}

