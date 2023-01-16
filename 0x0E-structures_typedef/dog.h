/*
 * struct dog - dog fields
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 */


struct dog
{
	char *name;
	float age;
	char *owner;
}

/*
 * dog_t - typedef for the dog struct
 */

typedef struct dog dog_t;
