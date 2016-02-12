#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "oldtimeyparrot.h"

void reset(void)
{
    usleep(50000);
    printf("\033[H\033[J");
}

int main(void)
{
hell:
    printf("%s\n",oldtimeyparrot_0_txt);
    reset();
    printf("%s\n",oldtimeyparrot_1_txt);
    reset();
    printf("%s\n",oldtimeyparrot_2_txt);
    reset();
    printf("%s\n",oldtimeyparrot_3_txt);
    reset();
    printf("%s\n",oldtimeyparrot_4_txt);
    reset();
    printf("%s\n",oldtimeyparrot_5_txt);
    reset();
    printf("%s\n",oldtimeyparrot_6_txt);
    reset();
    printf("%s\n",oldtimeyparrot_7_txt);
    reset();
    printf("%s\n",oldtimeyparrot_8_txt);
    reset();
    printf("%s\n",oldtimeyparrot_9_txt);
    reset();
    goto hell;
    _exit(0);
}
