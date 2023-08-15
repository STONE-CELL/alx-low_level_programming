#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - Entry point
 * @str: input
 * Return: Always success
 */
int _strlen(const char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}
/**
 * _strcopy - Entry point
 * @src: input
 * @dest : input
 * Return: success
 */
char *_strcopy(char *dest, char *src)
{
	int h;

	for (h = 0; src[h]; h++)
		dest[h] = src[h];

	return (dest);
}
/**
 * new_dog - Entry point
 * @name: input
 * @age: input
 * @owner: input
 * Return: pinter NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1);
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

