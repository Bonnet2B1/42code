/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:18:05 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:18:05 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>

#ifndef LIBFT_H
# define LIBFT_H

typedef struct s_list
{
	void 	*content;
	size_t 	content_size;
	struct 	s_list *next;
} 	t_list;

//	str
size_t	ft_strlen(const char *str);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(char *str, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *src);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strncat(char *dest, const char *src, size_t nb);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strcapitalize(char *str);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

//	chr
int		ft_chrcmp(char c1, char c2);

//	put/print
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//	is
int		ft_strisprint(char *str);
int		ft_strisalnum(char *str);
int		ft_strisalpha(char *str);
int		ft_strisascii(char *str);
int		ft_strisdigit(char *str);
int		ft_isprint(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isspace(char c);

//	memory
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
char	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);

//	to
int		ft_atoi(const char *str);
char	ft_tolower(char c);
char	ft_toupper(char c);
char	*ft_itoa(int n);

//	math
int		ft_factorial(int nb);
int		ft_power(int nb, int power);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
int		ft_isprime(int nb);
int		ft_find_next_prime(int nb);

//	swap
void	ft_swap(int *a, int *b);

//	list
t_list	*ft_lstnew(void const *content, size_t content_size);

#endif