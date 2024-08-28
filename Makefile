SHELL = cmd.exe

clean:
	-rmdir /s /q build

build: *.c
	-mkdir build
	gcc -o .\build\$(basename $<) $^ -L. -lbase_converter

run: *.c
	.\build\$(basename $<)