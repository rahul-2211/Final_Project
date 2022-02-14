//generate a sentence using random number 
// SET3_Q3
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
	srand(time(NULL));
	int e1,e2,e3,e4,e5,e6;
	char *art[]={"the","a", "one", "some", "any"},
	*nn[]={"boy", "girl", "dog","town", "car"},
	*vb[]={"drove", "jumped", "ran", "walked", "skipped"},
	*prep[]={"to", "from", "over", "under", "on"};
	
	e1=rand()%6;
	e2=rand()%6;
	e3=rand()%6;
	e4=rand()%6;
	e5=rand()%6;
	e6=rand()%6;
	
	printf("%s %s %s %s %s %s\n",art[e1],nn[e2],vb[e3],prep[e4],art[e5],nn[e6]);
	return 0;

}
