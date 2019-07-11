/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:54:21 by kgomera           #+#    #+#             */
/*   Updated: 2019/07/09 13:59:28 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>

size_t				ft_strlen(const char *str);
size_t				ft_count(char const *s, char c);
size_t				ft_size(char const *s, char c);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*strjoin(char *s, char *str);
char				*ft_red(char **lines, char *point);
char				**ft_strsplit(char const *s, char c);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcpy(char *str1, const char *str2);
char				*ft_strstr(const char *str, const char *to_search);
char				*ft_strdup(const char *str);
char				*ft_strtrim(char const *s);
char				*ft_strnstr(const char *hay, const char *needle, size_t n);
char				*ft_strchr(const char *s1, int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strnew(size_t size);
char				*ft_itoa(int n);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strrchr(const char *s1, int n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char(*f)(char));
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_isalpha(int c);
int					ft_isdigit(int i);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_atoi(const char *str);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
void				ft_split(char **dst, char const *s, char c);
void				ft_strclr(char *s);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_strdel(char **as);
void				ft_putnbr(int n);
void				ft_memdel(void **ap);
void				ft_putnbr_fd(int n, int fd);
void				ft_striter(char *s, void(*f)(char *));
void				*ft_memalloc(size_t size);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(char *str);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				*ft_memcpy(void *dst, const void *src, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
#endif
