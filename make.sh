rgbasm -o main.o main.rgbasm --include ./include -Wall

rgblink -o hello.gb main.o -Wall

rgbfix -v -p 0 hello.gb -Wall
