SHELL = cmd.exe

clean:
	-rmdir /s /q build

build_w32: *.c
	-mkdir build
	gcc -o .\build\$(basename $<) $^ -L. -lbase_converter_w32 -Wall -Wextra -Wpedantic -g -O0

build_w64: *.c
	-mkdir build
	gcc -o .\build\$(basename $<) $^ -L. -lbase_converter_w64 -Wall -Wextra -Wpedantic -g -O0

run: *.c
	.\build\$(basename $<)