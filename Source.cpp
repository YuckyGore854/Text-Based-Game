#include<iostream>
#include<string>
#include<windows.h>
#include<ctime>

using namespace std;

int monstergen();

void ItemGen();

string stuff[5] = { "torch", "sword", "key", "shield", "air" };
bool items[5] = { false, false, false, false, false };

int PlayerHealth = 100;
enum MonsterType { skeleton, silverfish, couple, EssenceOfCave };
int main() {
	srand(time(NULL));

	int life = 1;
	int room = 0;
	int playback = 0;
	int playback2 = 0;





	string input;

	cout << "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD" << endl;
	cout << "DDDPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP)DD" << endl;
	cout << "DDD····DD·)Db)DDDD··QDb··DDDDb·)Db··)DDDD·pDb·pDb···QDDDbp)DD·DDp)Db·pDDDp···)DD" << endl;
	cout << "DDD····DDDDDP)DDDb·pDQDb·QDC)Db)Db··)DDDb·)Db·)Db···)DP·DD)DD·DDDDDb)DC·)DP··)DD" << endl;
	cout << "DDD···)DD·)Db)DDDD)DPPDDCDDDDP·)DDDD)DDDDPDDP·DDP···DDDDPP)DD·DD·DDb·SDDDP···)DD" << endl;
	cout << "DDD·······················································p··················)DD" << endl;
	cout << "DDD·····················································)QDDDDDppp···········)DD" << endl;
	cout << "DDD····································ppppDDDppppp··ppDDDDDDDDDDDDDbp·······)DD" << endl;
	cout << "DDD·······················ppbDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDb·····)DD" << endl;
	cout << "DDD··················pppDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDp···)DD" << endl;
	cout << "DDD············qppDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDPPDDDDDDDDpp)DD" << endl;
	cout << "DDD······ppQDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDPP·········PPDDP)DD" << endl;
	cout << "DDD··pDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDPP···················)DD" << endl;
	cout << "DDDpDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDP·····················)DD" << endl;
	cout << "DDDDDDPPPPPPPPPPPPPPPPDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDPQbpp····················)DD" << endl;
	cout << "DDDDD···················)PPPDDDDDDDDDDDDDDDDPP)···Pbp··PPPPSb················)DD" << endl;
	cout << "DDD·)Dp························QDDDDDDDP·····································)DD" << endl;
	cout << "DDD····PPep·················pQDDDDDDDP·······································)DD" << endl;
	cout << "DDD····················ppDDDDDDDDDDDDC·······································)DD" << endl;
	cout << "DDD··················)QDDDDPPQDDDDP··········································)DD" << endl;
	cout << "DDD··················DDDD····DDDP············································)DD" << endl;
	cout << "DDD················)DDDDP····)DDb············································)DD" << endl;
	cout << "DDD·················QDDDP·····)DDp···········································)DD" << endl;
	cout << "DDD··················DDDDDp···)DDDDpppp······································)DD" << endl;
	cout << "DDD···························DDDDDDDDDPP····································)DD" << endl;
	cout << "DDD··········································································)DD" << endl;
	cout << "DDD··········································································)DD" << endl;
	cout << "DDD····pDDDb···DDb··DDb·pDD·DDDDP···QDbqDDDDPDDPDDP)DDDDp·DDP·pDDDb··DDb·····)DD" << endl;
	cout << "DDD···)DD·)Qp·pDDDb·QDDbDDD·DDbpP···DDP··DDP·DDCQDP)DP·DDPDDPQDP·)Db·DDp·····)DD" << endl;
	cout << "DDD···)DDppDb)DDDDD·QDDDPDD·DDQpp···pDD··DDC·DDpDDP)DbpDD·DDP)DbpDDP)QDD·····)DD" << endl;
	cout << "DDD·····PPPPPPPP·PPSPPSP·PP·PPPPS···PP···PP··PPPPP·PPPPP··PPS·)PPPP··PP······)DD" << endl;
	cout << "DDDu·········································································)DD" << endl;
	cout << "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD" << endl;
	cout << "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD" << endl;

	//PlaySound(TEXT("dino-roar.wav"), NULL, SND_FILENAME);

	while (life == 1) {
		switch (room) {
		case 0:
			cout << "Would you like to play a game with me?????" << endl;
			getline(cin, input);

			if ((input.compare("Yes") == 0) || (input.compare("yes") == 0) || (input.compare("Y") == 0) || (input.compare("y") == 0) || (input.compare("YES") == 0) || (input.compare("Yeah")) == 0 || (input.compare("yeah")) == 0)
				room = 1;

			else if ((input.compare("No") == 0) || (input.compare("NO") == 0) || (input.compare("no") == 0) || (input.compare("N") == 0 || (input.compare("n") == 0))
				)life = 2;

			else
				cout << "Listen, pal, I'm being held here against my will. So I would appreciate it if you didn't make this difficult. I understand that you enjoy making the computer do the funny, but now is not the time for that." << endl;
			break;

		case 1:
			cout << endl;
			while (playback == 0) {
				cout << "You are within the oregon trail. You are a lowly farmer, lmao you peasant." << endl;
				system("pause");
				cout << endl;
				cout << "Sike you thought, you're actually within THE cave" << endl;
				playback = 1;
			}
			cout << "you can go either north or south, no west or east because it's a cave" << endl;
			getline(cin, input);

			if ((input.compare("North") == 0) || (input.compare("north") == 0) || (input.compare("n") == 0) || (input.compare("N") == 0))
				room = 2;

			else if ((input.compare("South") == 0) || (input.compare("south") == 0) || (input.compare("s") == 0) || (input.compare("S") == 0))
				room = 3;
			else
				cout << "I don't understand what you're saying, I'm but a mere computer, I don't speak English." << endl;
			cout << endl;//these are just for formatting purposes
			break;

		case 2:
			if (items[0] == false)
				cout << "You have chosen to go north, in doing so you have proven what a unoriginal frick frack you are you loser. But that's beside the point." << endl;
			else if (items[0] == true)
				cout << "You're getting warmer. Stop that. You aren't supposed to actually get closer to the end of the game." << endl;
			cout << "From here you can choose to go South or go North, because this is still just a cave." << endl;
			getline(cin, input);

			if ((input.compare("North") == 0) || (input.compare("north") == 0) || (input.compare("n") == 0) || (input.compare("N") == 0))
				room = 4;

			else if ((input.compare("South") == 0) || (input.compare("south") == 0) || (input.compare("s") == 0) || (input.compare("S") == 0))
				room = 1;
			else
				cout << "I don't understand what you're saying, I'm but a mere computer, I don't speak English." << endl;
			break;

		case 3:
			cout << endl;
			cout << "You have chosen to go south, and in doing so you demonstrate your lack of an ability to explore. I hope your parents are proud." << endl;
			cout << "Magically, upon going south, you appear to have left THE cave. Looking around you see suburban texas. As to how you know it's texas, you tell me." << endl;
			cout << "Texas is south, yeah we're very original." << endl;
			getline(cin, input);

			if ((input.compare("North") == 0) || (input.compare("north") == 0) || (input.compare("n") == 0) || (input.compare("N") == 0))
				room = 2;

			else if ((input.compare("West") == 0) || (input.compare("west") == 0) || (input.compare("w") == 0) || (input.compare("W") == 0))
				room = 6;
			else
				cout << "I don't understand what you're saying, I'm but a mere computer, I don't speak English." << endl;
			cout << endl;
			break;

		case 4:
			cout << endl;
			if (items[0] == false) {
				cout << "Going north once again, you are not only very persistent, but also very original. If only your mom was here to see this." << endl;

				cout << "You are going deeper into THE cave. It's getting quite dark. Maybe you should've thought about that before going farther." << endl;

				cout << "You can go North or South again." << endl;
			}
			else
				cout << "Where oh where will you choose to go now?" << endl;
			getline(cin, input);

			if ((input.compare("North") == 0) || (input.compare("north") == 0) || (input.compare("n") == 0) || (input.compare("N") == 0))
				room = 5;

			else if ((input.compare("South") == 0) || (input.compare("south") == 0) || (input.compare("s") == 0) || (input.compare("S") == 0))
				room = 2;
			else
				cout << "I don't understand what you're saying, I'm but a mere computer, I don't speak English." << endl;



			break;

		case 5:
			cout << endl;
			if (items[0] == false) {
				cout << "You have fallen into a hole because you have no inhibition. Take your time next time and I dunno, not head into a cave without any sort of light. Just my suggestion though." << endl;
				system("pause");
				life = 0;
			}
			else if (items[0] == true) {
				cout << "Congrats, you have successfully explored around the game enough to not die here. I wonder how long it took you, probably too long I assume." << endl;

				cout << "That still doesn't excuse the fact that you've continued to explore THE cave only heading north. Mix it up a little. You might find something. Probably not though." << endl;
			}
			getline(cin, input);
			if ((input.compare("North") == 0) || (input.compare("north") == 0) || (input.compare("n") == 0) || (input.compare("N") == 0))
				room = 5;

			else if ((input.compare("South") == 0) || (input.compare("south") == 0) || (input.compare("s") == 0) || (input.compare("S") == 0))
				room = 2;
			break;
		case 6:
			cout << endl;

			cout << "You are in the heart of the suburbs. Something about this place feels wrong." << endl
				<< "Your options are to go east" << endl;

			//BattleSystem(monstergen());

			getline(cin, input);
			if ((input.compare("South") == 0) || (input.compare("south") == 0) || (input.compare("s") == 0) || (input.compare("S") == 0))
				room = 7;

			break;

		case 7:
			cout << endl;
			cout << "It seems like you have broken into some random house. What a real moral compass you have." << endl
				<< "Like many things, that is beside the point. Looking around this is a very plain house."
				<< "However you do see a magical chest in the living room. Do not question the logic of such a container being placed in some random home in Texas."
				<< "You can go North or West." << endl;
			if ((input.compare("North") == 0) || (input.compare("north") == 0) || (input.compare("n") == 0) || (input.compare("N") == 0))
				room = 6;

			break;
		case 8:
			cout << endl;
			cout << "Exploring the house more, you have left the house to the backyard. It's a pretty standard back yard. dunno tho." << endl;
			break;

		case 9:
			cout << "The cave has finally turned into a ravine, or something. Don't know what exactly but the cave goes into a different direction." << endl;
			break;
		case 10:
			cout << "It's back to being a cave for the most part. This room will be your unbeing." << endl;
		}



	}
	if (life <= 0) {
		cout << endl;
		cout << "You are so skilled at this game that you forgot to live. Yeah, you're dead. Welcome to the waiting room." << endl;
		cout << "Destination: Out this game.Time remaining : You tell me, I'm not good with time." << endl;

	}
	else if (life == 2)
		cout << "Congratulations, you have now won the game. Are you proud of this joyous occasion? This is the best ending btw, congrats." << endl;


	return 0;
}
int monstergen() {
	return rand() % 4;
}
void ItemGen() {
	int item = rand() % 100 + 1;

	if (item <= 10)
		items[0] = true;
	else if (item <= 35)
		items[1] = true;
}

void BattleSystem(int MonsterType) {
	int MonsterHealth;
	int damage;
	char input;
	int input2;
	bool CanRun = false;
	bool SmokeCloud = false;

	srand(time(NULL));

	switch (MonsterType) {
	case skeleton:
		cout << "A skeleton appears!" << endl;
		MonsterHealth = 20;
		break;
	case silverfish:
		cout << "Would you look at that. Everyone's favorite enemy, the silverfish!" << endl;
		MonsterHealth = 10;
		break;
	case couple:
		cout << "A fire bat appears!" << endl;
		MonsterHealth = 10;
		break;
	case EssenceOfCave:
		cout << "A dragon appears!" << endl;
		MonsterHealth = 100;
		break;
	}
	//battle loop
	while (MonsterHealth >= 0 && PlayerHealth >= 0 && CanRun == false) {
		cout << endl << endl << "The monster currently has " << MonsterHealth << " Hp left." << endl;
		cout << "Your Hp is " << PlayerHealth << endl;
		cout << "Press 'f' to fight, 'i' to use item, 'v' to view items, or 'r' to run." << endl;
		cin >> input;
		switch (input) {
			//FIGHT CASE/////////////////////////////////////////////////
		case 'f':
			//flame sword hits harder on ice enemies
			if (MonsterType == 2 && items[1].compare == true) {
				damage = rand() % 20;
				cout << "Your flame sword slices through the frost for " << damage << " damage." << endl;
			}
			//ice wand hits harder on fire enemies
			else if (MonsterType == 3 && WeaponsAndArmor[2].compare("ice wand") == 0) {
				damage = rand() % 30;
				cout << "Your ice wand freezes the enemy for " << damage << " damage." << endl;
			}
			else {//no special weapon used
				damage = rand() % 10 + 13;
				cout << "You swing your sword for " << damage << " damage." << endl;
			}
			MonsterHealth -= damage;
			break;
			//ITEM CASE/////////////////////////////////////////
		case 'i':
			cout << "Press 1 to a health potion, 2 to use a smoke bomb, 3 to use the ham." << endl;
			cin >> input2;

			//check if you have a health potion, if you do, add to player health and subtract from items
			if (itemNums[input2 - 1] <= 0)
				cout << "Sorry, out of potions." << endl;
			else if (input2 == 1) {
				cout << "glug glug" << endl;
				PlayerHealth += 20;
				itemNums[0] -= 1;
			}
			else if (input2 == 3) {
				cout << "You drop the ham on the ground with a thud." << endl;
				if (MonsterType == 4) {
					cout << "The dragon greedily grabs it and flies away." << endl;
					CanRun = true;
				}
				else
					cout << "The monsters briefly eye the ham with suspicion, then turn their attention back to you." << endl;

			}
			break;
			//VIEW ITEMS CASE////////////////////////////////////////
		case 'v':
			cout << "Your items" << endl;
			for (int w = 0; w < 3; w++)
				cout << itemNums[w] << " " << items[w] << endl;
			break;
			//RUN CASE////////////////////////////////////////////
		case 'r':
			if (SmokeCloud == true) {
				if (rand() % 10 > 8) {
					cout << "The smoke hides your escape!" << endl;
					CanRun = true;
				}
			}
			else if (rand() % 10 > 4) {
				cout << "Your luck holds and you are able to run away successfully!" << endl;
				CanRun = true;
			}
			else
				cout << "The enemy blocks your way and you cannot run." << endl;
			break;

		default:
			cout << "Sorry, I don't understand that" << endl;
		}//end switch

		//MONSTER ATTACK!///////////////////////////////////////

		/*if (MonsterType == OCTOROK) {
			damage = rand() % 20 + 10;
			cout << "The octorok spits a rock and hits you for " << damage << endl;
			PlayerHealth -= damage;
		}
		if (MonsterType == ICEDEMON) {
			damage = rand() % 5 + 10;
			cout << "The ice demon freezes you for " << damage << endl;
			PlayerHealth -= damage;
		}
		if (MonsterType == FIREBAT) {
			damage = rand() % 20;
			cout << "The fire bat burns you for " << damage << endl;
			PlayerHealth -= damage;
			if (WeaponsAndArmor[1].compare("fire armor") == 0) {
				cout << "Your flame armor absorbs 20 damage!" << endl;
				damage -= 20;
			}
		}
		if (MonsterType == DRAGON) {
			if (rand() % 10 < 5) {//dragon has two possible attacks
				damage = rand() % 50 + 10;
				cout << "The dragon's firey breath scorches you for " << damage << endl;
				if (WeaponsAndArmor[1].compare("fire armor") == 0) {
					cout << "Your flame armor absorbs 20 damage!" << endl;
					damage -= 20;
				}
			}

			else {
				damage = rand() % 30 + 15;
				cout << "The dragon's claw slashes you for " << damage << endl;
			}
			PlayerHealth -= damage;
		}


		if (MonsterHealth <= 0)
			cout << "The monster is defeated!" << endl;

		if (PlayerHealth <= 0)
			cout << "YOU DIED" << endl;
	}//end battle 
}
