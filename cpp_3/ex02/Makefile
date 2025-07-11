NAME			= FragTrap

CC				= c++
FLAGS			= -std=c++98 -Wall -Werror -Wextra

SRCS			=	FragTrap.cpp \
					main.cpp


OBJS			= $(SRCS:.cpp=.o)

# Loading bar
G                = \e[92m
X                 = \e[0m
BAR_SIZE        = 50

TAL_ddSRCS        := $(words $(SRCS))
MPILED_ddSRCS    := 0

# Colors
RED				=	$(shell tput -Txterm setaf 1)
GREEN			=	$(shell tput -Txterm setaf 2)
RESET_COLOR		=	$(shell tput -Txterm sgr0)

all : $(NAME)

$(NAME) : $(OBJS)
		@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
		@echo "\n$(GREEN)FragTrap Compiled! ✅$(RESET_COLOR)\n"

%.o: %.cpp
		@$(CC) $(FLAGS) -c $< -o $@
		@$(eval MPILED_ddSRCS := $(shell echo $$(($(MPILED_ddSRCS)+1))))
		@echo -n " "
		@for i in `seq 1 $(shell echo "$$(($(MPILED_ddSRCS)*$(BAR_SIZE)/$(TAL_ddSRCS)))")`; do \
			echo -n "$(G)▰$(X)" ; \
		done
		@for i in `seq 1 $(shell echo "$$(($(BAR_SIZE)-$(MPILED_ddSRCS)*$(BAR_SIZE)/$(TAL_ddSRCS)))")`; do \
			echo -n "▱" ; \
		done
		@echo -n " [$(shell echo "scale=2; $(MPILED_ddSRCS)/$(TAL_ddSRCS) * 100" | bc)%] "
		@printf "\e[0K\r"

clean :
		@rm -f $(OBJS)

fclean : clean
		@rm -f $(NAME)
		@echo "$(RED)FragTrap cleaned ! ✅$(RESET_COLOR)\n"

re:	fclean all

.PHONY: all clean fclean re