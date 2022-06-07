#include <stdio.h>

int main(){
	FILE *fp;

	if((fp = fopen("clients.txt", "w"))== NULL){
		puts("File not opened");
	}else{
		puts("Enter account number, name, and balance");
		puts("Enter EOF to end input");
		printf("%s","? " );
		int account;
		char name[30];
		double balance;
		scanf("%d %s %lf", &account, name, &balance);
		while(!feof(stdin)){
			fprintf(fp, "%d %s %lf\n", account, name, balance);
			printf("%s","? ");
			scanf("%d %s %lf", &account, name, &balance);
		}
		fclose(fp);
	}

}