#include<stdio.h>
//IsFibo
int main() {
    int num[40], Num[5], count[5];
    for(int i=0; i<40; i++) {
        num[i]=fib(i);
    }

    for(int i=0; i<5; i++) {
        printf("Enter numbers : ");
        scanf("%d", &Num[i]);
    }

    for(int i=0; i<5; i++) {
        count[i]=0;
        for(int j=0; j<40; j++) {
            if(Num[i]==num[j]) {
                printf("IsFibo\n");
                count[i]++;
                break;
            }
        }
        if(count[i]==0)
        printf("IsNotFibo\n");
    }

    return 0;
}

int fib(int m) {
    if(m==0) { 
        return 0;
    }
    if(m==1) {
        return 1;
    }
    int fibnm1=fib(m-1);
    int fibnm2=fib(m-2);
    int fib= fibnm1 + fibnm2;
    return fib;
}
