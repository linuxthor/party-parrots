#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "aussie.h"

void reset(void)
{
    usleep(50000);
    printf("\033[H\033[J");
}

int main(void)
{
hell:
    printf("%s\n",aussieparrot_0_txt);
    reset();
    printf("%s\n",aussieparrot_1_txt);
    reset();
    printf("%s\n",aussieparrot_2_txt);
    reset();
    printf("%s\n",aussieparrot_3_txt);
    reset();
    printf("%s\n",aussieparrot_4_txt);
    reset();
    printf("%s\n",aussieparrot_5_txt);
    reset();
    printf("%s\n",aussieparrot_6_txt);
    reset();
    printf("%s\n",aussieparrot_7_txt);
    reset();
    printf("%s\n",aussieparrot_8_txt);
    reset();
    printf("%s\n",aussieparrot_9_txt);
    reset();
    goto hell;
    _exit(0);
}
