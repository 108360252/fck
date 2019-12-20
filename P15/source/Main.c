#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr1,*fptr2;
	char ch;
	fptr1 = fopen("C:\welcome.txt","r");
	fptr2 = fopen("C:\output.txt","w");
	if ((fptr1!= NULL) && (fptr2!= NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("檔案拷貝完成!!A\n");
	}
	if (fptr1 != NULL)
		printf("C\n");
	if (fptr2 != NULL)
		printf("D\n");
	else
		printf("檔案開啓失敗!!B\n");
	system("pause");
	return 0;
}