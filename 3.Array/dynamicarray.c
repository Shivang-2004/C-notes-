#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int b[a];
    for(int i = 0; i<a; i++){
        printf("%d\n", b[i]);
    }

    return 0;
}