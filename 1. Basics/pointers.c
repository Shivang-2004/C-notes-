// Pointer is a address variable that is ment for stroring address of data.
//pointer is used to access heap memory. some data in the hard disk, keyboard and mouse etc & parameter passsing.
#include<stdio.h>
#include<stdlib.h>
struct rect
{
    int length;
    int breadth;
    /* data */
};


int main(){
    int a = 4;
    int *p; // Here we declare that p is a pointer and we have to use the * before the variable name. 
    p = &a; // Assign the value of p as the address of a
    printf("%d\n", *p); // printing the value that is at adress p
    printf("%p\n",p); // printing the address of a. (also we can use %u -> unassigned int)
    printf("%p\n", &a); // this will also print the adress of the same. 
    // Pointer to an array
    int A[] = {1,2,3,4,5,6}; // this array is created in the stack.

    int *q = A;  //Here we don't use * because A is already a refrene on the array
    // int *q = &A[0];  Another way of making a pointer to an array.
    for(int i = 0; i< 6; i++){
        printf("%d\n", q[i]); // printing array using the pointer.
    }
    // Making a array in heap using the pointers
    printf("The array below this is created in heap using pointers.");
    int *d;
    d = (int *)malloc( 5 * sizeof(int));  // This code reserves memory space for holding five integers. 
    //The (int *) part in (int *)malloc(5 * sizeof(int)) is a typecast. It's used to explicitly convert the pointer returned by malloc to a pointer to an integer type (int *).

    // In C, malloc returns a void pointer (void *), which can point to any type of data. However, when you allocate memory for a specific data type (in this case, an array of integers), it's a good practice to cast the void pointer to the appropriate type.

    // So, (int *) is used to inform the compiler that the pointer returned by malloc will be pointing to memory that stores integers. This helps prevent potential errors related to pointer arithmetic and type mismatch during compilation.
    //d = new int[5];  This is a C++ command for making the array in heap.
    d[0]= 23;
    d[1]= 43;
    d[2]= 21;
    d[3]= 14;
    d[4]= 56;
    for(int i =0; i < 5; i++){
        printf("%d\n", d[i]);
    }

    // After our task is done we should release the memory that we have used
    free(d); 
    // delete [] p; This is c++ command.

    // Every pointers take same amount of memory.
    printf("----------------------------\n");
    int *p1;
    char *p2;
    double *p3;
    float *p4;
    struct rect *p5;

    printf("%ld\n", sizeof(p1));
    printf("%ld\n", sizeof(p2));
    printf("%ld\n", sizeof(p3));
    printf("%ld\n", sizeof(p4));
    printf("%ld\n", sizeof(p5));

    return 0;
}
/*
    Difference between stack and heap memory :
    1.  Memory allocation: Stack memory is a type of memory allocation that the OS manages and uses   to store local variables in a LIFO order. Heap memory is a type of dynamic memory allocation used for storing objects and data structures.

    2.  Data access: Stack memory stores static variables, and data saved on the stack can only be   accessed by the owner thread. Heap memory stores dynamic variables, and data stored in heap memory is visible to all threads.

    3. Access time: Access time is faster for stack memory than heap memory.

    4.  Memory size: Stack memory has a fixed size and can only store a limited amount of data.
    Memory use: Heap memory is used by all parts of the application, whereas stack memory is used only by one thread of execution.
    5.  Memory visibility: Whenever an object is created, it's always stored in the Heap space and stack memory contains the reference to it
*/