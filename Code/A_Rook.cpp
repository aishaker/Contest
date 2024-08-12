#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        string str = "abcdefgh";
        int num = s[1]-'0';
        for(auto u:str){
            if(u!=s[0]){
                cout<<(char)u<<num<<endl;
            }
        }
        for(int i=1; i<=8; i++){
            if(i!=num){
                cout<<s[0]<<i<<endl;
            }
        }
    }

    return 0;
}