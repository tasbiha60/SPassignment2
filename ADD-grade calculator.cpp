#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    switch(m/10){
    case 10:
        printf("A\n");
        break;
        case 9:
        printf("B\n");
        break;
        case 8:
        printf("C\n");
        break;
        case 7:
        printf("D\n");
        break;
        case 6:
        printf("F\n");
        break;
        default:
            printf("Invalid Operation\n");

    }
    return 0;
}
