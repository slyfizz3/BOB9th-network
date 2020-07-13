#include<stdio.h>
#include<stdint.h>
#include"endian.h"

int main(int argc, char *argv[]){
    int32_t a,b;       
    FILE *file1=  fopen(argv[1],"r");
    FILE *file2 = fopen(argv[2],"r"); 
    fread(&a,sizeof(a),1,file1);
    fread(&b,sizeof(b),1,file2);
    a=endian(a);
    b=endian(b);
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",a,a,b,b,a+b,a+b);
    fclose(file1);
    fclose(file2);

}