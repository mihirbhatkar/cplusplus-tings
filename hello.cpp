#include <iostream>


int main(){
    std::cout << "Hello World!" << std::endl << "wtf is going on";
    return 0;
}


// data types in c++: int, double, float, char, bool
// String is a library in cpp

// ---------------------------------------------------------------------------

// std:: is a prefix used to access functions, classes and variables that are a part of C++ standard library

// A namespace is a way to organize and group related code together to AVOID NAMING CONFLICTS.

// :: is called Scope Resolution Operator. It is used to access members of a namespace, class or object.

// A library means a collection of pre-written code modules or functions that provide a set of commonly used operations or functionalities. These code modules are designed to be reusable, thus saving a lot of time.

// C++ standards library is part of the C++ language specification, and it is maintained by the C++ standards committee.


// ---------------------------------------------------------------------------
// ? Complete flow:: Write Code => Compiling => Linking => Generating Executable(Executable file only has machine code in it) => Run the executable

// Continued:: Program execution starts(OS loads the exe into memory) => Program execution starts at main function and terminates until it reaches the end of the main function or return is used in the main function (conventionally, return value of 0 indicates success while non-zero indicates errors)

// program may interact with the user or its external environment during its execution

// when `g++ hello.cpp -o hello` is executed, g++ reads hello.cpp and compiles it into machine code. compiler performs various checks, such as syntax and type checking, and generates an object file(often with a '.o' extension) containing the compiled code. The linker links any necessary libraries to the object file and prepares the final executable. The resulting executable file contains machine code that can be executed by CPU.

// So g++ is responsible for compiling and linking code.

// ---------------------------------------------------------------------------
// ? memory management

// random questions:: why do the variables, function call information, control data need to be stored in stack memory? are they stored in binary/machine code? how does all of it work? what exactly is memory leak? what happens in case of memory leak?

// * stack memory:: region of memory used for storing local variables, function call information, and control data during the execution of a program. It operates in a last-in, first-out (LIFO) manner, meaning that the most recently allocated memory is the first to be deallocated.

// * characteristics of stack memory::
// Storing local variables, 
// function call management (portion of stack that manages this is called stack frame or activation record), 
// fast allocation and deallocation(reason:: simple pointer manipulations), 
// fixed size(size of stack is usually fixed at the program's startup and is limited. Exact size depends on the system and can be configured), 
// deterministic lifetime(variables on stack are automatically destroyed when they go out of scope or when the function they belong to returns)

// * heap memory:: region of memory used for dynamic memory allocation. Unlike the stack, which has a predictable and limited size, the heap can grow and shrink as needed during the program's execution.

// * characteristics of heap memory:: 
// dynamic memory allocation(functions like new in C++ or malloc in C to allocate memory and 'delete' and 'free' to deallocate memory), 
// variable lifetime (they exist on heap until explicitly deallocated)
// dynamic sizing (the heap allows dynamic sizing of data structures like arrays and linked lists.) 
// slower allocation and deallocation (involves more complex bookkeeping and may require searching for suitable memory blocks)
// ! potential for memory leaks: case where allocated memory is never deallocated, causing the program to consume more and more memory over time



