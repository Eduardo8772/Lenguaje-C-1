#include<stdio.h>
int main(){
    float pi = 0;
    int i, j = 0;

    for(i = j; i<=1000000; i+=2){
        if(i == 1 || j==4) {
            pi = pi + (4/(float)i);
            j = 2;
        } else {
            pi = pi-(4/(float)i);
            j = j +2;
        }
    }
    printf("el valor de pi es:%f",pi);
    return 0;
}