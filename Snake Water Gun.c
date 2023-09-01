// SNAKE WATER GUN GAME

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game(char you, char computer)
{
    if(you==computer)
    {
        return 0;
    }

    if(you=='s' && computer=='g')
    {
        return -1;
    }

    else if(you=='g' && computer=='s')
    {
        return 1;
    }

    if(you=='s' && computer=='w')
    {
        return 1;
    }

    else if(you=='w' && computer=='s')
    {
        return -1;
    }

    if(you=='g' && computer=='w')
    {
        return -1;
    }

    else if(you=='w' && computer=='g')
    {
        return 1;
    }
}

int main()
{
    char you, computer;

    srand(time(0));
    int number = rand()%3 +1;

    if(number==1)
    {
        computer='s';
    }

    else if(number==2)
    {
        computer='g';
    }

    else
    {
        computer='w';
    }

    printf("Enter 's' for Snake 'g' for Gun and 'w' for Water\n");
    scanf("%c",&you);

    int result = game(you, computer);

    printf("You choose %c and computer choose %c.\n", you, computer);

    if(result==0)
    {
        printf("Game Draw!\n");
    }

    else if(result==1)
    {
        printf("You Win!\n");
    }

    else
    {
        printf("You Loose!\n");
    }

    return 0;
}
