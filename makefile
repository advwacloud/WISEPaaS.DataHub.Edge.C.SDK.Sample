all: openvpn build

build: DatahubEdge.so.1.0.2
	gcc sample.c -ldl -g -o sample -std=c99

cJSON.o: cJSON.c
	gcc -c -fPIC -o cJSON.o cJSON.c

clean:
	rm -f sample
