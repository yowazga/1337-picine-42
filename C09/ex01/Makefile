# defin serc and header dirctories
SRCS_DIR = srcs
INCS_DIR = includes

#list of src files
SRCS = ft_putchar.c ft_swap.c ft_strlen.c ft_strcmp.c ft_putstr.c

# define the compiler and compiler flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# create list of object fils by replicing .c with .o in the srs file names
OBJS = $(patsubst %.c, %.o, $(SRCS))

# define the name of library
NAME 	= libft.a

# set the path to object files
OBJS_PATH = $(addprefix $(SRCS_DIR)/, $(OBJS))

#Make all rul
all: $(NAME) 

#rule to build the library
$(NAME): $(OBJS_PATH)
	@ar rc $(NAME) $(OBJS_PATH) 
	@echo "[$(NAME)] library has been created"

# rule to compail src files into object files
$(SRCS_DIR)/%.o : $(SRCS_DIR)/%.c
	@$(CC) $(CFLAGS) -I $(INCS_DIR) -c $< -o $@
	@echo "[$<] object file created"

#rule frmove object file
clean:
	@rm -f $(OBJS_PATH)
	@echo "object file remove"

fclean: clean
	@rm -f $(NAME) 
	@echo "[$(NAME)] library remove"

re: fclean all

#.Default rul is := all
	
	
