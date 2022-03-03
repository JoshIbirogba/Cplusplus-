COMPILER=g++
OBJS=prog2.o
default: testcase
testcase: $(OBJS)
	$(COMPILER) -o test $(OBJS)

.PHONY: clean
clean:
	rm *.o
	rm file