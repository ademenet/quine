#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int i = 5;
int main() {
if(strcmp(__FILE__, "Sully.c") == 0) i = 6;
if (i == 0) return 0;
char cmd[512]; char file[512];
sprintf(file, "Sully_%d.c", --i);
FILE *fp=fopen(file, "w");
char *s="#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%cint i = %d;%cint main() {%cif(strcmp(__FILE__, %cSully.c%c) == 0) i = 6;%cif (i == 0) return 0;%cchar cmd[512]; char file[512];%csprintf(file, %cSully_%%d.c%c, --i);%cFILE *fp=fopen(file, %cw%c);%cchar *s=%c%s%c;%cfprintf(fp,s,10,10,10,i,10,10,34,34,10,10,10,34,34,10,34,34,10,34,s,34,10,10,10,34,34,10,10,10);%cfclose(fp);%csprintf(cmd, %cclang -Wall -Wextra -Werror -o Sully_%%d %%s; ./Sully_%%d%c, i, file, i);%csystem(cmd);%creturn 0;}%c";
fprintf(fp,s,10,10,10,i,10,10,34,34,10,10,10,34,34,10,34,34,10,34,s,34,10,10,10,34,34,10,10,10);
fclose(fp);
sprintf(cmd, "clang -Wall -Wextra -Werror -o Sully_%d %s; ./Sully_%d", i, file, i);
system(cmd);
return 0;}
