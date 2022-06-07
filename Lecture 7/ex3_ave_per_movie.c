#include <stdio.h>

#define N_MOVIES 4
#define N_REVIEWERS ((int)(sizeof(ratings) / sizeof(ratings[0])))

int main(){

	double sum_per_reviewer, ave_per_reviewer;
	double ratings[][N_MOVIES] = {
		{4, 6, 2, 5},
		{7, 9, 4, 9},
		{6, 9, 3, 7}
	};

	printf("N reviewers: %d\n", N_REVIEWERS);

	double sum_per_movie, ave_per_movie;

	for (int movie = 0; movie < N_MOVIES ; movie++){
		sum_per_movie = 0;
		for (int reviewer = 0 ; reviewer < N_REVIEWERS ; reviewer++){
			sum_per_movie += ratings[reviewer][movie];
		}
		ave_per_movie = sum_per_movie/N_REVIEWERS;

		printf("Average of Movie%d : %.1f\n", movie+1, ave_per_movie);
	}

	return 0;
}


	/* Computing for the average of each movie */


	// int N_REVIEWERS = sizeof(ratings)/sizeof(ratings[0]);
	//printf("%d\n", N_REVIEWERS);

	// int N_MOVIES = sizeof(ratings[reviewer])/sizeof(ratings[reviewer][0]);

		
