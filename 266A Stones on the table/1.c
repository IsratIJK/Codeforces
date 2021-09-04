#include<stdio.h>
int main(){
    int i,n,count=0,j;
    char arr[100];
    scanf("%d",&n);
    scanf("%s",&arr);
    for(i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
        }
    
    printf("%d\n",count);
}