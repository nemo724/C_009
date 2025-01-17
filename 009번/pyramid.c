#include "pyramid.h"

void first_pyramid(void)
{for(int layer=0; layer<5;layer++)
    {for(int star=0;star<layer+1;star++)
        {printf("*"); }
    printf("\n");
    }
}

void second_pyramid(void)
{int star_count=1;
 for(int layer=0; layer<5;layer++)
    {for(int star=0;star<star_count;star++)
        {printf("*"); }
    printf("\n");
    star_count += 2;
    }
}
