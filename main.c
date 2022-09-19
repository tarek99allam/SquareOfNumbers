#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int x ;

int main()
{

    int n;

    while(1)
    {

    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int row,column,increment=0,increment2 =0;

      for (row = 1 ; row < 2*n ;row++)
      {
          for (column=1 ; column <2*n ; column++ )
          {
            if (row<=n)
            {

                  if (column<=row)
                  {
                   printf("%d ",n-column+1);

                  }
                  else if (column > n*2-row)
                  {
                   printf("%d ",n-row+increment+2);
                    increment++;
                  }
                  else
                  {
                   printf("%d ",n-row+1);

                  }

            }
            else
            {
                  if (column<n*2-row+1)
                  {
                   printf("%d ",n-column+1);

                  }
                  else if (column > row)
                  {
                   printf("%d ",row-n+2+increment2);
                    increment2++;
                  }
                  else
                  {
                   printf("%d ",row-n+1);

                  }


            }
            Sleep(10);
          }
          printf("\n");
          increment=0;
          increment2 = 0;
      }
    }

    return 0;
}
