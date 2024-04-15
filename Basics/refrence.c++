// Refrence is nickkname given to a variable.


#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a; //  diclariation & initlisation at same time only. r means a. both will have same value. we cannot change refrence later on.
    printf("%d\n", a);
    printf("%d\n", r);
    int b = 25;
    r = b;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", r);
    return 0;
}