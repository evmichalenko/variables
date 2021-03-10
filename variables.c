#include <cs50.h>
#include <stdio.h>
//this is a comment
int main(void)
{
    int age = get_int("Enter your age: ");
    printf("Right now I'm %i years old.\n", age);

    // My age next year
    printf("Next year I'll be %i years old.\n", age + 1);

    // My age in 10 years
    printf("In 10 years, I'll be %i!\n", age + 10);

    // My age in 50 years!
    printf("In 50 years, I'll be %i! Wow!\n", age + 50);
}
