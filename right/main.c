#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "rightparrot.h"

void reset(void)
{
    usleep(70000);
    printf("\033[H\033[J");
}

int main(void)
{
hell:
    printf("%s\n",rightparrot_0_txt);
    reset();
    printf("%s\n",rightparrot_1_txt);
    reset();
    printf("%s\n",rightparrot_2_txt);
    reset();
    printf("%s\n",rightparrot_3_txt);
    reset();
    printf("%s\n",rightparrot_4_txt);
    reset();
    printf("%s\n",rightparrot_5_txt);
    reset();
    printf("%s\n",rightparrot_6_txt);
    reset();
    printf("%s\n",rightparrot_7_txt);
    reset();
    printf("%s\n",rightparrot_8_txt);
    reset();
    printf("%s\n",rightparrot_9_txt);
    reset();
    goto hell;
    _exit(0);
}
