##
## EPITECH PROJECT, 2024
## B-CPE-101-NCY-1-1-myprintf-jean-baptiste.gossot
## File description:
## Makefile of lib/my
##

SRC 	= 	delete_hashtable.c 	\
			hash.c 	\
			ht_delete.c 	\
			ht_dump.c 	\
			ht_insert.c 	\
			ht_search.c 	\
			new_hashtable.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libhashtable.a

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ../../
	cp hashtable.h ../../include/
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)