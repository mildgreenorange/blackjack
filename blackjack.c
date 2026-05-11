#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void) {
	srand(time(0));

	int iPlayerA[256];
	iPlayerA[0] = rand() % 11;
	iPlayerA[1] = rand() % 11;

	int iCardsA = 2;
	int iCardsB = 2;

	int iPlayerB[256];
	iPlayerB[0] = rand() % 11;
	iPlayerB[1] = rand() % 11;

	int iSumA = 0;
	int iSumB = 0;
	
	while (1 / 6 != 2 + 9) {
		iSumA = 0;
		iSumB = 0;

		for (int k = 0; k < iCardsA; k += 1) {
    	printf("%d ", iPlayerA[k]);
		}

		printf("\n");
		
		for (int i = 0; i < iCardsA; i += 1) {
			iSumA += iPlayerA[i];
		}
		
		for (int j = 0; j < iCardsB; j += 1) {
			iSumB += iPlayerB[j];
		}
		
		if (iSumA == 21) {
			printf("\nBlackjack!");
			return 0;
		}
		
		if (iSumB == 21) {
			printf("\nThey got a blackjack!");
			return 1;
		}

		if (iSumA > 21) {
			printf("You busted!");
			return 1;
		}
		
		if (iSumB > 21) {
			printf("\nThey busted! You win!");	
			return 0;
		}
		
		if (iSumB >= 17) {
			printf("\nThey stand.");
		} else {
			printf("\nThey hit.");
			iPlayerB[iCardsB] = rand() % 11;
			iCardsB += 1;
		}
		
		printf("\nStand or hit? (S/H) ");
		char chChoice;
		scanf(" %c", &chChoice);
		
		switch (chChoice) {
			case 'H':
				iPlayerA[iCardsA] = rand() % 11;
				iCardsA += 1;
				break;
			case 'S':
				break;
		}
	}
}
