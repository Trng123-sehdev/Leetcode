#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter string"<<endl;
    cin>>s;
    vector<int> dict;
    int maxlen=0; int start = -1;
    for(int i=0; i<s.size(); i++){
        if(dict[s[i]]> start){
            dict[s[i]]=i;
            maxlen=max(maxlen,i-start);
        }
        cout<<maxlen<<endl;
    }
    return 0;
}