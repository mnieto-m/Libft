NAME = $(LIBFT_DIR)libft.a
CC = gcc
RM = rm 
RMFLAGS = -rf
CFLAGS = -Wall -Werror -Wextra
AR = ar
R = r
INCLUDE = libft.h
#DIRECTORIES#

LIBFT_DIR = libft/
SRC_DIR = src/

CTYPE_DIR = ctype/
LIST_DIR = list/
STDIO_DIR = stdio/
STDLIB_DIR = stdlib/
STRING_DIR = string/

#INCLUDES#
CTYPE_FILES = ft_isascii\
				ft_isnum\
				ft_isprint\
				ft_isdigit\
				ft_issign\
				ft_isspace\
				ft_isalnum\
				ft_isalpha\
				ft_tolower\
				ft_toupper

LIST_FILES = ft_lstnew\
				ft_lstadd_front\
				ft_lstsize\
				ft_lstlast\
				ft_lstadd_back\
				ft_lstdelone\
				ft_lstclear\
				ft_lstiter\
				ft_lstmap\
				ft_lstsecond_last\

STDIO_FILES = ft_putunbr_base\
				ft_pointer\
				ft_putchar_fd\
				ft_putendl_fd\
				ft_putstr_fd\
				ft_putnbr_fd\
				ft_putchar

STDLIB_FILES = ft_calloc\
				ft_atoi\
				ft_atoi_signal\
				ft_itoa\
				ft_mfree

STRING_FILES = ft_strlen\
				ft_strncmp\
				ft_strlcpy\
				ft_strlcat\
				ft_bzero\
				ft_memchr\
				ft_strchr\
				ft_strncmp\
				ft_strnstr\
				ft_memchr\
				ft_memcmp\
				ft_memset\
				ft_memcpy\
				ft_strrchr\
				ft_memmove\
				ft_strdup\
				ft_substr\
				ft_strjoin\
				ft_strtrim\
				ft_strmapi\
				ft_striteri\
				ft_split

FILES = $(addprefix $(CTYPE_DIR), $(CTYPE_FILES))\
		$(addprefix $(LIST_DIR), $(LIST_FILES))\
		$(addprefix $(STDIO_DIR), $(STDIO_FILES))\
		$(addprefix $(STDLIB_DIR), $(STDLIB_FILES))\
		$(addprefix $(STRING_DIR), $(STRING_FILES))

SRC	= $(addprefix $(SRC_DIR), $(addsuffix .c, $(FILES)))
OBJ	= $(addprefix $(SRC_DIR), $(addsuffix .o, $(FILES)))

MPRINTF = ${MAKE} -C ./Printf

all:libft printf

libft: ${NAME}

${NAME}:${OBJ}
	$(AR) $(R) ${NAME} ${OBJ}

$(BIN_DIR)%.o:$(SRC_DIR)%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

printf :
	$(MPRINTF)

clean:
	$(RM) $(RMFLAGS) ${OBJ} 
	${MPRINTF} clean

fclean: clean 
	$(RM) $(RMFLAGS) $(NAME) $(printf)
	${MPRINTF} fclean

re: fclean all

.PHONY: all clean fclean re
