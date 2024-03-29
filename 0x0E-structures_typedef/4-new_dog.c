#include <stdio.h>
#include "dog.h"

/**
 * _strlen - a function that gets the length of a string
 *
 * @s: the string to get the length
 *
 * Return: length of @s
 */

int _strlen(char *s)
{
	int i;
	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - a function that returns @dest with a copy of a string from @src
 *
 * @src: string to copy
 * @dest: copy string here
 *
 * Return: @dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 *
 * @name: dog name
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: struct pointer dog
 * NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if name and owner are empty and age is less than zero return null*/
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
