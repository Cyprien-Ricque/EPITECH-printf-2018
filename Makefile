##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

all:
	make -C ./lib/my/
	cp -r ./lib/my/libmy.a .

clean:
	make clean -C ./lib/my/

fclean:	clean
	make fclean -C ./lib/my/
	rm -f libmy.a

re:	fclean all
	make re -C ./lib/my/
