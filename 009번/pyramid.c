#include "pyramid.h"

void first_pyramid(void)
{for(int layer=0; layer<5;layer++)
    {for(int star=0;star<layer+1;star++)
        {printf("*"); }
    printf("\n");
    }
}

void second_pyramid(void)
{for(int layer=0; layer<5;layer++)
    {for(int star=0;star<5-layer;star++)
         {printf("*"); }
    printf("\n");
    }
}
