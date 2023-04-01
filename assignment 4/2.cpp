#include <stdio.h>

// Define a structure for a cricket player
struct Player {
    char name[50];
    int runs_scored;
};

int main() {
    // Declare an array of Player structures to store batting information
    struct Player team[11];

    // Accept the batting information from the user
    printf("Enter batting information for the cricket team:\n");
    for (int i = 0; i < 11; i++) {
        printf("Enter player %d name: ", i+1);
        scanf("%s", team[i].name);

        printf("Enter runs scored by player %d: ", i+1);
        scanf("%d", &team[i].runs_scored);
    }

    // Calculate the total runs scored by the team
    int total_runs = 0;
    for (int i = 0; i < 11; i++) {
        total_runs += team[i].runs_scored;
    }

    // Display the total runs scored by the team
    printf("\nTotal runs scored by the cricket team: %d\n", total_runs);

    return 0;
}

