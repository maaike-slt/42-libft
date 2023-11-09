# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msloot <msloot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 17:15:16 by msloot            #+#    #+#              #
#    Updated: 2023/11/09 21:48:03 by msloot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
CC = 	cc
AR =	ar rcs
RM = 	rm -rf

CFLAGS =	-Wall -Werror -Wextra
# CFLAGS +=	-g
# CFLAGS +=	-fsanitize=address
# CFLAGS +=	-Wsuggest-attribute=const

# **************************************************************************** #
#	MAKEFILE	#

MAKEFLAGS += --silent

SHELL := bash

B =		$(shell tput bold)
BLA =	$(shell tput setaf 0)
RED =	$(shell tput setaf 1)
GRE =	$(shell tput setaf 2)
YEL =	$(shell tput setaf 3)
BLU =	$(shell tput setaf 4)
MAG =	$(shell tput setaf 5)
CYA =	$(shell tput setaf 6)
WHI =	$(shell tput setaf 7)
D =		$(shell tput sgr0)

# **************************************************************************** #
#	SOURCE		#

SRC_PATH =			./src/
BONUS_SRC_PATH =	./src/
OBJ_PATH =			./obj/
INC =				./inc/

SRC_NAME = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_bzero.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
	ft_toupper.c ft_tolower.c \
	ft_memset.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_memmove.c \
	ft_atoi.c ft_itoa.c \
	ft_strdup.c ft_calloc.c \
	ft_strjoin.c ft_substr.c ft_strtrim.c ft_split.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_striteri.c ft_strmapi.c \

BONUS_SRC_NAME = \
	ft_lstsize.c ft_lstlast.c ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstiter.c \
	ft_lstdelone.c ft_lstclear.c ft_lstmap.c \

SRC =				$(addprefix $(SRC_PATH), $(SRC_NAME))
# SRC =				$(wildcard $(SRC_PATH)*.c) $(wildcard $(SRC_PATH)**/*.c)
#SRC_NAME =			$(subst $(SRC_PATH), , $(SRC))

BONUS_SRC =			$(addprefix $(BONUS_SRC_PATH), $(BONUS_SRC_NAME))

OBJ_NAME =			$(SRC_NAME:.c=.o)
OBJ =				$(addprefix $(OBJ_PATH), $(OBJ_NAME))

BONUS_OBJ_NAME =	$(BONUS_SRC_NAME:.c=.o)
BONUS_OBJ =			$(addprefix $(OBJ_PATH), $(BONUS_OBJ_NAME))

# *************************************************************************** #

define	progress_bar
	@i=0
	@while [[ $$i -le $$(( $(words $(SRC)) + $(words $(BONUS_SRC)) )) ]] ; do \
		printf " " ; \
		((i = i + 1)) ; \
	done
	@printf "$(B)]\r[$(D)"
endef

# *************************************************************************** #
#	RULES		#

all:		launch $(NAME)
	@printf "\n$(B)$(MAG)$(NAME) compiled$(D)\n"

launch:
	$(call progress_bar)

$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus:		launch $(OBJ) $(BONUS_OBJ)
	$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)
	@printf "\n$(B)$(MAG)$(NAME) compiled with bonus$(D)\n"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -DNO_BONUS=1 -I$(INC) -c $< -o $@
	@printf "$(B)$(GRE)█$(D)"

$(OBJ_PATH)%.o: $(BONUS_SRC_PATH)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@
	@printf "$(B)$(GRE)█$(D)"

clean:
	@$(RM) $(OBJ_PATH)

fclean:		clean
	@$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re bonus launch

# **************************************************************************** #
