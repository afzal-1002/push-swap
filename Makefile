NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = \
	push_swap.c \
	srcs/array/array_utils.c \
	srcs/array/bubble_sort.c \
	srcs/array/quick_sort.c \
	srcs/libft/ft_atoi.c \
	srcs/libft/ft_is_char.c \
	srcs/libft/ft_is_space.c \
	srcs/libft/ft_split.c \
	srcs/libft/ft_fill_words.c \
	srcs/list/list_create.c \
	srcs/list/list_free.c \
	srcs/list/list_append.c\
	srcs/list/list_index.c \
	srcs/list/list_last.c \
	srcs/list/list_utils.c \
	srcs/operations/push.c \
	srcs/operations/reverse.c \
	srcs/operations/rotate.c \
	srcs/operations/swap.c \
	srcs/sorting/radix_sort.c \
	srcs/sorting/sort_five.c \
	srcs/sorting/sort_three.c \
	srcs/utils/error.c \
	srcs/utils/max_bits.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
