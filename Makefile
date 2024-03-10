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

SRC_BONUS	= ft_lstnew_bonus.c\
ft_lstadd_front_bonus.c\
ft_lstsize_bonus.c\
ft_lstlast_bonus.c\
ft_lstadd_back_bonus.c\
ft_lstdelone_bonus.c\
ft_lstclear_bonus.c\
ft_lstiter_bonus.c\
ft_lstmap_bonus.c\

OBJ	= $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)
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

bonus: ${OBJ_BONUS}
	$(AR) $(R) ${NAME} ${OBJ_BONUS}

clean:
	$(RM) $(RMFLAGS) ${OBJ}
	$(RM) $(RMFLAGS) ${OBJ_BONUS}

fclean: clean 
	$(RM) $(RMFLAGS) $(NAME)
	$(RM) $(RMFLAGS) ${OBJ_BONUS}

clean_bonus: clean
	$(RM) $(RMFLAGS) ${OBJ_BONUS}
	
fclean_bonus: fclean
	$(RM) $(RMFLAGS) ${OBJ_BONUS}

re: fclean all

.PHONY: all clean fclean re
