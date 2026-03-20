#include <stdio.h>
int arr[5]={43,12,89,33,22};
int i,j,temp,n=5;
int main(){
    for(i=0;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j >= 0 && arr[j]>temp ){
            arr[j+1]=arr[j];
            j--;    
        }
        arr[j+1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

