#include <stdio.h>

int main(){
	FILE *fp;

	if((fp = fopen("clients.txt", "r"))== NULL){
		puts("File not opened");
	}else{
		int account;
		char name[30];
		double balance;
		printf("Account\tName\tBalance\n");
		fscanf(fp, "%d %s %lf", &account, name, &balance);
		while(!feof(fp)){
			printf("%d\t%s\t%lf\n", account, name, balance);
			fscanf(fp, "%d %s %lf", &account, name, &balance);
		}
		fclose(fp);
	}

}