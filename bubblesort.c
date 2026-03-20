#include <stdio.h>
int i,j,temp,n=4;
int a1[5]={43,12,89,33,22};
int main(){
    printf("hell world \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(a1[j]>a1[j+1]){
            temp=a1[j];
            a1[j]=a1[j+1];
            a1[j+1]=temp;}
        }
   }
    for(i=0;i<5;i++){
    printf("%d ",a1[i]);
    } 
return 0;
}

//make sure to use 'j' instead of 'i' in the inner loop
//if condition is important
//flip the angular bracket of inner loop to arrange in descending order
//inner loop should have j<4-i representing 4 as the maximum index number of the array
