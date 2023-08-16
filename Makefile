
all:
	g++ -c get_date.c -o get_date.o
	ar rv libdate.a get_date.o

	g++ -c get_time.c -o get_time.o
	ar rv libtime.a get_time.o



gcc:
	gcc -c get_date.c -o get_date.o
	ar rv libdate.a get_date.o

	gcc -c get_time.c -o get_time.o
	ar rv libtime.a get_time.o


clean:
	rm *.a
	rm *.o
