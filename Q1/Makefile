CXX = g++
CXXFLAGS = -std=c++17 -Iinclude -O3
LDFLAGS = 

SRC_DIR = .
HEADER_DIR = .
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
HEADERS = $(wildcard $(HEADER_DIR)/*.hpp)

TARGET = q1

all: $(TARGET)

$(TARGET): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) $(LDFLAGS) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)