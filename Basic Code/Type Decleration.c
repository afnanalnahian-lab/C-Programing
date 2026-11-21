#include<stdio.h>

int main(){

    int a = 10;
    int b = a;
    int c = a + b;
    int d = a * b;

    int old_age = 30;
    int new_age = old_age + 5; 
    // new_age = old_age + Age; // This line is commented out because 'Age' is not defined, which would cause a compilation error.
    // int Age = 5; // This line is commented out because 'Age' is not defined, which would cause a compilation error.

    printf("%d %d %d %d\n", a, b, c, d);
    printf("Old Age: %d, New Age: %d\n", old_age, new_age);
    return 0;
}