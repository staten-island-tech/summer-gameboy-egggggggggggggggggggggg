rgbasm -o main.o main.rgbasm

rgblink -o hello.gb main.o

rgbfix -v -p 0 hello.gb
