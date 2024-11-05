# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 10:12:37 by jihpark           #+#    #+#              #
#    Updated: 2024/09/24 10:12:41 by jihpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Wextra -Werror -c {} \;
ar rc libft.a *.o
find . -name "*.o" -type f -delete
