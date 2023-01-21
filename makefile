all:	#Build the calculator
	rm -rf build
	mkdir build
	gcc src/main.c src/include/Temperature.c src/include/ohm.c src/include/ShowList.c src/include/Start.c src/include/length.c src/include/emc.c -o build/main
	echo "Build successful in the folder build/";

clean:
	rm -rf build