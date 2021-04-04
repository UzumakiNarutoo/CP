#include<bits/stdc++.h>
using namespace std ;
 
const int N = 1e5+5 ;
 
int t ,n ,a[N] ,c[N] ,idx[N] ;
int main(){
    scanf("%d",&n);
    long long ans = 0 ;
    for(int i=0;i<n;++i){
        scanf("%d%d",a+i,c+i) ;
        idx[i] = i ;
        ans += c[i] ;
    }
    sort(idx,idx+n,[](int i,int j){
        return a[i]<a[j] ;
    });
    int mx = a[idx[0]]+c[idx[0]] ;
    for(int j=0;j<n;++j){
        int i = idx[j] ;
        ans += max(0,a[i]-mx);
        mx = max(mx ,a[i]+c[i]);
    }
    printf("%lld\n",ans);
    return 0;
}
