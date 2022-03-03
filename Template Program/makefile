COMPILER=g++
OBJS=main.o queue.o stack.o
default: testcase
testcase: $(OBJS)
	$(COMPILER) -o test $(OBJS)

.PHONY: clean
clean:
	rm *.o
	rm file