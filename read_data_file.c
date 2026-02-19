#include "header.h"

extern int read_file(SLL **hp){
	SLL *new = NULL;	
	FILE *fp = fopen("student.dat", "r");
	if(fp == 0){	
		return 0;
	}
	while(1){
		new = malloc(sizeof(SLL));
		if((fscanf(fp,"%d%s%f", &new -> rollno, new -> name, &new -> percentage)) == -1)
		{
			free(new);
			break;		
		}
		new -> next = NULL;
		if(*hp == 0)
			*hp = new;
		else{
			SLL *last = *hp;
			while(last -> next)
				last = last -> next;

			last -> next = new;
		}
	}
	fclose(fp);
	return 1;
}
