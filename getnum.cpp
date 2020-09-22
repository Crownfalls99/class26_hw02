# include "addnbo.h"

int getnum (char* file)
{
	FILE* fp = fopen(file, "rb");
	uint32_t num = 0;

	if (!file)
	{
		printf("File open error!\n");
		exit(1);
	}

	fread(&num, 4, 1, fp);
	num = htonl(num);

	return num;
}


