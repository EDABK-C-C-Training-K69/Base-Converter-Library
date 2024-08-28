# BASE CONVERTER LIBRARY

## 1. Quick Started

- Clone the repository:
    ```
    git clone https://github.com/EDABK-C-C-Training-K69/Base-Converter-Library.git
    ```

- Replace `example.c` with `your-source-code.c`. Your code can use any of the functions listed in `base_converter.h`

- Compile code with: 
    - If your compiler is 32bit (Windows 32 bit):
        ```
        make clean build_w32
        ```
    - If your compiler is 64bit (Windows 64 bit):
        ```
        make clean build_w64
        ```

- Run with:
    ```
    make run
    ```

- To remove the build directory:
    ```
    make clean
    ```

## 2. Quick Example

> Assume your code file is `main.c`  
> Assume your Windows is Windows 64 bit

- Step 1: Delete file `example.c` from the root directory
- Step 2: Place `main.c` in the root directory
- Step 3: Run command `make clean build_w64 run`
