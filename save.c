#include "header.h"

extern void save(SLL *hp){

	SLL *temp = hp;
	FILE *fp = fopen("student.dat", "w");
	
	while(temp){
		fprintf(fp,"\t%d\t%s\t\t%2f\n", temp -> rollno, temp -> name, temp -> percentage);
		temp = temp -> next;
	}
	fclose(fp);
	pslow("\033[32;1;5m\n\tRecords Saved Successfully!\033[0m\n", 1000);
			
}
