//You are given a numer N, you need to print the numer of possible where digits exactly divides N.

#include<stdio.h>

int check(int x); 

int main() {
    int num[5];
    for(int i=0; i<5; i++) {
        printf("Enter number : ");
        scanf("%d", &num[i]);
        printf("%d\n", check(num[i]));
    }
    return 0;
}

int check(int x) {
    int count=0, a=x;
    while(a!=0) {
        int y=a%10;
        if(x%y==0) {
            count++;
        }
        a/=10;
    }
    return count;
}
