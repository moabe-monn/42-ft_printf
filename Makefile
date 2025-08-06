CC = cc
FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS = ft_case_c.c \
	  ft_case_di.c \
	  ft_case_p.c \
	  ft_case_s.c \
	  ft_case_u.c \
	  ft_case_xX.c \
	  ft_printf.c 	  
	  
OBJS = ${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all, clean, fclean, re