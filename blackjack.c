#include <stdio.h>
#include <math.h>
#include <time.h>

int main(void) {
	srand(time(0));
	
	int iPlayerA[] = [int(rand() * 11), int(rand() * 11)];
	int iPlayerB[] = [int(rand() * 11), int(rand() * 11)];
	
	while (iSumA <= 21) {
		int iSumA = 0;
		int iSumB = 0;
		
		for (int i = 0; iPlayerA[i] != NULL; i += 1) {
			iSumA += iPlayerA[i];
		}
		
		for (int j = 0; iPlayerB[j] != NULL; j += 1) {
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
		
		if (iSumB > 21) {
			printf("\nThey busted! You win!");	
			return 0;
		}
		
		if (iSumB >= 17) {
			printf("\nThey stand.");
		} else {
			printf("\nThey hit.");
			iPlayerB[j + 1] = int(rand() * 11);
		}
		
		printf("\nStand or hit? (S/H) ");
		char chChoice = scanf("%c", chChoice);
		
		switch (chChoice) {
			case H:
				iPlayerA[i + 1] = int(rand() * 11);
			case S:
				;
		}
		
		printf("You busted!");
		return 1;
}
