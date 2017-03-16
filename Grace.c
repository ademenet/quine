#include <stdio.h>
#define OPEN FILE *fp=fopen
#define CLOSE fclose
#define FT(x) int main(void){OPEN(x, "w");char *s="#include <stdio.h>%c#define OPEN FILE *fp=fopen%c#define CLOSE fclose%c#define FT(x) int main(void){OPEN(x, %cw%c);char *s=%c%s%c;fprintf(fp,s,10,10,10,34,34,34,s,34,10,34,34,10);CLOSE(fp);return 0;}%cFT(%cGrace_kid.c%c)%c";fprintf(fp,s,10,10,10,34,34,34,s,34,10,34,34,10);CLOSE(fp);return 0;}
FT("Grace_kid.c")
