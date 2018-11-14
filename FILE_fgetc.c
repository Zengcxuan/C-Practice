#include <stdio.h>
#include <stdlib.h>
//打印文件内容
main(int argc, char *argv[])
{
char ch;
FILE *fp;
int i;
if ((fp = fopen(argv[1], "r")) == NULL)
{
  printf("not open\n");
  exit(0);
}
while ((ch = fgetc(fp)) != EOF)
	putchar(ch);
fclose(fp);
}
