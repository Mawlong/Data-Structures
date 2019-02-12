CC = g++
CFLAGS = -g
LIBS = -lm

OBJS = main.o heapDelete.o heapInsert.o heapPrint.o maxHeap.o

heapMain: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $@ $(LIBS)
main.o: main.cpp header.h
		$(CC) $(CFLAGS) -c main.cpp
heapDelete.o: heapDelete.cpp header.h
		$(CC) $(CFLAGS) -c heapDelete.cpp
heapInsert.o: heapInsert.cpp header.h
		$(CC) $(CFLAGS) -c heapInsert.cpp
heapPrint.o: heapPrint.cpp header.h
		$(CC) $(CFLAGS) -c heapPrint.cpp
maxHeap.o: maxHeap.cpp header.h
		$(CC) $(CFLAGS) -c maxHeap.cpp


clean:
	-rm *.o *~ core paper