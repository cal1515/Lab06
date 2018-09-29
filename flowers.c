//Function definition that calculates total cost

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
