#include <stdio.h>
#include <string.h>

union student
{
    char name[15];
    int id;
    int marks;
    char fav_sub[15];
};

int main(int argc, char const *argv[])
{
    union student a, b;

    strcpy(a.name, "ABC");
    strcpy(b.name, "XYZ");
    a.id = 1;
    b.id = 2;
    a.marks = 100;
    b.marks = 100;
    strcpy(a.fav_sub, "English");
    strcpy(b.fav_sub, "Hindi");
    printf("The details of a is:-\nName:- %s\nId:- %d\nMarks:- %d\nFavourite Subject:- %s", a.name, a.id, a.marks, a.fav_sub);
    printf("\nThe details of b is:-\nName:- %s\nId:- %d\nMarks:- %d\nFavourite Subject:- %s", b.name, b.id, b.marks, b.fav_sub);
    return 0;
}
