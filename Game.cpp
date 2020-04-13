#include <iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<math.h>

using namespace std;

struct person {
	string name;
	int code;
};
//functions
bool isletters(string input);
string crime(string a);
int diagonal();
bool door();
bool end2();

int main() {
	cout << " *********************************************\n";
	cout << " {WELCOME TO KIDNAPPED THE TEXT BASED GAME !}\n\a";
	cout << " *********************************************\n";
	cout << " RULES:\n1)IN an important question in which you have to guide the person kidnapped out of a situation\n ";
	cout << " 2)if you choose wrong option your recent score will be shown and you will have to restart the game, by choosing correct option score gets incremented \n ";
	string name;
	int password[4];
	person arr[3];
	bool life = true;
	bool check = true;
	string a, b, c, d, e, f;
	int score = 0;
	do {
		cout << "\n enter your first name to save the game= ";
		getline(cin, name);

	} while (isletters(name) == false);


	ofstream outf("savegame.txt", ios::app);
	outf << "name= " << name;
	system("cls");
	while (life == true) {
		score = 0;
		check = true;
		cout << " \n[ESTABLISHING CONNECTON]\n";
		cout << " \n[RECEIVING MESSSAGE]\n";
		cout << " HELLO is any one there I am josh,who just found this mobile device to contact with you. \n";
		cout << " write yes or no,if you can hear him= ";
		cin >> a;
		if (a == "yes")
			cout << " Thank god someone who can help me ! \n";
		else if (a == "no")
			cout << " STOP,pretending that nobody is there you just wrote no !  \n";
		else
			continue;
		cout << "Help me get out ,i have been kidnapped by someone !\n";
		cout << " OK,so i was walking down an alley going to get some snacks yesterday night. \n";
		system("pause");
		cout << " Then someone suddenly grabbed me with a cloth on my face and after that i was left unconsious\n";
		system("pause");
		cout << " so,now i am in a room with a sealed door having a passcode and upon inspection i see that the numbers from [1 till 20] have fingerprints on them. \n";
		system("pause");
		cout << " i also found a note written EVEN numbers\n";
		cout << " Actually my math is weak tell me | 4 even numbers| in any order and i will sort them and input it in the 4 digit pin \n\n";
		for (int i = 0; i < 4; i++) {
			cout << " enter " << " digit [" << i + 1 << "]  = ";
			cin >> password[i];
			if (password[i] % 2 != 0) {
				cout << "\n josh entered wrong number(odd) and the alarm rang,he got captured,because of you! :( \n";
				check = false;
				break;
			}
		}// for loop break.
		if (check == false) {
			cout << " DO YOU WANT TO KEEP PLAYING,yes OR no? = ";
			cin >> b;
			if (b == "no") {
				break;
			}
			else {
				system("cls");
				continue;
			}
		}
		score++;//first score for the player because of the critical question asked.
		for (int i = 0; i < 4; i++) {//sorting array.
			for (int j = i + 1; j < 4; j++) {
				if (password[j] < password[i]) {
					int temp = password[i];
					password[i] = password[j];
					password[j] = temp;
				}
			}
		}
		cout << "OH, thanks i actually sorted into ascending order and luckily that was correct :)\n";
		for (int i = 0; i < 4; i++) {
			cout << password[i] << "\t";
		}
		cout << "\n";
		cout << "phew that was close,now i am in a corridor.let me go to the end of it. \n";
		cout << "However i was wondering is your name " << name << " ,i know this because its showing on my screen\n";
		cout << "from now on ill call you " << name << endl;
		system("pause");
		cout << "okay so i see stairs going downwards and a door on the left\n";
		cout << "where should i go now,stairs or door?= ";
		cin >> c;
		if (c == "door") {
			cout << "\n I am in a room where alot of stuff is stored probably my wallet and phone might be kept here too\n";
			system("pause");
			cout << "so i found a BOX with a note kept on it written connect your phone with the box's touchpad to open it\n";
			cout << "I am trusting you to open this box for me !!\n";
			system("pause");
			system("cls");
			cout << "[connecting to  josh's device]\n";
			if (diagonal() == 1) {
				cout << "BOX opened!\n";
				score++;//second score increment
				cout << "Thank you so much " << name << " now lets get out of here ";
				if (door() == true) {
					score = score + 2;//third score incremented twice
					cout << "Thank you i cant repay this favour\n";
					cout << "SO i asked my brother about all the notes and whats going on \n";
					cout << "He said he placed those notes and a past ally soldier wants to get revenge on us \n";
					system("pause");
					cout << "Actually i served  in the military before ," << name << " and i exposed him for some fraud activites thats why he might be taking revenge\n ";
					system("pause");
					cout << "I hear someone coming  what should we do= \n";
					cout << "run" << "\t" << "hide" << "\t" << "confront= ";
					cin >> d;
					if (crime(d) == "ok") {
						score++;
						system("pause");
						cout << "\n we are free NOW my brother knows how to get out, i wont forget you,GOOD BYE :(  \n";
						cout << "write goodbye = \n";
						cin >> e;
						cout << "\njosh=" << e << " " << name;
						cout << "\n[connection terminated]\n";
						system("pause");
						break;
					}
					else {
						cout << " DO YOU WANT TO KEEP PLAYING,yes OR no? = ";
						cin >> b;
						if (b == "no") {
							break;
						}
						else {
							system("cls");
							continue;
						}
					}
				}
				else {
					cout << "THE BOMB KILLED JOSH AND HIS BROTHER\n";
					cout << " DO YOU WANT TO KEEP PLAYING,yes OR no? = ";
					cin >> b;
					if (b == "no") {
						break;
					}
					else {
						system("cls");
						continue;
					}
				}
			}
			else {
				cout << "THE BOX CONTAINING HIS ITEMS EXPLODED\n";
				cout << " DO YOU WANT TO KEEP PLAYING,yes OR no? = ";
				cin >> b;
				if (b == "no") {
					break;
				}
				else {
					system("cls");
					continue;
				}
			}
		}
		else if (c == "stairs") {
			arr[0].name = "danny";
			arr[0].code = 106;
			arr[1].name = "manny";
			arr[1].code = 109;
			for (int i = 0; i < 2; i++) {
				cout << arr[i].name << "\t";
				cout << arr[i].code << endl;
			}
			cout << " I know these people from the military remember the name " << arr[0].name << " and " << " frequency " << arr[0].code << endl;
			system("pause");
			system("cls");
			cout << " So that if i find a radio i can contact him ,the other person was a criminal.\n";
			system("pause");
			cout << "YES !,i see the exit door but with a note asking same password that we sorted=  \n";
			int pin[4];
			int num = true;
			cout << "enter 4 digits of the password one by one=\n";
			for (int z = 0; z < 4; z++) {
				cout << "enter " << "digit" << z + 1 << "=";
				cin >> pin[z];
				if (pin[z] != password[z]) {
					num = false;
					break;
				}
			}
			if (num == true) {
				score = score + 2;
				cout << "\n[Access granted]\n";
				cout << "\nOH this room is for communication,nevermind tell me the name and frequency of the person,quick \n";
				cout << "enter his firstname,to contact the person= \n";
				cin >> arr[2].name;
				cout << "\ncode= \n";
				cin >> arr[2].code;
				if (arr[0].name == arr[2].name && arr[0].code == arr[2].code) {
					score++;
					cout << "I successfully contacted him and hes coming to rescue me !\n";
					cout << "And he told me head outside through the secret passage,im headed there.\n";
					system("pause");
					cout << "IM fed up of these problems to get out of simple doors,solve this one for me \n";
					if (end2() == true) {
						score++;
						cout << "I am out now so this is goodbye!\n";
						cout << "[connection terminated]\n";
						system("pause");
						break;
					}
					else {
						cout << "The connection was lost and josh never got out\n";
						cout << " DO YOU WANT TO KEEP PLAYING,yes OR no? = ";
						cin >> b;
						if (b == "no") {
							break;
						}
						else {
							system("cls");
							continue;
						}
					}
				}
				else {
					cout << "he contacted the wrong person and was taken by him\n";
					cout << " DO YOU WANT TO KEEP PLAYING,yes OR no? = ";
					cin >> b;
					if (b == "no") {
						break;
					}
					else {
						system("cls");
						continue;
					}
				}


			}
			else {
				cout << " DO YOU WANT TO KEEP PLAYING,yes OR no? = ";
				cin >> b;
				if (b == "no") {
					break;
				}
				else {
					system("cls");
					continue;
				}
			}
		}
		else {
			cout << "[wrong input] YOUR WASTING MY TIME !!\n";
			system("pause");
			break;
		}
	}

	system("cls");
	outf << "\t" << "|score= " << score << "|\n";
	outf.close();
	cout << " \nTHESE ARE THE SCORES OF ALL THOSE PLAYERS WHO HAVE PLAYED THIS GAME: \n";
	ifstream inf("savegame.txt");
	/*	for (int i = 0; !inf.eof(); i++) {
			inf >> name;
			inf >> score;
			cout << "----------------------------\n";
			cout << "| name= " << name<<"\t ";
			cout << "| score= " << score << "\n";}*/
	while (!inf.eof()) {
		getline(inf, name);
		cout << name << endl;

	}
	system("pause");
	return 0;
}



string crime(string a) {
	char i = a[0];
	switch (i)
	{
	case'c':cout << " both of them got shot\n";
		break;
	case'r':cout << "WE are running relentlessly \n";
		break;
	case 'h':cout << "im holding my breath,trying to hide\n";
		break;
	default:
		break;
	}
	if (i == 'h' || i == 'r') {
		cout << "I think we lost him, thanks for the advice \n";
		return"ok";
	}
	else {
		return"no";
	}
}










int diagonal() {
	int arr[3][3];
	int ans;
	int count = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "\nenter any number in box = ";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << " " << arr[i][j] << " ";
			if (i == j)
				count = count * arr[i][j];
		}
		cout << "\n";
	}
	cout << "input the product of the main right diagonal= ";
	cin >> ans;
	if (count == ans)
		return 1;
	else {
		return 0;
	}
}






bool door() {
	string cb;
	int guess, real;
	int count = 0;
	srand((unsigned)time(0));
	real = (rand() % 10) + 1;
	cout << "\nThis looks like an old WW2 shelter for soldiers getting out of here will be hard\n";
	system("pause");
	cout << "oh im shocked my brother has a bomb connected to him what should i do,cut any wire or try to defuse?\n";
	cout << " write cut or defuse,quickly please= ";
	cin >> cb;
	if (cb == "cut")
		return false;
	else if (cb == "defuse") {
		cout << " \nyou have to defuse it,im shaking right now,you have 2 tries\n";
		do
		{
			
			cout << "Guess number from [1 to 10] to defuse bomb= ";
			cin >> guess;
			if (guess == real)
				return true;
			else if (real < guess) {
				cout << "number is a little lower\n";
				count++;
			}
			else {
				cout << "number is a little higher\n";
				count++;
			}
		} while (real != guess && count < 2);
		if (real != guess) {
			cout << "\nBOMB DETONATED #\n";
			return false;
		}
		else {
			cout << "BOMB [defused]\n";
			return true;
		}
	}
	else {
		return false;
	}
}


bool end2() {
	ofstream outf("words.txt");
	outf << "bear\n" << "purple\n" << "shoe\n" << "hand\n" << "white";
	outf.close();
	ifstream file("words.txt");
	string fword;
	string inword;
	bool see = true;
	srand((unsigned)time(0));
	string incorrect[5] = { "reba","elurpp","eosh","ahnd","hitew" };
	int index = rand() % 5;
	cout << "unjumble the word to get out " << incorrect[index] << "=";
	cin >> inword;
	while (!file.eof()) {
		file >> fword;
		if (fword == inword) {
			see = true;
			cout << "\n[door opened]";
			break;

		}
		else
			see = false;
	}
	if (see == true)
		return true;
	else
		return false;
}



bool isletters(string input) {
	for (int i = 0; i < input.size(); i++) {
		int uppercasechar = toupper(input[i]);
		if (uppercasechar <'A' || uppercasechar>'z') {
			cout << " Invalid input";
			return false;
		}

	}
	return true;
}









