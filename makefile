exe: main.o add_new_record.o show_the_list.o save.o delete_record_name.o delete_record_rollno.o delete_all.o count.o reverse_list.o read_data_file.o print_slow.o search_rollno.o search_name.o search_percentage.o name_sorting.o percentage_sorting.o rollno_sorting.o
	gcc main.o add_new_record.o show_the_list.o  save.o delete_record_name.o delete_record_rollno.o delete_all.o count.o reverse_list.o read_data_file.o search_rollno.o print_slow.o search_name.o search_percentage.o name_sorting.o rollno_sorting.o percentage_sorting.o -o exe

main.o: main.c header.h
	gcc -c main.c

add_new_record.o: add_new_record.c header.h
	gcc -c add_new_record.c

show_the_list.o: show_the_list.c header.h
	gcc -c show_the_list.c

save.o: save.c header.h
	gcc -c save.c

delete_record_name.o: delete_record_name.c header.h
	gcc -c delete_record_name.c

delete_record_rollno.o: delete_record_rollno.c header.h
	gcc -c delete_record_rollno.c

delete_all.o: delete_all.c header.h
	gcc -c delete_all.c

reverse_list.o: reverse_list.c header.h
	gcc -c reverse_list.c

count.o: count.c header.h
	gcc -c count.c

read_data_file.o: read_data_file.c header.h
	gcc -c read_data_file.c

search_rollno.o: search_rollno.c header.h
	gcc -c search_rollno.c

search_name.o: search_name.c header.h
	gcc -c search_name.c

search_percentage.o: search_percentage.c header.h
	gcc -c search_percentage.c

rollno_sorting.o: rollno_sorting.c header.h
	gcc -c rollno_sorting.c

name_sorting.o: name_sorting.c header.h
	gcc -c name_sorting.c

percentage_sorting.o: percentage_sorting.c header.h
	gcc -c percentage_sorting.c

print_slow.o: print_slow.c header.h
	gcc -c print_slow.c

clean:
	rm -f *.o exe
