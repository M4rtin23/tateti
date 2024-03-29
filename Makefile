all: tateti

tateti:
	gcc main.c -o tateti


install: tateti
	cp tateti /usr/local/bin

uninstall:
	rm -f /usr/local/bin/sib

clean:
	rm -f tateti
