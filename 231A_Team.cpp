#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    if (!(cin >> n)) return 0;
    int ans=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
    
    }