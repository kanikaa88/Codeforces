#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int kth=a[k-1];
    int answer=0;
    for(int i=0;i<n;i++){
        if(a[i]>=kth && a[i]>0){
            answer++;
        }
}
cout<<answer<<endl;
return 0;
}

