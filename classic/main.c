#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "parrot.h"

void reset(void)
{
    usleep(50000);
    printf("\033[H\033[J");
}

int main(void)
{
hell:
    printf("%s\n",parrot_0_txt);
    reset();
    printf("%s\n",parrot_1_txt);
    reset();
    printf("%s\n",parrot_2_txt);
    reset();
    printf("%s\n",parrot_3_txt);
    reset();
    printf("%s\n",parrot_4_txt);
    reset();
    printf("%s\n",parrot_5_txt);
    reset();
    printf("%s\n",parrot_6_txt);
    reset();
    printf("%s\n",parrot_7_txt);
    reset();
    printf("%s\n",parrot_8_txt);
    reset();
    printf("%s\n",parrot_9_txt);
    reset();
    goto hell;
    _exit(0);
}
