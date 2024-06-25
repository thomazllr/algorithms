a: *.c
	gcc *.c -o a

clean:
	$(RM) a

test: clean a
	bash test.sh

eval: clean a 
	bash eval.sh