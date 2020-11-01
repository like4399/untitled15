#include <stdio.h>
#include<stdlib.h>

int main() {
   char *psentence = NULL;
   int index = 0;
   while(1){
       char ch = getchar();
       if(ch == '\n'){
           break;
       }
       if(index == 0){
           psentence = (char*)malloc(1*sizeof(char));
           if(psentence == NULL){
               exit(EXIT_FAILURE);
           }
       }else{
           char*ptemp =realloc(psentence,(index+1)*sizeof(char));
           if(ptemp == NULL){
               free(psentence);
               exit(EXIT_FAILURE);
           }
           psentence = ptemp;
       }
       psentence[index] = ch;
       index++;
   }
    char*ptemp = realloc(psentence,(index+1)*sizeof(char));
    if(ptemp == NULL){
        free(psentence);
        exit(EXIT_FAILURE);
    }
    psentence = ptemp;
    psentence[index] = '\0';
   printf("%s\n",psentence);
   free(psentence);
    return 0;
}