#include<time.h>
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>

 //int main(int argc, char **argv) {
void Hello(){
        void *handle;
        //double (*cosine)(double);
        char *error;
        char (*HelloAddr)(char);
     
   srand(time(NULL));
int r = rand() % 2;
printf("%d-",r);

if(r==0){

        handle = dlopen ("/home/ubuntu/workspace/dynamicloading/Namaste.txt", RTLD_LAZY);
        if (!handle) {
            fputs (dlerror(), stderr);
            exit(1);
        }

        HelloAddr = dlsym(handle, "Hello");
        if ((error = dlerror()) != NULL)  {
            fputs(error, stderr);
            exit(1);
        }

        printf ("%c\n", (*HelloAddr)(2.0));
        dlclose(handle);
    }

else
{
handle = dlopen ("/home/ubuntu/workspace/dynamicloading/Pranam.txt", RTLD_LAZY);
        if (!handle) {
            fputs (dlerror(), stderr);
            exit(1);
        }

        HelloAddr = dlsym(handle, "Hello");
        if ((error = dlerror()) != NULL)  {
            fputs(error, stderr);
            exit(1);
        }

        printf ("%c\n", (*HelloAddr)(2.0));
        dlclose(handle);

}

}
