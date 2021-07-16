#include<stdio.h>

int main(){
    int x;
    printf("Enter Your number : ");
    scanf("%d", &x);
    if(x%2 == 0){
        printf("%d is even number\n",x);
    }else{
        printf("%d is a odd number\n",x);
    }
    return 0;

}
