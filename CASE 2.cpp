#include<stdio.h>
#include<string.h>
//Filling Jars
int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int num[x];
    for(int i=0; i<x; i++){
        num[i]=0;
    }

    for(int i=0; i<y; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        for(int j=a-1; j<b; j++) {
            num[j]+=c;
        }
    }
    
    int avg=0;
    for(int i=0; i<x; i++) {
        avg+=num[i];
    }
    avg/=x;

    printf("%d", avg);
    
}
