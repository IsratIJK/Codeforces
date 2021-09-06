#include<stdio.h>
#include<string.h>
int main(){
    
    char arr[100];
    scanf("%s",&arr);
    if((strstr(arr, "0000000")) || (strstr(arr, "1111111"))){
        printf("YES\n");
    }
    else{
       printf("NO\n"); 
    }

}