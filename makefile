all:	#Build the calculator
	rm -rf build
	mkdir build
	gcc src/main.c src/Math/Temperature.c src/Math/ohm.c src/components/ShowList.c src/components/Start.c src/Math/length.c src/Math/emc.c src/Math/NormalMath.c -o build/main
	echo "Build successful in the folder build/";

clean:
	rm -rf build