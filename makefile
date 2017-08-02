CXX = g++
HEADERS = Queue.h Node.h
SRCS = Queue.cpp Node.cpp main.cpp
program: ${SRCS} ${HEADERS}
	${CXX} ${SRCS} -o QueueChar
clean: rm -f *.o