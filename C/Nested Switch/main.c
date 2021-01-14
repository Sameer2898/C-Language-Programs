#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, marks;
    printf("Enter your age:- ");
    scanf("%d", &age);
    printf("Enter your marks:- ");
    scanf("%d", &marks);

    switch (age)
    {
    case 4:
        printf("You are 4 years old.\n");
        switch (marks)
        {
        case 100:
            printf("You score 100 marks.");
            break;
        
        default:
            printf("You score 99 marks.");
        }
        break;
    
    case 18:
        printf("You are 18 years old.");
        break;
    
    case 30:
        printf("You are 30 years old.");
        break;

    default:
        printf("Enter a valid argument.");
        break;
    }
    return 0;
}
