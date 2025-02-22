/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:49:32 by mnieto-m          #+#    #+#             */
/*   Updated: 2025/02/20 22:16:21 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <errno.h>
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define FD_MAX 1024

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isnum(int c);
int					ft_isprint(int c);
int					ft_issign(int c);
int					ft_isspace(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_atoi(const char *str);
int					ft_atoi_signal(char *str, int *flag);
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, char *src, size_t dstsize);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *src, const char *search,
						size_t len);
char				*ft_strdup(const char *s1);
char				*ft_substr(char const *s, size_t start, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				**ft_split(char const *s, char c);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstsecond_last(t_list *a);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
t_list *ft_lstcopy(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
int					ft_lstisduplicate(t_list **a);
int					ft_putunbr_base(size_t n, char *base);
int					ft_pointer(void *flag);
int					ft_putchar(char c);
void				ft_mfree(int count, ...);

/* gnl */
char				*get_next_line(int fd);

/* others*/
int					check_token(char *s, char c);
/* printf */
int					ft_printf(char const *flag, ...);
int					ft_putchar_pf(char c);
size_t				ft_putnbr_pf(int n);
size_t				ft_pointer_pf(void *flag);
size_t				ft_putstr_pf(char *s);

#endif