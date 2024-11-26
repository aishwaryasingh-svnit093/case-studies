#include<stdio.h>
#include<string.h>
//gem stone
int main() {
    
    int n, Count=0;
    printf("Number of cases : ");
    scanf("%d", &n);
    
    char gem[n][100]; 
    for(int i=0; i<n; i++) {
        scanf("%s", &gem[i]);
    }
    
    int x=strlen(gem[0]);

    for(int i=0; i<x; i++) {
        char common=gem[0][i];
        int count=0;
        for(int j=1; j<n; j++) {
            int y=strlen(gem[j]);
            for(int k=0; k<y; k++) {
                if(common==gem[j][k]) {
                    count++;
                    break;
                }
            }
            if(count==n-1) {
                Count++;
            }
        }
    }

    printf("\n%d",Count);

}
