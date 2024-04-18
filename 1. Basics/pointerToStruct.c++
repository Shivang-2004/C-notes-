// #include<stdio.h>
// #include<iostream>

// struct rect
// {
//     int length;
//     int breadth;
// };

// int main(){
//     struct rect r = {10,5};
//     struct rect *p = &r;
//     r.length = 15;
//     printf("%d\n", r.length);
//     (*p).length = 20; // We have to write so much here so we have another method also.
//     printf("%d\n", r.length);
//     p->length = 25; // line 14 & 17 does the abs. same thing. but with different syntax.
//     printf("%d\n", r.length);
//     struct rect *q; 
//     // The line struct rect *q; declares a pointer variable named q of type "pointer to struct rect".

//     // In C, this line doesn't initialize the pointer q to point to anything specific. It simply allocates space to store a memory address, which will later be used to point to a struct rect object.

//     // Until you assign a valid memory address to q, it will contain garbage or uninitialized data. Accessing the data that q points to before assigning it a valid address can lead to undefined behavior.

//     // You typically assign a valid memory address to q using functions like malloc() to allocate memory dynamically, or by making it point to an existing struct object. For example:

//     q = (struct rect *)malloc(sizeof(struct rect));// This will be created int the heap, using malloc function.
//     q->breadth = 40;
//     q->length = 11;
//     printf("%d & %d", q->breadth, q->length);
//     return 0;
// }


// The code below is how we put a value in heap taken by user. This is a C code.
#include<stdio.h>
#include <cstdlib>
int main(){
    int *a; 
    a = (int *)malloc(sizeof(int) * 1);
    scanf("%d", a);
    int x = *a;
    printf("%d\n", *a);
    printf("%d\n", x);
    printf("%p\n", a);
    
    free(a);

    return 0;
}