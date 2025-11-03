#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char> fishy;
    for(char t:s){
        fishy.insert(t);

    }
    if(fishy.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}