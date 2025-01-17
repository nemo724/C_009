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

void third_pyramid(void)
{for (int layer = 0; layer < 5; layer++)
    {for (int star = 0; star < 5 - layer; star++)
        {printf("*");}
        printf("\n");
    }
}

void fourth_pyramid(void)
{for (int layer = 0; layer < 5; layer++)
    {for(int blank = 0 ; blank < 5 -(layer+1);blank++)
        {printf(" "); }
    
     for(int star = 0; star < layer+1;star++)
        {printf("*"); }
     printf("\n");
    }
    
}

void fifth_pyramid(void)
{int star_count = 1;
for(int layer =0; layer<5;layer++)
    {for(int blank=0;blank<(10-star_count)/2;blank++)
        {printf(" "); }
    
     for(int star=0;star<star_count;star++)
        {printf("*"); }

     for(int blank=0;blank<(10-star_count)/2;blank++)
        {printf(" "); }

     printf("\n");
     star_count += 2;
     }
}

void sixth_pyramid(void)
{int blank_count = 0 ;
for(int layer =0; layer<5;layer++)
    {for(int blank=0;blank<blank_count/2;blank++)
        {printf(" "); }
    
     for(int star=0;star<9-(2*layer);star++)
        {printf("*"); }

     for(int blank=0;blank<blank_count/2;blank++)
        {printf(" "); }

     printf("\n");
     blank_count += 2;
     }
}