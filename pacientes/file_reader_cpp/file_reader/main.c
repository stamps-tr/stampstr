#include <stdio.h>
#include <stdlib.h>


void read(void * data) {
   FILE *fp;

   fp = fopen("C:\\Users\\victo\\SCADE\\batimentos.txt", "r");
   unsigned int p1, p2, p3, p4, p5;
   fscanf(fp, "%u %u %u %u %u", &p1, &p2, &p3, &p4, &p5);
   fclose(fp);
   ((unsigned int *)data)[0] = p1;
   ((unsigned int *)data)[1] = p2;
   ((unsigned int *)data)[2] = p3;
   ((unsigned int *)data)[3] = p4;
   ((unsigned int *)data)[4] = p5;
}
