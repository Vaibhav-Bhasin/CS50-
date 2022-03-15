#include <cs50.h>
#include <stdio.h>

int main(void)
{
            // Asks for his name
    string answer = get_string("What's your name? \n");
            //Greets User
            printf("Hello!, %s", answer);
}
