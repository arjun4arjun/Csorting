#include <stdio.h>
int i,j,temp;
int arr[5]={10,18,31,20,15};
int main(){
for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for (i=0;i<5;i++){
    printf("%d, ",arr[i]);
}
    return 0;
}