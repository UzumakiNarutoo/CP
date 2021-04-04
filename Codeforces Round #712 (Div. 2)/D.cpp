#include<bits/stdc++.h>
using namespace std ;
 
const int N = 1e2+5 ;
 
int n ,a ;
queue<pair<int,int>> cur[2] ;
int main(){
    cin >> n ;
    for(int i=1;i<=n;++i) for(int j=1;j<=n;++j){
        if((i+j)%2==0) cur[0].push({i,j});
        else cur[1].push({i,j});
    }
    int rem = n*n ;
    while(rem--){
        cin >> a ;
        if(a!=2 && cur[1].size()){
            auto get = cur[1].front() ;
            cur[1].pop() ;
            cout << 2 << " " << get.first << " " << get.second << endl ;
        }
        else if(a!=1 && cur[0].size()){
            auto get = cur[0].front() ;
            cur[0].pop() ;
            cout << 1 << " " << get.first << " " << get.second << endl ;
        }
        else if(cur[0].size()==0){
            auto get = cur[1].front() ;
            cur[1].pop() ;
            if(a!=3) cout << 3 << " " << get.first << " " << get.second << endl ;
            else cout << 2 << " " << get.first << " " << get.second << endl ;
        }
        else if(cur[1].size()==0){
            auto get = cur[0].front() ;
            cur[0].pop() ;
            if(a!=3) cout << 3 << " " << get.first << " " << get.second << endl ;
            else cout << 1 << " " << get.first << " " << get.second << endl ;
        }
    }
    return 0;
}
