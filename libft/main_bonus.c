/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:26:17 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/19 12:33:49 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Colors ANSI
#define VERD "\033[0;32m"
#define VERMELL "\033[0;31m"
#define RESET "\033[0m"

void test_lstnew() {
    printf("Test ft_lstnew: ");
    char *contingut = "Hola món";
    t_list *node = ft_lstnew(contingut);

    if (node != NULL && node->content == contingut && node->next == NULL) {
        printf(VERD "OK\n" RESET);
    } else {
        printf(VERMELL "KO\n" RESET);
    }
    free(node);
}

void test_lstadd_front() {
    printf("Test ft_lstadd_front: ");
    t_list *llista = ft_lstnew("Segon");
    t_list *nou = ft_lstnew("Primer");

    ft_lstadd_front(&llista, nou);

    if (llista == nou && llista->next != NULL && strcmp(llista->next->content, "Segon") == 0) {
        printf(VERD "OK\n" RESET);
    } else {
        printf(VERMELL "KO\n" RESET);
    }
}

int main() {
    printf("--- INICIANT TESTS DE LLISTES ---\n");
    test_lstnew();
	test_lstadd_front();
    return (0);
}
