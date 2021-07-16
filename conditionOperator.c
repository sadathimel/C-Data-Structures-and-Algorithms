#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("This is a vawel");
    }else{
        printf("This is a concunent");
    }
    return 0;
}
