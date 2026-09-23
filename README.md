# hash-calculator

Graphical Hash Calculator written in C++/Qt6

- Support :
    - MD5 (Legacy)
    - SHA-1 (legacy)
    - SHA-2 
    - SHA-3
    - Keccak-512
- Support Linux, Windows and Mac OS X.
    - Tested on Ubuntu 24.04 and 26.04
    - Tested on Windows 10 and 11
    - Tested on MacOS 27
- Support 32 and 64 bits architectures
- Compute hash of file up to 128 GB 
    - See filesystem limits for some OS

Compilation :

git clone https://github.com/eanyx/hash-calculator

For Linux:
	
	- Qt6 IDE
	- gcc/g++ compilers

For Mac OS X:
	
	- Qt6 IDE
	- X Code compiler

For Windows:
	
	- Qt6 IDE
    - MinGW
	
Or command line build:

	qmake
	make

Launch:

	./hash-calculator

Enjoy !
