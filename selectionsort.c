#include <stdio.h>
int i,j,temp,min,n=5;
int a1[5]={43,12,89,33,22};
int main(){
    printf("hell world \n");
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a1[j]<a1[min]){
                min=j;
            }
        }
        temp=a1[i];
        a1[i]=a1[min];
        a1[min]=temp;
    }
    for(i=0;i<5;i++){
    printf("%d ",a1[i]);
    } 
return 0;
}