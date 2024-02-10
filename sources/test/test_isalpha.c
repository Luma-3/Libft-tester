/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_is_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrousse <jbrousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:15:30 by jbrousse          #+#    #+#             */
/*   Updated: 2024/02/10 18:34:41 by jbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void test_1(void)
{
	int count = 1;
	
	for (int i = 0; i < 255; i++)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("%d [KO], ", count);
		}
		else
		{
			printf("%d [OK], ", count);
		}
		count++;
	}
}

int main(void)
{
	test_1();
	return (0);
}