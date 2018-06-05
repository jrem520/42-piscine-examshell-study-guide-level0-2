# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strlen.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalgier <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/05 12:59:28 by jalgier           #+#    #+#              #
#    Updated: 2018/06/05 12:59:42 by jalgier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
# zsh strlen.sh
string=(echo $FT_LINE)

if [ "$string" ]; then
	echo -n $FT_LINE | wc -m 
fi