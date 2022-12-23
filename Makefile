# # -*- Makefile -*-
# NAME = ft_printf
NAME= libftprintf.a
CC= cc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_printf ft_char_format ft_string_format\
ft_pointer_format ft_decimal_format ft_printf_utils main

all: $(NAME)

# $(NAME): $(FILES:=.o)
# 	ar -rc $(NAME) $(FILES:=.o)
$(NAME) : $(FILES:=.o)
	$(CC) -g $(CFLAGS) $(FILES:=.o)
clean:
	rm -f $(FILES:=.o)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
