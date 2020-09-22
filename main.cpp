# include "addnbo.h"

int main(int argc, char* argv[])
{
	uint32_t num[3];

	num[0] = getnum(argv[1]);
	num[1] = getnum(argv[2]);
	num[2] = num[0] + num[1];

	printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", num[0], num[0], num[1], num[1], num[2], num[2]);

	return 0;
}


