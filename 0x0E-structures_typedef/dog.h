#ifndef DOG
#define DOG
/**
  * struct dog - dog details
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
