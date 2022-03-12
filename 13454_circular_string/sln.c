/**                  _ _              _____ ___
 *  _ __   _____   _(_) | ____      _|___ // _ \
 * | '_ \ / _ \ \ / / | |/ /\ \ /\ / / |_ \ (_) |
 * | | | |  __/\ V /| |   <  \ V  V / ___) \__, |
 * |_| |_|\___| \_/ |_|_|\_\  \_/\_/ |____/  /_/
 **/
#include <assert.h>
#include <ctype.h>
#include <inttypes.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef nevikw39
#else
#pragma message("hello, nevikw39")
#endif
#pragma message("GL; HF!")

int main()
{
    char s[5005], r[5005];
    scanf("%s", s);
    strcpy(r, s);
    for (int i = 1, l = strlen(s); i < l; i++)
    {
        char tmp[5005];
        strcpy(tmp, s + i);
        strncpy(tmp + l - i, s, i);
        if (strcmp(r, tmp) > 0)
            strcpy(r, tmp);
    }
    puts(r);
    return 0;
}
