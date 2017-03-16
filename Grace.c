#include <stdio.h>
#define FIRST FIRST
#define SECOND SECOND
#define FT() int main(void){FILE *fp=fopen("Grace_kid.c", "w");char *s="#include <stdio.h>%c#define FIRST FIRST%c#define SECOND SECOND%c#define FT() int main(void){FILE *fp=fopen("Grace_kid.c", "w");char *s=%c%s%c;fprintf(fp,s,10,10,10,34,s,34,10);}%cFT(0)";fprintf(fp,s,10,10,10,34,s,34,10);}
FT()
