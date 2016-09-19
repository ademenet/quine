#include <stdio.h>
/* comment one */
char*s="#include <stdio.h>%c/* comment one */%cchar*s=%c%s%c;%cint main(void){/* comment two */printf(s,10,10,34,s,34,10,10,10);}%cint f(void){return(0);}%c";
int main(void){/* comment two */printf(s,10,10,34,s,34,10,10,10);}
int f(void){return(0);}
