CC = cc
FLAGS = -Wall -Wextra -Werror

SRC = ft_case_c.c \
	  ft_case_di.c \
	  ft_case_p.c \
	  ft_case_s.c \
	  ft_case_u.c \
	  ft_case_xX.c \
	  ft_itoa.c \
	  ft_printf.c \
	  ft_strdup.c \
	  ft_strlen.c \
  
	  
OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all, clean, fclean, re