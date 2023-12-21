#include <stdio.h> #include <math.h>

int main() {
int projectHours, availableDays;

printf("Enter the number of hours needed for the project: "); scanf("%d", &projectHours);

printf("Enter the number of available days: "); scanf("%d", &availableDays);


int normalWorkingDays = availableDays - (int)(0.1 * availableDays); int normalWorkingHours = normalWorkingDays * 8;

int trainingDays = availableDays - normalWorkingDays; int trainingHours = trainingDays * 8;


int totalWorkingHours = normalWorkingHours + trainingHours; int hoursLeft = projectHours - totalWorkingHours;
if (hoursLeft <= 0) {
printf("The project can be finished on time.\n");
} else {
printf("The project cannot be finished on time. Hours needed: %d\n", hoursLeft);
}

return 0;
}
