#include<bits/stdc++.h>
using namespace std ;
 
const int N = 2e5+5 ;
 
int t ;
string str ;
int main(){
    cin >> t ;
    while(t--){
        cin >> str ;
        int pos = -1 ;
        for(int i=0;i<str.size();++i){
            int j = str.size()-i-1 ;
            if(str[i]!='a') pos = j ;
        }
        if(pos==-1) cout << "NO\n" ;
        else{
            cout << "YES\n";
            for(int i=0;i<pos;++i) cout << str[i] ;
            cout << 'a' ;
            for(int i=pos;i<str.size();++i) cout << str[i] ;
            cout << endl ;
        }
    }
    return 0;
}
