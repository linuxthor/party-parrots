#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "gothparrot.h"

void reset(void)
{
    usleep(70000);
    printf("\033[H\033[J");
}

int main(void)
{
hell:
    printf("%s\n",gothparrot_0_txt);
    reset();
    printf("%s\n",gothparrot_1_txt);
    reset();
    printf("%s\n",gothparrot_2_txt);
    reset();
    printf("%s\n",gothparrot_3_txt);
    reset();
    printf("%s\n",gothparrot_4_txt);
    reset();
    printf("%s\n",gothparrot_5_txt);
    reset();
    printf("%s\n",gothparrot_6_txt);
    reset();
    printf("%s\n",gothparrot_7_txt);
    reset();
    printf("%s\n",gothparrot_8_txt);
    reset();
    printf("%s\n",gothparrot_8_txt);
    reset();
    goto hell;
    _exit(0);
}
