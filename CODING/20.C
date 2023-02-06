/*
CARS AND BIKES difficulty rating:809

Chef opened a company which manufactures cars and bikes. Each car requires 4 tyres while each bike requires 2 tyres. Chef has a total of N tyres (N is even). He wants to manufacture maximum number of cars from these tyres and then manufacture bikes from the remaining tyres.
Chef's friend went to Chef to purchase a bike. If Chef's company has manufactured even a single bike then Chef's friend will be able to purchase it.
Determine whether he will be able to purchase the bike or not.
*/
#include <stdio.h>

int main(void) {
    int t,a;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        scanf("%d",&a);
        if(a%4==0)
        printf("no\n");
        else
        printf("yes\n");
        
    }
	return 0;
}

