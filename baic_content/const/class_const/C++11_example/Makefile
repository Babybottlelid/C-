CC = g++
CFLAGS = -Wall -g -MMD
TARGET = myprogram
SRCS = main.cpp apple.cpp 
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

-include $(OBJS:.o=.d)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS:.o=.d) $(TARGET)

