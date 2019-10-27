NAME = ft_display_file

SRCS = srcs/main.c \
	   srcs/ft_putchar.c \
	   srcs/ft_putstr.c \

OBJ = main.o \
	  ft_putchar.o \
	  ft_putstr.o \

INC = ./includes/

FLAGS = -Werror -Wall -Wextra

all :
	gcc $(FLAGS) -c -I $(INC) $(SRCS)
	gcc $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re :fclean all
