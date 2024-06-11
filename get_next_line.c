/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-30 11:57:46 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-30 11:57:46 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*Comentarios:
deve ser prototipada da seguinte maneira: int get_next_line(int fd, char **line);
Sua função deve estar livre de vazamentos de memória.
O que chamamos de “linha que foi lida” é uma sucessão de 0 a n caracteres que terminam com ‘\n’ (código ascii 0x0a) ou com Fim de Arquivo (EOF).
A string armazenada no parâmetro “line” não deve conter nenhum ‘\n’.
O parâmetro é o endereço de um ponteiro para um caractere que será usado para armazenar a linha lida.

prototipagem read(fd,bufer,byte);


fazr uma funcao para limpar o buffer quando for chamado denovo
concatenando
fazer funcao que adiciona o conteudo do ficheiro ao buffer e verificar sem tem \n
extrair linha e guardar
tenho que pegar um texto verficar se a linha tem \n se tiver eu vou guardar essa linha e printar,
caso ela seja menor que o buffer passado eu guardo o resto da linha e concateno com a linha seguinte.

*/
char	extract_line(char *str)
{
	size_t	i;

	if (!str)
	return (NULL);
	while(str[i] != '\0' || str[i] != '\n')
		i++;

}
int	get_next_line(int fd)
{
	static char	buffer;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
}