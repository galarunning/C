#include <stdio.h>
#include <stdlib.h>

void main()
{   
    struct bitFields
    {
        unsigned int :8;            // 8 bits of padding
        unsigned int name:8;        // Assigned 8 bits
        unsigned int index:16;      // Assigned 16 bits
        unsigned char info:4;       // Assigned 4 bits
        unsigned int :8;            // 8 bits of padding
    };

    // Structure should be only of 8 + 8 + 8 + 4 + 16 = 44 bits / 8 = 5.5 bytes

    struct bitFields bitField1;

    bitField1.index = 259;
    bitField1.name = 200;
    bitField1.info = 15;

    printf("Here is your data:\n********************\n\n%d\n%d\n%d", bitField1.index, bitField1.name, bitField1.info);

    printf("\n\nSize of struct: %d", sizeof(bitField1));     // Why does it print 12 bytes? 

}