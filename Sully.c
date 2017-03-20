#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int i = 5;
int main() {
if(strcmp(__FILE__, "Sully.c")) --i;
char cmd[512]; char file[512];
sprintf(file, "Sully_%d.c", i);
FILE *fp=fopen(file, "w");
char *s="#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%cint i = %d;%cint main() {%cif(strcmp(__FILE__, %cSully.c%c)) --i;%cchar cmd[512]; char file[512];%csprintf(file, %cSully_%%d.c%c, i);%cFILE *fp=fopen(file, %cw%c);%cchar *s=%c%s%c;%cfprintf(fp,s,10,10,10,i,10,10,34,34,10,10,34,34,10,34,34,10,34,s,34,10,10,10,34,34,10,34,34,10,10,10);%cfclose(fp);%csprintf(cmd, %cclang -Wall -Wextra -Werror -o Sully_%%d %%s;%c, i, file);%cif (i > 0) sprintf(cmd + strlen(cmd), %c ./Sully_%%d%c, i);%csystem(cmd);%creturn 0;}%c";
fprintf(fp,s,10,10,10,i,10,10,34,34,10,10,34,34,10,34,34,10,34,s,34,10,10,10,34,34,10,34,34,10,10,10);
fclose(fp);
sprintf(cmd, "clang -Wall -Wextra -Werror -o Sully_%d %s;", i, file);
if (i > 0) sprintf(cmd + strlen(cmd), " ./Sully_%d", i);
system(cmd);
return 0;}
