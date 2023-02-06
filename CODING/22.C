/*
GUESS THE BOTTOM FACE difficulty rating:815
It is known that in regular dice, the sum of opposite faces is 7.
A regular dice is rolled and you are given the value X showing on the top face. Determine the value on the bottom face.
*/

#include <stdio.h>

int main(void) {
    int t,a;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        scanf("%d",&a);
        printf("%d\n",7-a);
    }
	return 0;
}

