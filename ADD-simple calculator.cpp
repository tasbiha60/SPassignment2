#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case'+':printf("%d\n",a+b);
        break;
        case'-':printf("%d\n",a-b);
        break;
        case'*':printf("%d\n",a*b);
        break;

        case'/':
            if(b!=0){
            printf("%d\n",a/b);
            }
            else{
                printf("dividing by zero not giving any particular ans\n");
            }
        break;
        default:
            printf("Invalid Operation\n");

    }
    return 0;
}
