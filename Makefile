SRC	=  ft_isalpha.c\
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
ft_isalnum.c\
ft_lstnew.c\
ft_lstadd_front.c\
ft_lstsize.c\
ft_lstlast.c\
ft_lstadd_back.c\
ft_lstdelone.c\
ft_lstclear.c\
ft_lstiter.c\
ft_lstmap.c\
ft_putunbr_base.c\
ft_pointer.c\
ft_putchar.c

OBJ	= $(SRC:.c=.o)
CC = gcc
RM = rm 
RMFLAGS = -f
CFLAGS = -Wall -Werror -Wextra
AR = ar
R = r

NAME = libft.a

all: ${NAME}

${NAME}: ${OBJ}
	$(AR) $(R) ${NAME} ${OBJ}

clean:
	$(RM) $(RMFLAGS) ${OBJ}

fclean: clean 
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
