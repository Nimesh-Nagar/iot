#include <unistd.h>
int val;
void *routine1(void *msg)
{
    sleep(2);
    val = val + 5;
}