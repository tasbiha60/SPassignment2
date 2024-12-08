#include<stdio.h>
int main(){
    int n1=0,n2=1,n3,count,num;
    scanf("%d",&num);
    printf("%d\n",n1);
     printf("%d\n",n2);
     for(count=3;count<=num;count++){
        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
     }

     return 0;


}
