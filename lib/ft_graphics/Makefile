NAME = libftgraphics.a
SRCSFOLDER = ./srcs/
SRCS = createfvector.c createfvector2d.c createivector.c createivector2d.c createdvector.c createdvector2d.c createirect.c \
		setfvector.c setfvector2d.c setivector.c setivector2d.c setdvector.c setdvector2d.c setirect.c \
		addfvector.c addfvector2d.c addivector.c addivector2d.c adddvector.c adddvector2d.c \
		subfvector.c subfvector2d.c subivector.c subivector2d.c subdvector.c subdvector2d.c \
		multfvector.c multfvector2d.c multivector.c multivector2d.c multdvector.c multdvector2d.c \
		divfvector.c divfvector2d.c divivector.c divivector2d.c divdvector.c divdvector2d.c \
		magfvector.c magfvector2d.c magivector.c magivector2d.c magdvector.c magdvector2d.c \
		normfvector.c normfvector2d.c normivector.c normivector2d.c normdvector.c normdvector2d.c \
		dotproduct.c dotproduct2.c crossproduct.c mat.c mat2.c mat3.c \
		creatergb.c createhsl.c \
		setrgb.c sethsl.c setrgba.c \
		colorconvert.c opacityrgba.c \
		addrgb.c subrgb.c multrgb.c divrgb.c \
		lerp.c lerpcolor.c \
		rotate.c degrtorad.c
OBJNAME = $(SRCS:.c=.o)
OBJDIR = ./obj/
OBJ = $(addprefix $(OBJDIR),$(OBJNAME))
INCLUDES = ./includes/
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJDIR)%.o:$(SRCSFOLDER)%.c
	@mkdir -p $(OBJDIR)
	gcc $(FLAG) -I $(INCLUDES) -o $@ -c $<

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
