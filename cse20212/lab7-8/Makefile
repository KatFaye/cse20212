#CC specifies which compiler we're using
CC = g++

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = -w

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2

#OBJ_NAME specifies the name of our exectuable
OBJS = lesson02

#This is the target that compiles our executable
all: $(OBJS)

%.o: %.cpp
	$(CC) -c $^ $(COMPILER_FLAGS) $(LINKER_FLAGS) 

$(OBJS): $(OBJS).o
	$(CC) $^ $(LINKER_FLAGS) -o $@

clean:
	rm *.o 