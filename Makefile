SHELL = cmd.exe

clean:
	-rmdir /s /q build

build_w32: *.c
	-mkdir build
	gcc -o .\build\$(basename $<) $^ -L. -lbase_converter_w32

build_w64: *.c
	-mkdir build
	gcc -o .\build\$(basename $<) $^ -L. -lbase_converter_w64

run: *.c
	.\build\$(basename $<)