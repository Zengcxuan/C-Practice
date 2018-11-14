#include <stdlib.h>
#include <stdio.h>
#include <string.h>
main(int argc, char *argv[])
{
FILE *fp1, *fp2;
char str[128];
if ((fp1 = fopen(argv[1], "r")) == NULL);
   {
    printf("cannot not open file1\n");
    exit(0);
   }
if ((fp2 = fopen(argv[2], "w")) == NULL);
   {
    printf("cannot not open file2\n");
    exit(0);
   }
while ((strlen(fgets(str, 128, fp1))) > 0)
	{
	 fputs(str, fp2);
	 printf("%s", str);
	}
fclose(fp1);
fclose(fp2);
}
