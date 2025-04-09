#include<stdio.h>
int main(){
FILE *fp1;
int wordcount=0;
int linecount=0;
int sentcount=0;
fp1=fopen("text.txt","r");


char parag;
     
     while (fscanf(fp1,"%c",&parag)==1)
     {
     
     if(parag==' ' || parag=='.')
     {
     wordcount++;
    
     }
     if(parag=='\n')
     {
     linecount++;
     }
     
     if(parag=='.')
     {
     sentcount++;
     }
      
    }
    printf("\n The number of words in the sentence is : %d",wordcount);
    printf("\n The number od lines is :%d",linecount);
    printf("\n The number of sentences  is :%d \n\n",sentcount);
    fclose(fp1);
    return 0;
    }
