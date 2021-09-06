#include<stdio.h>
int main(){
    int i,flag;
    char arr[100];
    scanf("%s",&arr);
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]==0 && arr[i+1]==0 && arr[i+2]==0 && arr[i+3]==0 && arr[i+4]==0 && arr[i+5]==0 && arr[i]+6==0){
            flag=0;
            break;
            
        }
        if(arr[i]==1 && arr[i+1]==1 && arr[i+2]==1 && arr[i+3]==1 && arr[i+4]==1 && arr[i+5]==1 && arr[i]+6==1){
            flag=0;
            break;
        }
       

    }
     if(flag==0){
            printf("YES\n");

        }

        else if(flag==1){
            printf("NO\n");
        }


}