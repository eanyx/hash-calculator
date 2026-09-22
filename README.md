# hash-calculator

Graphical Hash Calculator

# Hash calculator

Quick hash calculator with gui written in C++/Qt6

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

For Linux:
	
	- Qt6 IDE
	- gcc/g++ compilers

For Mac OS X:
	
	- Qt6 IDE
	- X Code compiler

For Windows:
	
	- Qt6 IDE
    - MinGW
	
Build:

	qmake
	make

Launch:

	./hash-calculator

- 21 september 2026 - v 0.1 - by eanyx (eanyx123@gmail.com) 
    - Draft 

- 22 september 2026 - v 0.1a - by eanyx (eanyx123@gmail.com)
    - Add .gitignore rules
    - Code cleaning
    - Code moved to Qt6
    - Added basic functions (import from Qt5 version)
    - Added MD5 and SHA1 algorithms 

