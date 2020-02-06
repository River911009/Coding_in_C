all:
	@echo "Start building..."
	gcc -o main.out main.cpp
	@echo "Done!"

clean:
	@rm -rf *.out
