#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i=1;i<=n;i++)
#define d int
d main(){d c,n;cin>>c;f(p,c){cin>>n;d t[120][120],v=0,r;f(j,n)f(k,j){cin>>r;t[j][k]=r+max(t[j-1][k-1],t[j-1][k]);v=max(v,t[j][k]);}printf("%d\n",v);}}