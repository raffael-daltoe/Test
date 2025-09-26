CXX := g++
CXXFLAGS := -std=c++17 -O3 -Wall -Wextra
TARGET := q2

SRCS := $(shell find . -name '*.cpp')
INCLUDE_DIRS := $(dir $(shell find . -name '*.hpp'))
INCLUDES := $(patsubst %, -I%, $(INCLUDE_DIRS))

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean