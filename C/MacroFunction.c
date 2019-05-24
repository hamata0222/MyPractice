#include <stdio.h>

#define MACRO_FUNC(name, ret)                       \
    do {                                            \
        printf (#name "_phantom is read...");       \
        ret = ##name##_phantom;                     \
    } while (0)

int main (void)
{
    unsigned int num_phantom = 0xFFFF;
    unsigned int num = 0x5555;
    unsigned int val;
    
    MACRO_FUNC (num, val);
    
    printf ("val = 0x%04X", val);
}
