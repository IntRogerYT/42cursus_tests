/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:26:17 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/22 14:58:10 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../libft/libft.h"

// Colors ANSI
#define VERD "\033[0;32m"
#define VERMELL "\033[0;31m"
#define RESET "\033[0m"

void tests_lstnew() {
    printf("\n=== Test ft_lstnew ===\n");
	printf("\nTest1-content: ");
    char *contingut = "Hola món";
    t_list *node1 = ft_lstnew(contingut);

    if (node1 != NULL && node1->content == contingut && node1->next == NULL) {
        printf(VERD "OK\n" RESET);
    } else {
        printf(VERMELL "KO\n" RESET);
    }
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

void test_lstsize() {
    printf("Test ft_lstsize: ");
    t_list *l = ft_lstnew("1");
    ft_lstadd_front(&l, ft_lstnew("2"));
    ft_lstadd_front(&l, ft_lstnew("3"));

    if (ft_lstsize(l) == 3)
        printf(VERD "OK\n" RESET);
    else
        printf(VERMELL "KO (esperava 3, retornat %d)\n" RESET, ft_lstsize(l));
}

void test_lstlast() {
    printf("Test ft_lstlast: ");
    t_list *l = ft_lstnew("Primer");
    t_list *ultim = ft_lstnew("Ultim");
    ft_lstadd_back(&l, ultim);

    if (ft_lstlast(l) == ultim)
        printf(VERD "OK\n" RESET);
    else
        printf(VERMELL "KO\n" RESET);
}

void test_lstadd_back() {
    printf("Test ft_lstadd_back: ");
    t_list *l = ft_lstnew("A");
    t_list *nou = ft_lstnew("B");
    ft_lstadd_back(&l, nou);

    t_list *aux = ft_lstlast(l);
    if (aux == nou && l->next == nou)
        printf(VERD "OK\n" RESET);
    else
        printf(VERMELL "KO\n" RESET);
}

void test_lstdelone() {
    printf("Test ft_lstdelone: ");
    t_list *node = ft_lstnew(strdup("Adeu")); // Usem strdup per poder fer free real

    // Aquí el test és difícil de validar sense eines com Valgrind,
    // però comprovem que la funció no petm.
    ft_lstdelone(node, free);
    printf(VERD "OK (Executat sense petar)\n" RESET);
}

void test_lstclear() {
    printf("Test ft_lstclear: ");
    t_list *l = ft_lstnew(strdup("1"));
    ft_lstadd_back(&l, ft_lstnew(strdup("2")));

    ft_lstclear(&l, free);
    if (l == NULL)
        printf(VERD "OK (Llista posada a NULL)\n" RESET);
    else
        printf(VERMELL "KO (El punter no és NULL)\n" RESET);
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
    	printf("=== INICIANT TESTS DE LLISTES ===\n\n");
    	tests_lstnew();
		test_lstadd_front();
		test_lstsize();
	}
	else if (argc == 2)
	{
		if (strcmp(argv[1], "ft_lstnew") == 0)
			tests_lstnew();
	}
	else
	{
		printf("!ERROR: Only 0 or 1 arguments needed!");
		return (-1);
	}
	return (0);
}
