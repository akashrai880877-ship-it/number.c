#include<stdio.h>
int main()
{
    int secret =7;
    int guess;
    int i;
    printf("Welcome to number guessing game!\n");
    for(i=1;i<=3;i++)
    {
        printf("guess a number between 1 and 10:");
        scanf("%d",&guess);
        if(guess==secret)
        {
            printf("congratulations! correct guess!\n");
            break;
        }
        else if(guess < secret)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("Too high! Try again.\n");
        }
    }
    if(guess!= secret)
    {
        printf("Game over! The correct number was %d.\n",secret);

    }
    return 0;
}