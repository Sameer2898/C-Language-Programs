#include <stdio.h>
#include <string.h>

void html_parser(char * string)
{
    int in = 0; //Variable to track wheather we are inside the tag or outside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if(string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    
    // Remove the trailing spaces from the begining
    while (string[0] == ' ')
    {
        // Shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] =  string[i + 1];
        }
    }
    // Remove the trailing spaces from the end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main(int argc, char const *argv[])
{
    char string[] = "   <h1>This is heading.</h1>";
    printf("The string before parsing is:-\n%s\n", string);
    html_parser(string);
    printf("The string after parsing is:-\n%s", string);
    return 0;
}
