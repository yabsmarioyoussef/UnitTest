#include <stdio.h>
#include <stdlib.h>
#define MODULE_WOLF
#include "C:\WolfGitRepo\WolfProject\src\wolf.c"

void nameTest() {

	WolfT *wolf = malloc(sizeof(*wolf));

	init(wolf, "Mario", 23);

	if(strcmp(wolf->animal->name, "Mario")==0)
		printf("%s\n", "PASSED TEST NAME");
	else
		printf("%s\n", "FAILED TEST NAME");

	free(wolf);
}

void energyTest() {

	WolfT *wolf = malloc(sizeof(*wolf));
	init(wolf, "Mario", 23);

	if(wolf->animal->energy == 352)
		printf("%s\n", "PASSED TEST ENERGY");
	else
		printf("%s\n", "FAILED TEST ENERGY");

	free(wolf);
}

void ageTest() {
	WolfT *wolf = malloc(sizeof(*wolf));
		init(wolf, "Mario", 23);

		if(wolf->animal->age == 23)
			printf("%s\n", "PASSED TEST AGE");
		else
			printf("%s\n", "FAILED TEST AGE");

		free(wolf);
}

void eatTest() {
	WolfT *wolf = malloc(sizeof(*wolf));
	init(wolf, "Mario", 23);

	wolf_eat(wolf);

	if(wolf->animal->energy == 357)
		printf("%s\n", "PASSED TEST EAT");
	else
		printf("%s\n", "FAILED TEST EAT");

	free(wolf);
}

void sleepTest() {
	WolfT *wolf = malloc(sizeof(*wolf));
	init(wolf, "Mario", 23);

	wolf_sleep(wolf);

	if(wolf->animal->energy == 367)
		printf("%s\n", "PASSED TEST SLEEP");
	else
		printf("%s\n", "FAILED TEST SLEEP");

	free(wolf);
}

void huntTest() {
	WolfT *wolf = malloc(sizeof(*wolf));
	init(wolf, "Mario", 23);

	wolf_hunt(wolf);

	if(wolf->animal->energy == 327 || wolf->animal->energy == 342)
		printf("%s\n", "PASSED TEST HUNT");
	else
		printf("%s\n", "FAILED TEST HUNT");

	free(wolf);
}

void poopTest() {
	WolfT *wolf = malloc(sizeof(*wolf));
	init(wolf, "Mario", 23);

	wolf_poop(wolf);

	if(wolf->animal->energy == 342)
		printf("%s\n", "PASSED TEST POOP");
	else
		printf("%s\n", "FAILED TEST POOP");

	free(wolf);
}

void ttlTest() {
	WolfT *wolf = malloc(sizeof(*wolf));
	init(wolf, "Mario", 23);

	if(getTTL(wolf->animal->age, wolf->animal->energy)==30)
		printf("%s\n", "PASSED TEST TIMETOLIVE");
	else
		printf("%s\n", "FAILED TEST TIMETOLIVE");

	free(wolf);
}
