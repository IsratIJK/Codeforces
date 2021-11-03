#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,o,result;
    cin>>m>>n>>o;
    result=m+n+o;
    result=max(result,(m*n*o));
    result=max(result,((m+n)*o));
    result=max(result,((m*n)+o));
    result=max(result,(m*(n+o)));
    result=max(result,(m+(n*o)));
    cout<<result<<endl;


}