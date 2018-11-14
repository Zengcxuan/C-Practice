#include <stdlib.h>
#include <stdio.h>
#include <string.h>
main()
{
 FILE *fp;
 char str[128];
 if ((fp = fopen("test.txt", "w")) == NULL)
    {
     printf("cannot open file!");
     exit(0);
    }
    while((strlen(fgets(str, 129, stdin))) != 1)
	{
	fputs(str, fp);
	fputs("\n", fp);
	}
	    fclose(fp);
}
