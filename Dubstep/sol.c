#include<stdio.h>
#include<string.h>
int main(){
    char a[200];
    int i;
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B'){
            i=i+2;
            printf(" ");

        }
        else{
            printf("%c",a[i]);
        }
    }

}