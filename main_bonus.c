#include <stdio.h>
#include <string.h>
#include "libft.h"

void swap_case(void *src)
{
	char *tmp = src;
	while(*tmp)
	{
		if (*tmp > 64 && *tmp < 91)
			*tmp = ft_tolower(*tmp);
		else if (*tmp > 96 && *tmp < 123)
			*tmp = ft_toupper(*tmp);
		tmp++;
	}
}

void *swap_case1(void *src)
{
	char *tmp = ft_strjoin("new_", src);
	// int i = 0;
	// while(tmp[i])
	// {
	// 	if (tmp[i] > 64 && tmp[i] < 91)
	// 		tmp[i] = ft_tolower(tmp[i]);
	// 	else if (tmp[i] > 96 && tmp[i] < 123)
	// 		tmp[i] = ft_toupper(tmp[i]);
	// 	i++;
	// }
	return (tmp);
}

void del(void *content)
{
	free(content);
}

void free_list(t_list *list)
{
	int i = 1;
	t_list *curr = list;
	printf("performing free\n");
	while (curr->next != NULL)
	{
		printf("free %s\n", (char *)curr->content);
		free(curr->content);
		curr = curr->next;
	}
	printf("free %s\n", (char *)curr->content);
	free(curr->content);
	while (list->next != NULL)
	{
		curr = list;
		list = list->next;
		free(curr);
		printf("free link nr %d\n", i++);
	}
	free(list);
	printf("free link nr %d\n", i);
}

void print_list(t_list *list)
{
	if (list == NULL)
		printf("list is NULL \n");
	else
	{
		int ll = ft_lstsize(list);
		while (list->next != NULL)
		{
			printf("\e[35m%s-\e[39m", (char *)list->content);
			list = list->next;
		}
		printf("\e[35m%s\e[94m", (char *)list->content);
		printf(" | length of the list is: %d \e[39m\n", ll);
	}
}

int main()
{
	int mode;
	char input[100];
	printf("\e[33m type content of first link.\e[39m\n");
	scanf("%s", input);
	t_list *lst = ft_lstnew(ft_strdup(input));
	print_list(lst);
	mode = 1;
	t_list *new_one = NULL;
	while (mode != 0)
	{
		if (mode == 1)
		{
			printf("\e[33madd some links \e[32min front \e[33mor type 'next'\e[39m\n");
			scanf("%s", input);
			if (strcmp("next", input) == 0)
				mode++;
			else
			{
				ft_lstadd_front(&lst, ft_lstnew(strdup(input)));
				print_list(lst);
			}
		}
		if (mode == 2)
		{
			printf("\e[33madd some links \e[32mat the end \e[33mor type 'next'\e[39m\n");
			scanf("%s", input);
			if (strcmp("next", input) == 0)
				mode = 3;
			else
			{
				ft_lstadd_back(&lst, ft_lstnew(strdup(input)));
				print_list(lst);
			}
		}
		if (mode == 3)
		{
			printf("\e[33mtype 'del' to remove first link or type 'next'\e[39m\n");
			scanf("%s", input);
			if (strcmp("next", input) == 0)
				mode = 4;
			else
			{
				t_list *curr = lst;
				lst = lst->next;
				ft_lstdelone(curr, &del);
				print_list(lst);
			}
		}
		if (mode == 4)
		{
			printf("\e[33mtype type swap to change case or type 'next'\e[39m\n");
			scanf("%s", input);
			if (strcmp("next", input) == 0)
				mode = 5;
			else
			{
				ft_lstiter(lst, &swap_case);
				print_list(lst);
			}
		}
		if (mode == 5)
		{
			printf("\e[33mtype type m&c to create new list modifying old one or type 'next'\e[39m\n");
			scanf("%s", input);
			if (strcmp("next", input) == 0)
			{
				mode = 6;
				if (new_one != NULL)
					ft_lstclear(&new_one, &del);
			}
			else
			{
				new_one = ft_lstmap(lst, &swap_case1, &del);
				printf("old one is: ");
				print_list(lst);
				printf("and the new one is: ");
				print_list(new_one);
			}
		}
		if (mode == 6)
		{
			printf("\e[33mtype 'clear' to remove and free all links or type 'next'\e[39m\n");
			scanf("%s", input);
			if (strcmp("next", input) == 0)
				mode = 0;
			else
			{
				ft_lstclear(&lst, &del);
			}
		}
	}
}
