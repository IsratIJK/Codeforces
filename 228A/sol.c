#include<stdio.h>
int main(){
    int ar[4],count=0,i;
    for(i=0;i<4;i++){
        scanf("%d",ar[i]);
        for(i=0;i<3;i++){
            if(ar[i]==ar[i]+1) count++;
        }
        printf("%d\n",count);
    }
}