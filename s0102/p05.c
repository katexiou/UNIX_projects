#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{	

int len1;
int len2;
int  max;
char seq1[5000];
char seq2[5000];

scanf("%s", seq1);

len1 = strlen( seq1 );

scanf("%s", seq2);

len2 = strlen(seq2);

printf("the length of the first  seq is %5d \n", len1);

printf("the length of the second seq is %5d \n", len2);

if (len1 >= len2)

	{
		max = len1;

	}

else

	{
		max = len2;
	}

printf("the max length is %d \n", max);


}
