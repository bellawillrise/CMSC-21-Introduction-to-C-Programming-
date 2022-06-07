#include <stdio.h>
#include <stdlib.h>

void main(){
	char ch, fname[20];
	FILE *to_decrypt, *temp;
	
	printf("\n\n Decrypt a text file :\n");
	printf("--------------------------\n"); 	
	
	printf(" Input the name of file to decrypt : ");
	scanf("%s",fname);	
	
	to_decrypt=fopen(fname, "w");
	if(to_decrypt==NULL){
		printf(" File does not exists or error in opening..!!");
		exit(7);
	}
	temp=fopen("temp.txt", "r");
	if(temp==NULL){
		printf(" File does not exists or error in opening..!!");
		fclose(to_decrypt);
		exit(9);
	}
	while(1){
		ch=fgetc(temp);
		if(ch==EOF){
			break;
		}else{
			ch=ch-100;
			fputc(ch, to_decrypt);
		}
	}
	printf(" The file %s decrypted successfully..!!\n\n",fname);
	fclose(to_decrypt);
	fclose(temp);
}