#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc,char* argv[])
{
    int size = 0;

    if( argc <= 1)
    {
        printf("pas assez d'argument!\n");
        return 1;
    }  
    //total of letters
    
    for(int i = 1; i <= argc-1; i++)
    {
        //printf("i = %d\n",i);
        //printf("%s\n",argv[i]);
        size += strlen(argv[i]);
        //printf("size = %d\n",size);
    }
    //potato
    {
        int j = 0;
    for(int i = 1; i < argc; i++)
    {
        for(; j < size+argc-1; j++) //the 1 argc-1 is a way to count spaces
        {
            //printf("j = %d i = %d\n",j,i);
            printf("%c",argv[i][j]);
        }
    }
    }
    //affichage
    printf("\n\n");
    printf("total words size : %d, total of words : %d, total combination : %.0f\n",size, argc,pow(size,size));
    return 0;
}