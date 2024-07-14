# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Iinclude

# Linker flags
LDFLAGS = -ltbb

# Directories
SRCDIR = src
INCDIR = include
BUILDDIR = build
BINDIR = bin

# Target executable
TARGET = $(BINDIR)/myapp

# Source files
SOURCES = $(wildcard $(SRCDIR)/*.cpp) TestFile.cpp

# Object files
OBJECTS = $(patsubst %.cpp, $(BUILDDIR)/%.o, $(notdir $(SOURCES)))

# Default target
all: $(TARGET)

# Rule to link the object files into the target executable
$(TARGET): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Rule to compile source files into object files
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Special rule for TestFile.cpp (since it is not in SRCDIR)
$(BUILDDIR)/TestFile.o: TestFile.cpp
	@mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build directory
clean:
	rm -rf $(BUILDDIR) $(BINDIR)

# Phony targets
.PHONY: all clean
