/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:51:32 by nomoulin          #+#    #+#             */
/*   Updated: 2023/02/01 14:40:27 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdint.h>

# define AAOFFSET 32

typedef struct s_list
{
	struct s_list	*next;
	void			*content;
}	t_list;

typedef struct s_dynastring
{
	uint32_t	allocated_size;
	uint32_t	filled_size;
	char		*str;
}	t_dynastring;

t_dynastring	*dynastring(uint32_t size);
t_dynastring	*dappend_chr(t_dynastring *dynstr, char chr);
t_dynastring	*print_str(t_dynastring *dynstr);
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), \
	void (*del)(void *));
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *str);
double			ft_pow(double x, unsigned int p);
double			ft_atof(char *str);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
char			*ft_strnstr(const char *str, const char *sstr, size_t length);
char			*ft_substr(const char *s, size_t start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s1, const char *set);
char			**ft_split(const char *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strdup(const char *str);
char			*stralloc(size_t len);
void			*ft_memset(void *offset, int value, size_t length);
void			ft_bzero(void *offset, size_t size);
void			*ft_memcpy(void *dest, const void *src, size_t length);
void			*ft_memmove(void *dest, const void *src, size_t length);
void			*ft_memchr(const void *offset, int value, size_t length);
void			*ft_memrchr(const void *offset, int value, size_t length);
void			*ft_calloc(size_t nb, size_t size);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			delete_dynastring(t_dynastring *dynstr);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t length);
int				ft_atoi(const char *str);
int				ft_strcmp(const char *s1, const char *s2, size_t n);
int				ft_lstsize(t_list *lst);
int				ft_isnumber(char *str);

#endif
