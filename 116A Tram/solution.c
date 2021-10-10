#include<stdio.h>
int main(){
    int a,b,t,i,p,c=0,max=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&a,&b);
        c=c-a;
        c=c+b;
        if(max<c){
            max=c;
        }
        
    }
    printf("%d\n",max);
}