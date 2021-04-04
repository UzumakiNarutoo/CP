#include<bits/stdc++.h>
using namespace std ;
 
const int N = 3e5+5 ;
 
int t ,n ,pre[N][2] ;
char a[N] ,b[N] ;
int main(){
    cin >> t ;
    while(t--){
        scanf("%d%s%s",&n,a,b);
        for(int i=0;i<n;++i){
            pre[i][0] = pre[i][1] = 0 ;
            ++pre[i][a[i]-'0'];
            if(i){
                pre[i][0] += pre[i-1][0] ;
                pre[i][1] += pre[i-1][1] ;
            }
        }
        bool flip = 0 ,ok = 1 ;
        for(int i=n-1;i>=0;--i){
            int cura = (a[i]-'0')^flip ;
            int curb = (b[i]-'0') ;
            if(cura==curb) continue ;
            if(pre[i][0]==pre[i][1]) flip ^= 1 ;
            else ok = 0 ;
        }
        puts(ok?"YES":"NO");
    }
    return 0;
}
