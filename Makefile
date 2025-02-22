NAME = $(LIBFT_DIR)libft.a
CC = cc
RM = rm 
RMFLAGS = -rf
CFLAGS = -Wall -Werror -Wextra -g3
AR = ar
R = r
INCLUDE = -Iinclude/
MKDIR = mkdir -p

#DIRECTORIES#

BIN_DIR = bin/obj/
LIBFT_DIR = bin/
SRC_DIR = src/

#FILES

GNL_DIR = gnl/
CTYPE_DIR = ctype/
LIST_DIR = list/
STDIO_DIR = stdio/
STDLIB_DIR = stdlib/
STRING_DIR = string/
OTHER_DIR = others/
PRINTF_DIR = printf/

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
				ft_lstisduplicate\
				ft_lstcpy\
				ft_quicksort\
				ft_lstsort\
				ft_swap

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
				ft_strchr\
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

GNL_FILES = get_next_line

PRINTF_FILES = ft_printf\
				ft_pointer_pf\
				ft_putchar_pf\
				ft_putnbr_pf\
				ft_putstr_pf


OTHER_FILES = check_token

FILES = $(addprefix $(GNL_DIR), $(GNL_FILES))\
		$(addprefix $(CTYPE_DIR), $(CTYPE_FILES))\
		$(addprefix $(LIST_DIR), $(LIST_FILES))\
		$(addprefix $(STDIO_DIR), $(STDIO_FILES))\
		$(addprefix $(STDLIB_DIR), $(STDLIB_FILES))\
		$(addprefix $(STRING_DIR), $(STRING_FILES))\
		$(addprefix $(OTHER_DIR), $(OTHER_FILES))\
		$(addprefix $(PRINTF_DIR), $(PRINTF_FILES))

SRC	= $(addprefix $(SRC_DIR), $(addsuffix .c, $(FILES)))

OBJ	= $(addprefix $(BIN_DIR), $(addsuffix .o, $(FILES)))

all: libft

libft: ${NAME}

${NAME}: ${OBJ}
	$(MKDIR) $(LIBFT_DIR)
	$(AR) $(R) ${NAME} ${OBJ}

$(BIN_DIR)%.o: $(SRC_DIR)%.c
	$(MKDIR) $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@ 

clean:
	$(RM) $(RMFLAGS) ${BIN_DIR} 

fclean: clean 
	$(RM) $(RMFLAGS) $(NAME) $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
