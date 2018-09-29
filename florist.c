#include<stdlib.h>
#include<stdio.h>

/* 1. Insert the required items in the other 2 enumerated types*/
typedef enum { RED = 1, WHITE } Color;
typedef enum { ROSES = 1, LILIES, DAISIES } Flower;
typedef enum { BOUQUET = 1, VASE } Arrangement;
typedef enum { NO_ERROR = 0, UNAVALIBLE_SELECTION_ERROR, INVALID_ARGUMENT_ERROR, NULL_POINTER_ERROR } Error;

/*Function prototype */
Error getCost(double *cost, Flower flower, Color color, Arrangement arr);

int main (int argc, char **argv) {

    //You can declare variables that hold your enums just like regular variables
Flower flower;
Color color;
Arrangement arr;
Error error;
	/* 3. Declare the other required variable(s)*/

	//DO NOT CHANGE THIS BLOCK OF printf AND scanf STATEMENTS
	printf("\nTypes of flowers\n");
	printf("1. Roses\n");
	printf("2. Lilies\n");
	printf("3. Daisies\n");
	printf("Please enter the item number for your choice: ");
	scanf("%d", &flower);

	printf("\nColor choices\n");
	printf("1. Red\n");
	printf("2. White\n");
	printf("Please enter the item number for your choice: ");
	scanf("%d", &color);

	printf("\nArrangements\n");
	printf("1. Bouquet\n");
	printf("2. Vase\n");
	printf("Please enter the item number for your choice: ");
	scanf("%d", &arr);

	double cost = 0;
	/*4  complete the  function call  and print the cost*/
	error = getCost(&cost, flower, color, arr);
	if(error == UNAVALIBLE_SELECTION_ERROR) {
		printf("Error: Please enter a valid selection, not including Red Daisies.\n") ;
		exit(1);
}	else if(error == INVALID_ARGUMENT_ERROR) {
		printf("Error: Please enter valid numeric inputs from list on screen.\n") ;
		exit(1);
}	else if(error == NULL_POINTER_ERROR)	{
		printf("Wow, that didn't go well at all.\n");
		exit(1);
}	else {
		printf("Cost: %.2f\n", cost) ;
}

	return 0;
}

Error getCost(double *cost, Flower flower, Color color, Arrangement arr) {
	if(flower == DAISIES && color == RED) {
		return UNAVALIBLE_SELECTION_ERROR;
}	else if(flower > 3 || color > 2 || arr > 2) {
		return INVALID_ARGUMENT_ERROR;
}	else if(cost == NULL) {
		return NULL_POINTER_ERROR ;
}	else {

	if(flower == ROSES) {
		*cost = 30 ;
} else if(flower == LILIES) {
		*cost = 20 ;
} else if(flower == DAISIES) {
		*cost = 45 ;
}

	if(flower == ROSES && color == WHITE)	{
		*cost = *cost + 10 ;
}	else if(flower == LILIES && color == RED)	{
		*cost = *cost + 5 ;
}	else if(flower == DAISIES && color == RED)	{
		*cost = *cost + 5 ;
}	else {
		*cost = *cost + 0 ;
}

	if(arr == VASE)	{
		*cost = *cost + 10 ;
}	else {
		*cost = *cost + 0 ;
}
}
	return 0 ;
}
