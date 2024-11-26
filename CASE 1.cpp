// Please note that this is a team event, and your submission will be accepted only as a part of a team, even
// single member teams are allowed. Please click here to register as a team, if you have NOT already registered.
// Given a word , rearrange the letters of to construct another word in such a way that, is lexicographically greater than w.
#include<stdio.h>
#include<string.h>
int main() {

    int n;
    printf("Number of teams : ");
    scanf("%d", &n);

    char team[n][100];
    for(int i=0; i<=n; i++) {
        gets(team[i]);
        int x=strlen(team[i]);
        if(x==1) {
            strcpy(team[i],"No Answer");
        }
        else {
            Repeat:
            if(team[i][x-1]>team[i][x-2]) {
                int temp=team[i][x-1];
                team[i][x-1]=team[i][x-2];
                team[i][x-2]=temp;
            }
            else if(team[i][x-1]==team[i][x-2]) {
                if(x==2) {
                    strcpy(team[i],"No Answer");
                }
                else {
                x--;
                goto Repeat;
                }
            }
            else {
                x--;
                if(team[i][x-1]>team[i][x-2]) {
                int temp=team[i][x-1];
                team[i][x-1]=team[i][x-2];
                team[i][x-2]=temp; 
                }   
                else if(x!=2){
                goto Repeat;
                }
                else {
                    strcpy(team[i],"No Answer");
                }
            }
        }
    }
    
    for(int i=0; i<=n; i++) {
        puts(team[i]);
    }

    return 0;

}

    
