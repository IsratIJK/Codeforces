#include<stdio.h>
int main(){
    int t,a,b,i,sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&a,&b);
        if(a+2<=b){
            sum++;

        }
    }
    printf("%d\n",sum);
}