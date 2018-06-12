/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:30:48 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/12 16:23:33 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
# define _LIBFT_H_

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	ft_putstr(char const *str);
void	*ft_bzero(void *s, size_t n);
void	ft_putchar(char c);
void	ft_putnbr(int n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
int	ft_atoi(char *str);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isupper(int c);
int	ft_islower(int c);
char *ft_strtrim(char const *s);
void ft_striter(char *str, void (*f) (char*));
int ft_strnequ(char const *s1, char const *s2, size_t n);
char *ft_strmapi(char const *s, char (*f) (unsigned int, char));
int ft_strnequ(char const *s1, char const *s2, size_t n);
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, const char *s2);
int ft_wcount(char const *s, char c);
void ft_putendl(char const *s);
void ft_putendl_fd(char const *s, int fd);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char const *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_striteri(char *str, void (*f) (unsigned int, char*));
int ft_strequ(char const *s1, char const *s2);
char *ft_itoa(int n);
char *ft_strmap(char const *s, char (*f)(char)); 
char	*ft_strnew(size_t size);
#endif

