#include <stdio.h>
#include <string.h>
#define MAX 100
void reverseContent(char* x)
{
FILE* fp = fopen(x, "a+");
if (fp == NULL) {
printf("Unable to open file\n");
return;
}
char buf[100];
int a[MAX], s = 0, c = 0, l;
fprintf(fp, " \n");
rewind(fp);
while (!feof(fp)) {
fgets(buf, sizeof(buf), fp);
l = strlen(buf);
a = s += l;
}
rewind(fp);
c -= 1;
while (c >= 0) 
}
