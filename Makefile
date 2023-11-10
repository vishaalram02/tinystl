CC := g++
CCFLAGS := -Iinclude -Isrc -Wall -Wextra -std=c++17 -O2
SRC_DIR := src
INCLUDE_DIR := include
TESTS_DIR := tests

TESTS = $(wildcard $(TESTS_DIR)/*.cpp)
TESTS_TARG = $(notdir $(TESTS:.cpp=))

$(TESTS_TARG): %: $(TESTS_DIR)/%.cpp $(INCLUDE_DIR)/%.h $(SRC_DIR)/%.tpp
	$(CC) $(CCFLAGS) $< -o $@

clean:
	rm -f $(TESTS_TARG)