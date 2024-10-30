/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:39:19 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/28 21:39:22 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_atoi(const char *str);
unsigned int		ft_strlen(const char *s);
char				*ft_strchr(const char *str, int search_str);
char				*ft_strrchr(const char *str, int chr);
int					ft_strncmp(const char *string1, const char *string2,
						size_t count);
void				*ft_memchr(const void *buf, int c, size_t count);
int					ft_memcmp(const void *pointer1, const void *pointer2,
						size_t size);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
void				*ft_memset(void *pointer, int value, size_t count);
void				ft_bzero(void *s, size_t n);
void				*ft_memmove(void *dest_str, const void *src_str,
						size_t numBytes);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
char				*ft_itoa(int n);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				**ft_split(char const *str, char c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(const char *s, unsigned int start, size_t len);
void				*ft_memcpy(void *to, const void *from, size_t numBytes);

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));

#endif
