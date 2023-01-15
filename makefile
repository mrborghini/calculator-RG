all:	#Build the calculator
	gcc src/main.c src/include/CelciusToFahrenheit.c -o build/main

clean:
	rm -f build/main