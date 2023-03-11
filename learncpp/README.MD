# learncpp.com samples
This directory will include code samples and examples from the [learncpp](learncpp.com) website.


### heeloworld.cpp
Best project to get started in a programming language; printing "Hello, World!"

To compile the code from the command line, because who needs a IDE when you have the terminal, type:
```shell
g++ -o <name of the compiled document> <name of the cpp file>

g++ -o helloworld helloworld.cpp
```

This command will compile the `helloworld.cpp` script.

To execute your program simply call the executable that you have created.
```shell
./helloworld
```

### Debugging the code
Use gdb from the terminal, not sure how as of now.

### g++ command line tweaks

* add `-ggdb` to the command line when debugging and `-O2 -DNDEBUG` for release builds.
Use the former for now.
* You can disable compiler extensions by adding the `-pedantic-errors` flag to the compile command line.
* Add the following flags to your command line: `-Wall -Weffc++ -Wextra -Wsign-conversion` to make your warning levels
maximum.
* Enable “Treat warnings as errors”. This will force you to resolve all issues causing warnings. Add the following
flag to your command line: -Werror
* To set a language version standard for GCC/G++, you can pass compiler flags `-std=c++11`, `-std=c++14`, `-std=c++17`, or `-std=c++20` to enable 
C++11/14/17/20 support respectively. If you have GCC 8 or 9, you’ll need to use `-std=c++2a` for C++20 support instead.

