#include<iostream>
using namesoace std;
int fac(int n){
  for(int i=1;i<=n;i++){
    fac=fac*i;
    }
    return fac;
    }
 int nCr(int n,int r){
    int num = fac(n);
    int den=fac(r)*fac(n-r);
    int ans= num/den;
    return ans;
    }
    int main(){
    cin>>n>>r;
    ans=nCr(n,r);
    cout<<ans<<endl;
    return 0;
    }
