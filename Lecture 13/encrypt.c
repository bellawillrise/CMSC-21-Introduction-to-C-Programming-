#include <stdio.h>
#include <stdlib.h>

void main(){
	char fname[20], ch;
	FILE *to_encrypt, *temp;

	printf("\n\n Encrypt a text file :\n");
	printf("--------------------------\n");

	printf(" Input the name of file to encrypt : ");
	scanf("%s",fname);

	to_encrypt=fopen(fname, "r");
	if(to_encrypt==NULL){
		printf(" File does not exists or error in opening..!!");
		exit(1);
	}
	temp=fopen("temp.txt", "w");
	if(temp==NULL){
		printf(" Error in creation of file temp.txt ..!!");
		fclose(to_encrypt);
		exit(2);
	}
	while(1){
		ch=fgetc(to_encrypt);
		if(ch==EOF){
			break;
		}else{
			ch=ch+100;
			fputc(ch, temp);
		}
	}
	fclose(to_encrypt);
	fclose(temp);
	to_encrypt=fopen(fname, "w");
	if(to_encrypt==NULL){
		printf(" File does not exists or error in opening..!!");
		exit(3);
	}
	temp=fopen("temp.txt", "r");
	if(temp==NULL){
		printf(" File does not exists or error in opening..!!");
		fclose(to_encrypt);
		exit(4);
	}
	while(1){
		ch=fgetc(temp);
		if(ch==EOF){
			break;
		}else{
			fputc(ch, to_encrypt);
		}
	}
	printf(" File %s successfully encrypted ..!!\n\n", fname);
	fclose(to_encrypt);
	fclose(temp);
}
