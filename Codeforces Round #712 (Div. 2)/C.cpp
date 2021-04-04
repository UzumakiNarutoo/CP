#include<bits/stdc++.h>
using namespace std ;
 
const int N = 3e5+5 ;
 
int t ,n ;
char str[N] ,ans[2][N] ;
bool ok(){
    if(str[0]!='1') return 0;
    if(str[n-1]!='1') return 0;
    int o = 0 ;
    for(int i=0;i<n;++i) o += str[i]=='1' ;
    return o%2==0 ;
}
int main(){
    cin >> t ;
    while(t--){
        scanf("%d%s",&n,str);
        if(!ok()){
            puts("NO");
            continue ;
        }
        bool flag = 0 ;
        for(int i=0;i<n;++i){
            if(str[i]=='1') continue ;
            if(!flag){
                ans[0][i] = '(' ;
                ans[1][i] = ')' ;
            }
            else{
                ans[0][i] = ')' ;
                ans[1][i] = '(' ;
            }
            flag ^= 1 ;
        }
        ans[0][0] = ans[1][0] = '(' ;
        ans[0][n-1] = ans[1][n-1] = ')' ;
        flag = 0 ;
        for(int i=1;i+1<n;++i){
            if(str[i]=='0') continue ;
            if(flag) ans[0][i] = ans[1][i] = ')' ;
            else ans[0][i] = ans[1][i] = '(' ;
            flag ^= 1 ;
        }
        puts("YES");
        for(int i=0;i<n;++i) printf("%c",ans[0][i]);
        puts("");
        for(int i=0;i<n;++i) printf("%c",ans[1][i]);
        puts("");
    }
    return 0;
}
