#include<stdio.h>
int main(){
    char str1[1000],str2[1000];
    scanf("%s",str1);
    scanf("%s",str2);
    int i=0;
    while(str1[i]!='\0' && str2[i]!='\0'){
        if(str1[i]!=str2[i]){
            printf("strings are not equal\n");

        return 0;
    }
    i++;
}
if(str1[i]!='\0' && str2[i]!='\0'){
    printf("Strings are equal\n");
}
else{
    printf("Strings are equal\n");
}
return 0;
}
