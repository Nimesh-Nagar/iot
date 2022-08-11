#include <unistd.h>
int val;
void *routine2(void *msg)
{
    val = val + 2;
    sleep(2);
}