#ifndef _dog_h
#define _dog_h

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @owner: owner's name
 * @age: dog's age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _dog_h */
