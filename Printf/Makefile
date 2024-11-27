SRC	= ft_printf.c\
	ft_pointer_pf.c\
	ft_putchar_pf.c\
	ft_putnbr_pf.c\
	ft_putstr_pf.c

OBJ	= $(SRC:.c=.o)
CC = cc
RM = rm 
RMFLAGS = -f
CFLAGS = -Wall -Werror -Wextra
#CFLAGS += -fsanitize=address -g3
AR = ar
R = r
INCLUDE = ft_printf.h

NAME = libftprintf.a

all: ${NAME}

${NAME}: ${OBJ} $(INCLUDE)
	$(AR) $(R) ${NAME} ${OBJ} $(INCLUDE)

clean:
	$(RM) $(RMFLAGS) ${OBJ}

fclean: clean 
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re