#include <iostream>
using namespace std;
using namespace std;

void karta(string karta) {
	cout << " ___ " << endl;
	cout << "|   |" << endl;
	cout << "| " << karta << " |" << endl;
	cout << "|___|" << endl;
}



int main() {
	int dalsiahra = 1;


	do {
		system("cls");
		int pole[8];
		int polex[8];
		pole[0] = 0;
		pole[1] = 0;
		pole[2] = 0;
		pole[3] = 0;
		pole[4] = 0;
		pole[5] = 0;
		pole[6] = 0;
		pole[7] = 0;
		polex[0] = 0;
		polex[1] = 0;
		polex[2] = 0;
		polex[3] = 0;
		polex[4] = 0;
		polex[5] = 0;
		polex[6] = 0;
		polex[7] = 0;

		int i = 2;
		int j;
		int body;
		int bodyai;
		char choose;
		int chooseai;


		cout << "_________________________________" << endl;
		cout << "                                 " << endl;
		cout << "            BLACKJACK            " << endl;
		cout << "_________________________________" << endl;
		cout << "                                 " << endl;
		cout << "   Pre dalsiu kartu zmacknite  + " << endl;
		cout << "  Ak vam stacia karty zmacknite -" << endl;
		cout << "_________________________________" << endl;


		cout << "            Vase karty           " << endl;





		srand(time(0));
		pole[0] = rand() % 12 + 1;
		switch (pole[0])
		{
		case 1:
			karta("A");
			break;
		case 2:
			karta("2");
			break;
		case 3:
			karta("3");
			break;
		case 4:
			karta("4");
			break;
		case 5:
			karta("5");
			break;
		case 6:
			karta("6");
			break;
		case 7:
			karta("7");
			break;
		case 8:
			karta("8");
			break;
		case 9:
			karta("9");
			break;
		case 10:
			karta("10");
			break;
		case 11:
			karta("J");
			pole[0] = 10;
			break;
		case 12:
			karta("Q");
			pole[0] = 10;
			break;
		case 13:
			karta("K");
			pole[0] = 10;
			break;
		}
		pole[1] = rand() % 12 + 1;
		switch (pole[1])
		{
		case 1:
			karta("A");
			break;
		case 2:
			karta("2");
			break;
		case 3:
			karta("3");
			break;
		case 4:
			karta("4");
			break;
		case 5:
			karta("5");
			break;
		case 6:
			karta("6");
			break;
		case 7:
			karta("7");
			break;
		case 8:
			karta("8");
			break;
		case 9:
			karta("9");
			break;
		case 10:
			karta("10");
			break;
		case 11:
			karta("J");
			pole[1] = 10;
			break;
		case 12:
			karta("Q");
			pole[1] = 10;
			break;
		case 13:
			karta("K");
			pole[1] = 10;
			break;

		}
		cin >> choose;
		if (choose == '+') {

			do {
				pole[i] = rand() % 12 + 1;
				switch (pole[i])
				{
				case 1:
					karta("A");
					break;
				case 2:
					karta("2");
					break;
				case 3:
					karta("3");
					break;
				case 4:
					karta("4");
					break;
				case 5:
					karta("5");
					break;
				case 6:
					karta("6");
					break;
				case 7:
					karta("7");
					break;
				case 8:
					karta("8");
					break;
				case 9:
					karta("9");
					break;
				case 10:
					karta("10");
					break;
				case 11:
					karta("J");
					pole[i] = 10;
					break;
				case 12:
					karta("Q");
					pole[i] = 10;
					break;
				case 13:
					karta("K");
					pole[i] = 10;
					break;
				}
				body = pole[0] + pole[1] + pole[2] + pole[3] + pole[4] + pole[5] + pole[6] + pole[7];
				i++;
				cin >> choose;
			} while (choose == '+' && body < 22);
		}
		else {}
		body = pole[0] + pole[1] + pole[2] + pole[3] + pole[4] + pole[5] + pole[6] + pole[7];
		if (body >= 22) {
			cout << "_________________________________" << endl;
			cout << "                                 " << endl;
			cout << "             BUSTED!             " << endl;
			cout << "          Prehrali ste           " << endl;
			cout << "_________________________________" << endl;
			cout << "                                 " << endl;
			cout << "   Pre dalsiu hru zmacknite - 1   " << endl;
			cin >> dalsiahra;

		}
		else {
			cout << "_________________________________" << endl;
			cout << "         Superove karty:         " << endl;


			polex[0] = rand() % 12 + 1;
			switch (polex[0])
			{
			case 1:
				karta("A");
				break;
			case 2:
				karta("2");
				break;
			case 3:
				karta("3");
				break;
			case 4:
				karta("4");
				break;
			case 5:
				karta("5");
				break;
			case 6:
				karta("6");
				break;
			case 7:
				karta("7");
				break;
			case 8:
				karta("8");
				break;
			case 9:
				karta("9");
				break;
			case 10:
				karta("10");
				break;
			case 11:
				karta("J");
				polex[0] = 10;
				break;
			case 12:
				karta("Q");
				polex[0] = 10;
				break;
			case 13:
				karta("K");
				polex[0] = 10;
				break;
			}
			polex[1] = rand() % 12 + 1;
			switch (polex[1])
			{
			case 1:
				karta("A");
				break;
			case 2:
				karta("2");
				break;
			case 3:
				karta("3");
				break;
			case 4:
				karta("4");
				break;
			case 5:
				karta("5");
				break;
			case 6:
				karta("6");
				break;
			case 7:
				karta("7");
				break;
			case 8:
				karta("8");
				break;
			case 9:
				karta("9");
				break;
			case 10:
				karta("10");
				break;
			case 11:
				karta("J");
				polex[1] = 10;
				break;
			case 12:
				karta("Q");
				polex[1] = 10;
				break;
			case 13:
				karta("K");
				polex[1] = 10;
				break;

			}
			int ex = polex[0] + polex[1];
			if (ex < 16)
			{
				chooseai = 1;
			}
			else { chooseai = 2; }
			



			if (chooseai == 1) {
				polex[2] = rand() % 12 + 1;
				switch (polex[2])
				{
				case 1:
					karta("A");
					break;
				case 2:
					karta("2");
					break;
				case 3:
					karta("3");
					break;
				case 4:
					karta("4");
					break;
				case 5:
					karta("5");
					break;
				case 6:
					karta("6");
					break;
				case 7:
					karta("7");
					break;
				case 8:
					karta("8");
					break;
				case 9:
					karta("9");
					break;
				case 10:
					karta("10");
					break;
				case 11:
					karta("J");
					polex[2] = 10;
					break;
				case 12:
					karta("Q");
					polex[2] = 10;
					break;
				case 13:
					karta("K");
					polex[2] = 10;
					break;

				}
			}
			else {}
			
			
			
			ex = polex[0] + polex[1] + polex[2];
			if (ex < 16)
			{
				chooseai = 1;
			}
			else { chooseai = 2; }




			if (chooseai == 1) {
				polex[3] = rand() % 12 + 1;
				switch (polex[3])
				{
				case 1:
					karta("A");
					break;
				case 2:
					karta("2");
					break;
				case 3:
					karta("3");
					break;
				case 4:
					karta("4");
					break;
				case 5:
					karta("5");
					break;
				case 6:
					karta("6");
					break;
				case 7:
					karta("7");
					break;
				case 8:
					karta("8");
					break;
				case 9:
					karta("9");
					break;
				case 10:
					karta("10");
					break;
				case 11:
					karta("J");
					polex[3] = 10;
					break;
				case 12:
					karta("Q");
					polex[3] = 10;
					break;
				case 13:
					karta("K");
					polex[3] = 10;
					break;

				}
			}
			else {}

			ex = polex[0] + polex[1] + polex[2] + polex[3];
			if (ex < 16)
			{
				chooseai = 1;
			}
			else { chooseai = 2; }




			if (chooseai == 1) {
				polex[4] = rand() % 12 + 1;
				switch (polex[4])
				{
				case 1:
					karta("A");
					break;
				case 2:
					karta("2");
					break;
				case 3:
					karta("3");
					break;
				case 4:
					karta("4");
					break;
				case 5:
					karta("5");
					break;
				case 6:
					karta("6");
					break;
				case 7:
					karta("7");
					break;
				case 8:
					karta("8");
					break;
				case 9:
					karta("9");
					break;
				case 10:
					karta("10");
					break;
				case 11:
					karta("J");
					polex[4] = 10;
					break;
				case 12:
					karta("Q");
					polex[4] = 10;
					break;
				case 13:
					karta("K");
					polex[4] = 10;
					break;

				}
			}
			else {}

			ex = polex[0] + polex[1] + polex[2] + polex[3] + pole[4];
			if (ex < 16)
			{
				chooseai = 1;
			}
			else { chooseai = 2; }




			if (chooseai == 1) {
				polex[5] = rand() % 12 + 1;
				switch (polex[5])
				{
				case 1:
					karta("A");
					break;
				case 2:
					karta("2");
					break;
				case 3:
					karta("3");
					break;
				case 4:
					karta("4");
					break;
				case 5:
					karta("5");
					break;
				case 6:
					karta("6");
					break;
				case 7:
					karta("7");
					break;
				case 8:
					karta("8");
					break;
				case 9:
					karta("9");
					break;
				case 10:
					karta("10");
					break;
				case 11:
					karta("J");
					polex[5] = 10;
					break;
				case 12:
					karta("Q");
					polex[5] = 10;
					break;
				case 13:
					karta("K");
					polex[5] = 10;
					break;

				}
			}
			else {}

			
	
			/*if (chooseai == 1) {
				j = 2;
				do {
					polex[j] = rand() % 12 + 1;
					switch (pole[j])
					{
					case 1:
						karta("A");
						break;
					case 2:
						karta("2");
						break;
					case 3:
						karta("3");
						break;
					case 4:
						karta("4");
						break;
					case 5:
						karta("5");
						break;
					case 6:
						karta("6");
						break;
					case 7:
						karta("7");
						break;
					case 8:
						karta("8");
						break;
					case 9:
						karta("9");
						break;
					case 10:
						karta("10");
						polex[j] = 10;
						break;
					case 11:
						karta("J");
						polex[j] = 10;
						break;
					case 12:
						karta("Q");
						polex[j] = 10;
						break;
					case 13:
						karta("K");
						polex[j] = 10;
						break;
					}
					bodyai = polex[0] + polex[1] + polex[2] + polex[3] + polex[4] + polex[5] + polex[6] + polex[7];
					
					if (bodyai < 16)
					{
						chooseai = 1;
					}
					else { chooseai = 2; }
					++j;
				} while (chooseai == 1 && bodyai < 22);
			}
			else {}*/

			body = pole[0] + pole[1] + pole[2] + pole[3] + pole[4] + pole[5] + pole[6] + pole[7];
			bodyai = polex[0] + polex[1] + polex[2] + polex[3] + polex[4] + polex[5] + polex[6] + polex[7];
			cout << polex[0] << endl;
			cout << polex[1] << endl;
			cout << polex[2] << endl;
			cout << polex[3] << endl;
			cout << polex[4] << endl;
			cout << polex[5] << endl;

			if (bodyai > 21)
			{
				cout << "_________________________________" << endl;
				cout << "                                 " << endl;
				cout << "             BUSTED!             " << endl;
				cout << "          Vyhrali  ste           " << endl;
				cout << "_________________________________" << endl;
				cout << "                                 " << endl;
				cout << "   Pre dalsiu hru zmacknite - 1   " << endl;
				cin >> dalsiahra;

			}
			else {
				if (body == bodyai) {
					cout << "_________________________________" << endl;
					cout << "                                 " << endl;
					cout << "          Vase body : " << body << endl;
					cout << "         Body supera : " << bodyai << endl;
					cout << "             " << body << " = " << bodyai << endl;
					cout << "              Split              " << endl;
					cout << "_________________________________" << endl;
					cout << "                                 " << endl;
					cout << "   Pre dalsiu hru zmacknite - 1   " << endl;
					cin >> dalsiahra;

				}

				else if (body > bodyai) {
					cout << "_________________________________" << endl;
					cout << "                                 " << endl;
					cout << "          Vase body : " << body << endl;
					cout << "         Body supera : " << bodyai << endl;
					cout << "             " << body << " > " << bodyai << endl;
					cout << "          Vyhrali  ste           " << endl;
					cout << "_________________________________" << endl;
					cout << "                                 " << endl;
					cout << "   Pre dalsiu hru zmacknite - 1   " << endl;
					cin >> dalsiahra;
				}

				else if (body < bodyai) {
					cout << "_________________________________" << endl;
					cout << "                                 " << endl;
					cout << "          Vase body : " << body << endl;
					cout << "         Body supera : " << bodyai << endl;
					cout << "             " << body << " < " << bodyai << endl;
					cout << "          Prehrali ste           " << endl;
					cout << "_________________________________" << endl;
					cout << "                                 " << endl;
					cout << "   Pre dalsiu hru zmacknite - 1   " << endl;
					cin >> dalsiahra;
				}
				else {}
















			}
		}
	}while (dalsiahra == 1);
	}
