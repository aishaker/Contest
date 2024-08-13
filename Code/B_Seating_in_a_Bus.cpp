#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

bool is_valid(int x,int a[],int n){
    bool f = true;
    for(int i=0; i<n; i++){
        if(a[i]==(x+1) || a[i]==(x-1)){
            f = true;
            break;
        }
    }
    return f;
}

int main(){
    optimize();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        bool f = true;
        for(int i=1; i<n; i++){
            int b = a[i];
            if(!is_valid(b,a,i)){
                f = false;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}