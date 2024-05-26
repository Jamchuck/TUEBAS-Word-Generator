output:
	x86_64-w64-mingw32-g++ -Wl,--stack,4194304  -static-libgcc -static-libstdc++ -O2 main.cpp -o app.exe
target: dependencies
	actions