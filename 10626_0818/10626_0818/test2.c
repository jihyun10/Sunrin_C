#include <stdio.h>

//배열 - 문자열

int main()
{
	char str1[3] = {'s','u','n'};
	printf("%s\n",str1);



/*
	char str1[] = "sunrin";
	char str2[7] = "sunrin";
	char str3[] = {'s','u','n','r','i','n','\0'};
	char str4[7] = {'s','u','n','r','i','n'};

	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("%s\n",str3);
	printf("%s\n",str4);
*/
/*
	char str[7] = "sunrin";
	int i;

	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
*/

	//str[5]='\0';
	//printf("%s\n",str);

	//printf("%s\n",&str[4]);


	/*int num[3] = {10,20,30};
	printf("%d\n",num[1]);
	printf("%d\n",*(num+1));*/


	/*char str[7] = "sunrin";
	printf("%c\n",str[1]);
	printf("%c\n",*(str+1));*/

	//printf("%d\n",str);
	//printf("%d\n",&str[0]);

	//printf("%dbyte\n",sizeof(str));
	//printf("%s\n",str);

	//printf("%dbyte\n",sizeof("sunrin"));

	return 0;
}
