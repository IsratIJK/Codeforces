#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    int l;
    scanf("%s",&c);
    l=strlen(c);
    for(int i=0;i<l;i++){
        if(c[i]=='h' && l==0) l++;
        else if(c[i]=='e'  && l==1) l++;
        else if(c[i]=='l'  && l==2) l++;
        else if(c[i]=='l'  && l==3) l++;
        else if(c[i]=='o'  && l==4) l++;
        if(l==5) break;

    }
     if (l==5) printf("YES\n");
     else printf("NO\n");

} 