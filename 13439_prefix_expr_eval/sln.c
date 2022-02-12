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

int64_t eval()
{
    char token[20];
    scanf("%s", token);
    if (*token == '-' && strlen(token) > 1 || isdigit(*token))
        return atoi(token);
    switch (*token)
    {
    case '+':
        return eval() + eval();
    case '-':
        return eval() - eval();
    case '*':
        return eval() * eval();
    case '/':
        return eval() / eval();
    case '%':
        return eval() % eval();
    }
}

int main()
{
    printf("%" PRId64 "\n", eval());
    return 0;
}
