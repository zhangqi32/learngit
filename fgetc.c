#include <stdio.h>
#include <stdlib.h>
int main ()
{
	FILE *fp;
	char ch,filename[10];
	printf("please input the filename:\n");
	scanf("%s",filename);
	getchar();
	if ((fp=fopen(filename,"w"))==NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	printf("please inpur the charater that store (end it with #):\n");
	ch= getchar();
	while (ch!='#')
	{
		fputc(ch,fp);
		putchar(ch);
		ch=getchar();
	}
	fclose(fp);//
	putchar(10);
	return 0;
}
