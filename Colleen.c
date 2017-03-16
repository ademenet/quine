#include <stdio.h>
/*
	comment one
*/
void f(void){
char*s="#include <stdio.h>%c/*%c%ccomment one%c*/%cvoid f(void){%cchar*s=%c%s%c;%cprintf(s,10,10,9,10,10,10,34,s,34,10,10,10,10,9,10,10,10);}%cint main(void){%c/*%c%ccomment two%c*/%cf();return 0;}%c";
printf(s,10,10,9,10,10,10,34,s,34,10,10,10,10,9,10,10,10);}
int main(void){
/*
	comment two
*/
f();return 0;}
