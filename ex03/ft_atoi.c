/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:24:35 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/12 14:49:49 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str, int *ptr)
{
	int	say;
	int	i;

	i = 0;
	say = 1;
	while (str == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		{
			say *= -1;
		}
		i++;
	}
	*ptr = i;
	return (say);
}

int	ft_atoi(char *str)
{
	int	eksiarti;
	int	result;
	int	i;

	result = 0;
	eksiarti = check(str, &i);
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result = str[i] - 48;
		i++;
	}
	result *= eksiarti;
	return (result);
}
