#include<stdio.h>
int main(){
    
    int i,n,A=0,B=0;
    scanf("%d",&n);
    char c[n];
    scanf("%s",c);
     
    
        for(i=0;c[i]!='\0';i++){
        if(c[i]=='A') A++;
        else if(c[i]=='D') B++;
        } 
        
    
    if(A>B) printf("Anton\n");
    else if(A<B) printf("Danik\n");
    else printf("Friendship\n");
    
}