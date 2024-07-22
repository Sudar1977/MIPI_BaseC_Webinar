all: sensor_demo

sensor_demo: main.o sensor.o
	gcc -o sensor_demo main.o sensor.o

main.o: main.c sensor.h
	gcc -c -std=c99 -o main.o main.c

sensor.o: sensor.c
	gcc -c -std=c99 -o sensor.o sensor.c

clean:
	del *.o
	del sensor_demo.exe
