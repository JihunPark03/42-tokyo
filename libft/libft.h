/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:59:27 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/01 09:12:23 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(char const *str);
void				ft_bzero(void *str, size_t n);
void				*ft_calloc(size_t nitems, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(char c);
int					ft_isprint(char c);
char				*ft_itoa(int nb);
char				**ft_split(const char *str, char c);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstnew(void *content);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
void				*ft_memset(void *str, int c, size_t n);
void				*ft_memcpy(void *dest, const void *source, size_t num);
void				*ft_memmove(void *dest, void *source, size_t num);
void				*ft_memchr(void *str, int c, size_t n);
int					ft_memcmp(void *str1, void *str2, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_strlen(char const *str);
char				*ft_strchr(char *str, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *str_1, const char *str_2,
						size_t len);
char				*ft_strdup(char *src);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
unsigned int		ft_strlcat(char *dest, const char *src, unsigned int size);
unsigned int		ft_strlcpy(char *dest, const char *src, unsigned int size);
char				*ft_substr(const char *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
