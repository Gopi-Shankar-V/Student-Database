#include "header.h"

int c = 0;

int main(){
	char op;
	int num = 3;
	SLL *hp = 0;
	if(hp == 0) read_file(&hp);
	while(1){
		pslow("\033[32;1m", 5000);
		pslow("\n\n\t+++++++++++++++++++++++++++++++++++++++++++++++++\n", 5000);
		pslow("\t+\t\t STUDENT RECORD MENU\t\t+\n", 5000);
		pslow("\t+++++++++++++++++++++++++++++++++++++++++++++++++\n", 5000);
		
		pslow("\t+\ta/A\t: add new record\t\t+\n", 5000);
		pslow("\t+\td/D\t: delete a record\t\t+\n", 5000);
		pslow("\t+\ts/S\t: show the list\t\t\t+\n", 5000);
		pslow("\t+\tm/M\t: modify a record\t\t+\n", 5000);
		pslow("\t+\tv/V\t: save\t\t\t\t+\n", 5000);
		pslow("\t+\te/E\t: exit\t\t\t\t+\n", 5000);
		pslow("\t+\tt/T\t: sort the list\t\t\t+\n", 5000);
		pslow("\t+\tl/L\t: delete the all records\t+\n", 5000);
		pslow("\t+\tr/R\t: reverse the list\t\t+\n", 5000);
		pslow("\t+++++++++++++++++++++++++++++++++++++++++++++++++\n\n", 5000);
		pslow("\033[0m", 5000);
		pslow("\033[34;1m\tEnter Your Choice: \033[0m", 5000);

		sf(" %c", &op);
		op = tolower(op);

		switch(op){
			case 'a': add_new_record(&hp); break;
			case 'A': add_new_record(&hp); break;
			case 'd': {	
					char ch;
					pslow("\033[32;1m", 5000);
					pslow("\t+++++++++++++++++++++++++++++++++++++++++++++++++\n", 5000);

					pslow("\t+\tR/r\t: Delete Based on RollNo\t\t+\n", 5000);
					pslow("\t+\tN/n\t: Delete Based on Name\t\t+\n", 5000);
					pslow("\t+++++++++++++++++++++++++++++++++++++++++++++++++\n\n", 5000);
					pslow("\033[0m", 5000);
					pslow("\033[34;1m\tEnter Your Choice: \033[0m", 5000);

					sf(" %c", &ch);
					ch = tolower(ch);
						
					switch(ch){
						case 'r': delete_record_rollno(&hp);break;
						case 'n': delete_record_name(&hp);break;	
					default: pf("\033[31;1;5m\n\tInvalid User Input! \033[0m\n"); break;
					}
						
				}; break;

			case 's': show_the_list(hp); break;

			case 'm': {	
					char ch;
					pslow("\033[32;1m", 5000);
					pslow("\n\n\t+++++++++++++++++++++++++++++++++++++++++++++++++\n", 5000);
					pslow("\t+\t STUDENT REWCORD MODIFICATION\t\t+\n", 5000);
					pslow("\t+++++++++++++++++++++++++++++++++++++++++++++++++\n", 5000);

					pslow("\t+\tR/r\t: To Search a RollNo\t\t+\n", 5000);
					pslow("\t+\tN/n\t: To Search a Name\t\t+\n", 5000);
					pslow("\t+\tP/p\t: Based on Percentage\t\t+\n", 5000);
					pslow("\t+++++++++++++++++++++++++++++++++++++++++++++++++\n\n", 5000);
					pslow("\033[0m", 5000);
					pslow("\033[34;1m\tEnter Your Choice: \033[0m", 5000);

					sf(" %c", &ch);
					ch = tolower(ch);
						
					switch(ch){
						case 'r': search_rollno(hp);break;
						case 'n': search_name(hp);break;
						case 'p': search_percentage(hp);break;	
					default: pf("\033[31;1;5m\n\tInvalid User Input! \033[0m\n"); break;
					}
						
				}; break;
	

			case 'v': save(hp); break;

			case 'e': {	
					char ch;
					pslow("\033[32;1m", 5000);
					pslow("\t+++++++++++++++++++++++++++++++++++++++++++++++++\n", 5000);

					pslow("\t+\tS/s\t: save and exit\t\t\t+\n", 5000);
					pslow("\t+\tE/e\t: exit without saving\t\t+\n", 5000);
					pslow("\t+++++++++++++++++++++++++++++++++++++++++++++++++\n\n", 5000);
					pslow("\033[0m", 5000);
					pslow("\033[34;1m\tEnter Your Choice: \033[0m", 5000);

					sf(" %c", &ch);
					ch = tolower(ch);
						
					switch(ch){
						case 's': save(hp); exit(0);
						case 'e': exit(0);
						default: pf("\033[31;1;5m\n\tInvalid User Input! \033[0m\n"); break;
					}
						
				};

			case 't': {	
					char ch;
					pslow("\033[32;1m", 5000);
					pslow("\t+++++++++++++++++++++++++++++++++++++++++++++++++\n", 5000);

					pslow("\t+\tr/r\t: Sort With Roll No\t\t+\n", 5000);
					pslow("\t+\tN/n\t: Sort With Name\t\t+\n", 5000);
					pslow("\t+\tP/p\t: Sort With Percentage\t\t+\n", 5000);
					pslow("\t+++++++++++++++++++++++++++++++++++++++++++++++++\n\n", 5000);
					pslow("\033[0m", 5000);
					pslow("\033[34;1m\tEnter Your Choice: \033[0m", 5000);

					sf(" %c", &ch);
					ch = tolower(ch);
						
					switch(ch){
						case 'r': rollno_sorting(hp); break;
						case 'n': name_sorting(hp); break;
						case 'p': percentage_sorting(hp); break;
						default: pf("\033[31;1;5m\n\tInvalid User Input! \033[0m\n"); break;
					}
				}; break;

			case 'l': {
					char conf[5];
					pslow("\033[33;1m\tAre You Sure!, You want to Delete All (yes/no): \033[0m",5000);					
					sf("%4s", conf);

					for(int i = 0; conf[i]; i++) conf[i] = tolower(conf[i]);
				
					if(strcmp(conf, "yes") == 0)				
						delete_all(&hp); 
					break;
				}; break;
			case 'r': reverse_list(hp); break;

			default: pf("\033[31;1;5m\n\tInvalid User Input! \033[0m\n");
				num--;
				if(num == 0) exit(0); 
		}
	}
}
