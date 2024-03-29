/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluby <cluby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:22:58 by cluby             #+#    #+#             */
/*   Updated: 2024/03/27 14:05:21 by cluby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BOOL
#  define BOOL int
#  define FALSE 0
#  define TRUE 1
# endif
# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif
# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_list
{
	long			content;
	struct s_list	*next;
	struct s_list	*previous;
}					t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(char c);
int		ft_isascii(int c);
void	ft_bzero(void *s, size_t n);
int		ft_isprint(int c);
int		ft_isascii(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *src);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_itoa(int n);
long	ft_atol(const char *str);
t_list	*ft_lstnew(long content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(long));
void	ft_lstclear(t_list **lst, void (*del)(long));
void	ft_lstiter(t_list *lst/* , void (*f)(long) */);
t_list	*ft_lstmap(t_list *lst, void *(*f)(int), void (*del)(int));
int		ft_printf(const char *str, ...);
int		ft_arg_c(char c);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_arg_d(int decimal);
int		ft_arg_i(int decimal);
int		ft_arg_s(char *str);
int		ft_arg_p(unsigned long long ptr);
int		ft_arg_u(unsigned int nbr);
int		ft_hex_len(unsigned	int num);
int		ft_arg_upper_x(unsigned int num);
int		ft_arg_lower_x(unsigned int num);
char	*ft_uitoa(unsigned int n);

#endif