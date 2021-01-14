#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    char p1, p2;
    // clrscr();
    printf("\n Enter Player 1: ");
    p1 = getche();
    printf("\n Enter Player 2: ");
    p2 = getche();

    if (((p1 == 'p') || (p1 == 'P')) && ((p2 == 'R') || (p2 == 'r')))
    {
        printf("\n Player 1 Wins !");
        printf("\n Paper Covers Rock.");
    }
    else if (((p2 == 'p') || (p2 == 'P')) && ((p1 == 'r') || (p1 == 'R')))
    {
        printf("\n Player 2 Wins !");
        printf("\n Paper Covers Rock.");
    }
    else if (((p1 == 'r') || (p1 == 'R')) && ((p2 == 's') || (p2 == 'S')))
    {
        printf("\n Player 1 Wins !");
        printf("\n Rock Breaks Scissors.");
    }
    else if (((p2 == 'r') || (p2 == 'R')) && ((p1 == 's') || (p1 == 'S')))
    {
        printf("\n Player 2 Wins !");
        printf("\n Rock Breaks Scissors.");
    }
    else if (((p1 == 's') || (p1 == 'S')) && ((p2 == 'p') || (p2 == 'P')))
    {
        printf("\n Player 1 Wins !");
        printf("\n Scissors Cut Paper.");
    }
    else if (((p2 == 's') || (p2 == 'S')) && ((p1 == 'p') || (p1 == 'P')))
    {
        printf("Player 2 Wins !");
        printf("Scissors Cut Paper.");
    }
    else if (p1 == p2)
    {
        printf("\n Nobody Wins !");
        printf("\n Both Of You Entered The Same Letters.");
    }
    else
    {
        printf("\n Unknown Input Data!");
        printf("\n Only letters P,Q,R or p,q,r are allowed.");
    }
    getch();
}