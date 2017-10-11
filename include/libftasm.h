#ifndef LIBFTASM_H
# define LIBFTASM_H
# include <unistd.h>

int			ft_isalpha(int c);
int			ft_puts(char const *str);
size_t		ft_strlen(char const *s);
void		ft_bzero(char const *s, size_t n);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*ft_strcat(char *restrict s1, char *restrict s2);
void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_strdup(const char *s);

/* BONUS */

char		*ft_strchr(const char *s, int c);
int			ft_atoi(const char *s);
long int	ft_atol(const char *s);
int			ft_putstr(const char *s);
int			ft_putstr_fd(const char *s, int fd);
int			ft_putchar(int c);
int			ft_putchar_fd(int c, int fd);
int			ft_strcmp(const char *s1, const char *s2);

#endif
