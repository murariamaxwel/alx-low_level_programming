#include "lists.h"

/**
 * get_nodeint_at_index - return nth node
 * @hd: point to hd ptr
 * @index: nth node
 * Return: nth node (or NULL)
 */

listint_t *get_nodeint_at_index(listint_t *hd, unsigned int index)
{

        unsigned int i = 0;

        if (hd == NULL)
                return (NULL);

        while ((i < index) && hd != NULL) /* go through lst till end */
        {
                hd = hd->next;
                i++;
        }

        if (i == index) /* ensure index is withing limit */
                return (hd);

        return (NULL);
}
