#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "middleparrot.h"

void reset(void)
{
    usleep(70000);
    printf("\033[H\033[J");
}

int main(void)
{
hell:
    printf("%s\n",middleparrot_0_txt);
    reset();
    printf("%s\n",middleparrot_1_txt);
    reset();
    printf("%s\n",middleparrot_2_txt);
    reset();
    printf("%s\n",middleparrot_3_txt);
    reset();
    printf("%s\n",middleparrot_4_txt);
    reset();
    printf("%s\n",middleparrot_5_txt);
    reset();
    printf("%s\n",middleparrot_6_txt);
    reset();
    printf("%s\n",middleparrot_7_txt);
    reset();
    printf("%s\n",middleparrot_8_txt);
    reset();
    printf("%s\n",middleparrot_8_txt);
    reset();
    goto hell;
    _exit(0);
}
