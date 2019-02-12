CC = g++
CFLAGS = -g
LIBS = -lm

OBJS = main.o heapDelete.o heapInsert.o heapPrint.o maxHeap.o

heapMain: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $@ $(LIBS)
.cpp.o:
		$(CC) $(CFLAGS) -c $<
clean:
	-rm *.o *~ core paper