# # -*- Makefile -*-
NAME= libftprintf.a
CC= cc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_printf ft_char_format ft_string_format\
ft_pointer_format ft_decimal_format ft_printf_utils\
ft_unsigned_format ft_hexadecimal_format

all: $(NAME)

$(NAME): $(FILES:=.o)
	ar -rc $(NAME) $(FILES:=.o)

clean:
	rm -f $(FILES:=.o)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
