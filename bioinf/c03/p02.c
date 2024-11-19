
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{

int i,len;
float GC;

char seq[5000];

while(scanf("%s", seq) ==1 )
	{

		len = strlen(seq);
		i=0;
		GC=0;
		for ( i=0; i<len; i++)

		{

			if ( seq[i]=='G' || seq[i]=='C' )
			{
				GC=GC+1;
			}
		}

	printf("The percentage is %f \n", 100*(GC/len));

	}
}
