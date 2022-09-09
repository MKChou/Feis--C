#include <stdio.h>

/* Only change any of these 4 values */
#define V0 2
#define V1 5
#define V2 3
#define V3 2

int main(void) {
	int a;
	char *s;

	/* This is a print statement. Notice the little 'f' at the end!
	It might be worthwhile to look up how printf works for your future
	debugging needs... */
	printf("Playlab Courses:\n====================\n");

	/* for loop */
	for(a=0; a<V0; a++) {
		printf("Great ");
	}
	printf("\n");

	/* switch statement */
	switch(V1) {
		case 0:		printf("CTPS\n");
		case 1: 	printf("AICA\n");	break;
		case 2: 	printf("AICA\n");
		case 3: 	printf("AIChatbot\n");		break;
		case 4:		printf("AIAS\n");	break;
		case 5:		printf("Goodbye\n");
		default:	printf("I don't know what to teach yet!\n");
	}

	/* ternary operator */
	s = (V3==1) ? "Has" : "Has No";

	/* if statement */
	if(V2) {
		printf("\n%s Course!\n",s);
	} else  {
		printf("\n%s Students!\n",s);
	}
    
	return 0;
}