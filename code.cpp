#include <bits/stdc++.h>
using namespace std;
int main(){
int n,r,result;
cin>>n;
if(n>51){
        r=n-51;
    result=r*3;
    cout<<result;
}
else{
    r=51-n;
    cout<<r;
}
return 0;
}
