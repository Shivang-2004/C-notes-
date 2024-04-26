#include<stdio.h>
int runner() {
    static int count = 0; // By default, variables are local to the scope in which they are defined. Variables can be declared as static to increase their scope up to file containing them. As a result, these variables can be accessed anywhere inside a file.
    count++;
    return count;
}

int main()
{
    printf("%d ", runner());
    printf("%d ", runner());
    return 0;
}
//-----------------------------------------------------------------------
// Ques In this exercise, try to find the sum of some numbers by using the static keyword. Do not pass any variable representing the running total to the sum() function.



//    #include <stdio.h>
//    int sum (int num) {
//        static int a = 0;
//        a += num;
//        return a;
//    }

//    int main() {
//        printf("%d ",sum(55));
//        printf("%d ",sum(45));
//        printf("%d ",sum(50));
//        return 0;
//    }

