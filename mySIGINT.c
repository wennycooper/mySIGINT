#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void mysigint()
{
    printf("I got SIGINT!!\n");
    exit(0);
}

int main()
{
    if (signal(SIGINT, mysigint) == SIG_ERR)
        printf("Failed to register SIGINT!\n");

    while(1);

    exit(0);
}

