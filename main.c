#include <stdio.h>
#define nDISK 3
int solveTowers(int n, char from, char inter, char to);
int main() {
    solveTowers(nDISK,'a','b','c');
    printf("\n");
    return 0;
}
int solveTowers(int n, char from, char inter, char to ){
    if(n == 1) {
        printf("Disk 1 from %c to %c\n", from, to);
    }else{
        solveTowers(n-1,from, to , inter);
        printf("Disk %d from %c to %c\n",n,from,to);
        solveTowers(n-1,inter,from,to);
    }
    return 0;
}

