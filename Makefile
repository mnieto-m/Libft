SRC	=   ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_tolower.c\
ft_toupper.c\
ft_strlen.c\
ft_strncmp.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_bzero.c\
ft_memchr.c\
ft_strchr.c\
ft_strncmp.c\
ft_strnstr.c\
ft_memchr.c\
ft_memcmp.c\
ft_memset.c\
ft_memcpy.c\
ft_strrchr.c\
ft_memmove.c\
ft_calloc.c\
ft_atoi.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_putchar_fd.c\
ft_putendl_fd.c\
ft_putstr_fd.c\
ft_putnbr_fd.c\
ft_strmapi.c\
ft_striteri.c\
ft_itoa.c\
ft_split.c\

OBJ	= $(SRC:.c=.o)
CC = gcc
RM = rm 
RMFLAGS = -f
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

all: ${NAME}

${NAME}: ${OBJ}
	ar r ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean 
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
