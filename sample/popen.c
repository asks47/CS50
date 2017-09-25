#include<stdio.h>


FILE *fp;
int status;
char path[PATH_MAX];


fp = popen("ls *", "r");
if (fp == NULL)
    /* Handle error */;


while (fgets(path, PATH_MAX, fp) != NULL)
    printf("%s", path);
