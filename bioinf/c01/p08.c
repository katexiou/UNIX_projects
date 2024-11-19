#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{	

int i,len,max;

char seq[5000];

max=0;



	while (	scanf("%s", seq ) == 1 )
		{

		len = strlen( seq );

			if (len > max)
			{
				max = len;
			}
		}
		printf("the max length is %d \n", max);


}
