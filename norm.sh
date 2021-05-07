# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    norm.sh                                            :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-der <nvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/05/07 09:02:56 by nvan-der      #+#    #+#                  #
#    Updated: 2021/05/07 09:11:44 by nvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

echo "---INCLUDES---"> norm.txt
norminette includes/ >> norm.txt
echo >> norm.txt
echo "---SOURCES----">> norm.txt
norminette srcs/ >> norm.txt
echo >> norm.txt
echo "---LIBFT------">> norm.txt
norminette libft/ >> norm.txt
