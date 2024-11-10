//2D Array named scores 
/*
program for a 2D Array named scores
Author:Nya0si
Date:07/11/2024
Reg no:CT101/G/24465/24
*/
#include <stdio.h>
#include <string.h>

int main(){
    int j,a;
    int scores[2][4] = {{65,92,84,72},{35,70,59,67}};

    // Print the elements
    for (j=0; j<2; j++){
        for (a = 0; a < 4; a++){
            printf("%d\n", scores[j][a]);
        }
    }
    return 0;
}
