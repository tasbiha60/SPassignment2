#include<stdio.h>
int main(){
    int arr[]={5,2,1,8,0,7,9,2,10,20};
    int maxElement=0;
    for(int i=0;i<10;i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }

    }
    printf("max element = %d\n",maxElement);
    return 0;
}
