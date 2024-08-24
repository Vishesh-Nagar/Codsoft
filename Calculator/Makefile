CXX = g++

CXXFLAGS = -Iinclude -Wall -std=c++11

SRCS = src/main.cpp

OBJS = $(SRCS:.cpp=.o)

TARGET = calculator

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS) $(TARGET)