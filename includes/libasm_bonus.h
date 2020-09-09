#ifndef LIBASM_BONUS_H
#define LIBASM_BONUS_H

#include "libasm.h"

typedef struct	s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;

int	ft_atoi_base(char *str, char *base);

#endif