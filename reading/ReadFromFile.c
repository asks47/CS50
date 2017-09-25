#include <stdio.h>

main() {

   FILE *fp;
   char buff[255];

   fp = fopen("/home/ubuntu/workspace/reading/Pranam.txt", "r");
   fscanf(fp, "%s", buff);
   printf("%s\n", buff );

//   fgets(buff, 255, (FILE*)fp);
//   printf("2: %s\n", buff );
   
//   fgets(buff, 255, (FILE*)fp);
//   printf("3: %s\n", buff );
//   fclose(fp);

}