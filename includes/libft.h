#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

/* resused */
int		ft_strlen(const char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char	*ft_strdup(char *src);
/* upgraded */
int		ft_atoi(char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
/* new */
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_calloc(unsigned int nmemb, unsigned int size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char * s1, const char * s2, unsigned int  len);
char	*ft_strrchr(const char *str, int c);

#endif