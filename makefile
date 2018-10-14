build: WISEPaaS.so.1.0.0
	gcc test.c -ldl -g -o sample -std=c99
clean:
	rm -f sample