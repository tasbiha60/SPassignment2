#include<stdio.h>
int main(){
    int positive_n,count=0;
    scanf("%d",&positive_n);
    for(int i=2;i<positive_n;i++){
        if(positive_n%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("Prime Number\n");
    }
    else {
            printf("Not Prime Number\n");
    }

    return 0;
}
