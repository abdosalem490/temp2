#include <stdio.h>


void __attribute__((constructor))  start()  
{
	printf("test\n");
}

int main(int argc, char* argv[])
{
   printf("%s\n", argv[1]);
   return 0;
}
