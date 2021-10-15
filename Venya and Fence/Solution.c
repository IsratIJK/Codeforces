#include<stdio.h>
int main(){
    int n,i,sum1=0,sum2=0,a,b;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++){
        scanf("%d",&n);
        if(n<=b){
           sum1+=1;
        }
        if(n>b){
           sum2=sum2+2;
        
    }

}
printf("%d\n",sum1+sum2);
}