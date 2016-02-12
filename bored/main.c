#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bored.h"

void reset(void)
{
    usleep(70000);
    printf("\033[H\033[J");
}

int main(void)
{
hell:
    printf("%s\n",boredparrot_0_txt);
    reset();
    printf("%s\n",boredparrot_1_txt);
    reset();
    printf("%s\n",boredparrot_2_txt);
    reset();
    printf("%s\n",boredparrot_3_txt);
    reset();
    printf("%s\n",boredparrot_4_txt);
    reset();
    printf("%s\n",boredparrot_5_txt);
    reset();
    printf("%s\n",boredparrot_6_txt);
    reset();
    printf("%s\n",boredparrot_7_txt);
    reset();
    printf("%s\n",boredparrot_8_txt);
    reset();
    printf("%s\n",boredparrot_9_txt);
    reset();
    goto hell;
    _exit(0);
}
