
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{

int i,length;

char seq[5000];

scanf("%s", seq);
length = strlen(seq);
i=0;

for ( i=0; i<length; i++)

	{

		if (seq[i]=='D' ||  seq[i]=='E' || seq[i]=='H' || seq[i]=='K' || seq[i]=='N' || seq[i]=='Q' || seq[i]=='R' )
			{
				printf(" ");
			}

		if (seq[i]=='S' ||  seq[i]=='T' || seq[i]=='G' )
			{
				printf(".");
			}
		if (seq[i]=='A' ||  seq[i]=='C' || seq[i]=='M' || seq[i]=='P')
			{
				printf(":");
			}
		if (seq[i]=='F' ||  seq[i]=='I' || seq[i]=='L' || seq[i]=='V' || seq[i]=='W' || seq[i]=='Y' )
			{
				printf("*");

	}

	}
}

