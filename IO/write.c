//to print file contents
#include<stdio.h>

int main()
{
FILE *ptr_file;
int x;

ptr_file = fopen("test.txt", "w");

if(!ptr_file)
return 1;

for(x=0; x<10; x++)
fprintf(ptr_file, "%d\n",x);

fclose(ptr_file);
return 0;
}
