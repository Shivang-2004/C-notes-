//  a struct (short for "structure") is a user-defined composite data type that allows you to group together variables of different data types under a single name. Structs provide a way to create custom data types that can hold multiple values of different types. Each value within a struct is called a member or field.
#include<stdio.h>
#include<string.h>
 struct  student {
    char name[20]; // 1 byte for one char so 20 bytes
    char gender;// This will also acces 4bytes but it will use 1 byte. (This is called padding.)
    int age; // 4 bytes
 } a,b;
 
struct student c,d;// There are global variables and can accessed by any function 

 // To declare variable we have 2 ways 
int main(){
    int aage; // These are local variable and can only be accessed by the main function
    //scanf("%d", &aage);
    strcpy(a.name,"Sneha");// Using string function to copy <name> in place of a.name.
    struct student student1 = {"Shivang", aage}; // making one student using struct and giving values.
    //printf("%s\n", student1.name); // accessing the values that is stored in struct.
    //printf("%d\n", student1.age);// accessing the value which is given by the user.
    //printf("%s\n", a.name);
    //printf("%s\n", c.name);
    printf("%lu\n", sizeof(student1)); // %lu for long unassigned int.
    return 0;
}



 