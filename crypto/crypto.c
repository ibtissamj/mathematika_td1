#include "crypto.h"

void crypto_encrypt(char *message)
{

    while (*message)
    {
        *message = *message ^ 31;
        message++;
    }
}
