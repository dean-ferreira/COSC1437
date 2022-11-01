/*This program will store roster and rating information for a soccer team. Coaches rate players during tryouts to ensure a balanced team.

(1) Prompt the user to input five pairs of numbers: A player's jersey number (0 - 99) and the player's rating (1 - 9). Store the jersey numbers in one int vector and the ratings in another int vector. Output these vectors (i.e., output the roster). (3 pts)

Ex:

Enter player 1's jersey number:
84
Enter player 1's rating:
7

Enter player 2's jersey number:
23
Enter player 2's rating:
4

Enter player 3's jersey number:
4
Enter player 3's rating:
5

Enter player 4's jersey number:
30
Enter player 4's rating:
2

Enter player 5's jersey number:
66
Enter player 5's rating:
9

ROSTER
Player 1 -- Jersey number: 84, Rating: 7
Player 2 -- Jersey number: 23, Rating: 4
...
(2) Implement a menu of options for a user to modify the roster. Each option is represented by a single character. The program initially outputs the menu, and outputs the menu after a user chooses an option. The program ends when the user chooses the option to Quit. For this step, the other options do nothing. (2 pts)

Ex:

MENU
a - Add player
d - Remove player
u - Update player rating
r - Output players above a rating
o - Output roster
q - Quit

Choose an option:
(3) Implement the "Output roster" menu option. (1 pt)

Ex:

ROSTER
Player 1 -- Jersey number: 84, Rating: 7
Player 2 -- Jersey number: 23, Rating: 4
...
(4) Implement the "Add player" menu option. Prompt the user for a new player's jersey number and rating. Append the values to the two vectors. (1 pt)

Ex:

Enter a new player's jersey number:
49
Enter the player's rating:
8
(5) Implement the "Delete player" menu option. Prompt the user for a player's jersey number. Remove the player from the roster (delete the jersey number and rating). (2 pts)

Ex:

Enter a jersey number:
4
(6) Implement the "Update player rating" menu option. Prompt the user for a player's jersey number. Prompt again for a new rating for the player, and then change that player's rating. (1 pt)

Ex:

Enter a jersey number:
23
Enter a new rating for player:
6
(7) Implement the "Output players above a rating" menu option. Prompt the user for a rating. Print the jersey number and rating for all players with ratings above the entered value. (2 pts)

Ex:

Enter a rating:
5

ABOVE 5
Player 1 -- Jersey number: 84, Rating: 7
...
*/

#include <iostream>
#include <vector>
#include <string>

struct Player {
    int jerseyNumber {};
    int rating {};
};

void PrintMenu() {
    std::cout << "MENU" << std::endl;
    std::cout << "a - Add player" << std::endl;
    std::cout << "d - Remove player" << std::endl;
    std::cout << "u - Update player rating" << std::endl;
    std::cout << "r - Output players above a rating" << std::endl;
    std::cout << "o - Output roster" << std::endl;
    std::cout << "q - Quit" << std::endl;
    std::cout << std::endl;
    std::cout  << "Choose an option:" << std::endl;
}

void CreateRoster(std::vector<Player> &roster, const int &size) {
    int newJersey {};
    int newRating {};
    Player loadPlayer;

    for (int i = 0; i < size; i++) {
        
        std::cout << "Enter player " << i + 1 << "'s jersey number:" << std::endl;
        std::cin >> newJersey;
        std::cout << "Enter player " << i + 1 << "'s rating:" << std::endl;
        std::cin >> newRating;

        loadPlayer.jerseyNumber = newJersey;
        loadPlayer.rating = newRating;
        roster.push_back(loadPlayer);
        std::cout << std::endl;
    }
}

void OutputRoster(const std::vector<Player> &roster) {
    std::cout << "ROSTER" << std::endl;
    for (size_t i = 0; i < roster.size(); i++) {
        std::cout << "Player " << i + 1 << " -- Jersey number: " << roster.at(i).jerseyNumber << ", Rating: " << roster.at(i).rating << std::endl;
    }
    std::cout << std::endl;
}

void AddPlayer(std::vector<Player> &roster) {
    Player newPlayer;
    int jerseyNumber {};
    int playerRating {};

    std::cout << "Enter a new player's jersey number:" << std::endl;
    std::cin >> jerseyNumber;

    std::cout << "Enter the player's rating:" << std::endl;
    std::cin >> playerRating;
    std::cout << std::endl;
    newPlayer.jerseyNumber = jerseyNumber;
    newPlayer.rating = playerRating;

    roster.push_back(newPlayer);
}

void DeletePlayer(std::vector<Player> &roster) {
    int jerseyNumber {};

    std::cout << "Enter a jersey number:" << std::endl;
    std::cin >> jerseyNumber;

    for (size_t i = 0; i < roster.size(); i++) {
        if (jerseyNumber == roster.at(i).jerseyNumber) {
            roster.erase(roster.begin() + i);
        }
    }
}

void UpdatePlayer(std::vector<Player> &roster) {
    int jerseyNumber {};
    std::cout << "Enter a jersey number:" << std::endl;
    std::cin >> jerseyNumber;

    int newRating {};
    std::cout << "Enter a new rating for player:" << std::endl;
    std::cin >> newRating;

    for (size_t i = 0; i < roster.size(); i++) {
        if (jerseyNumber == roster.at(i).jerseyNumber) {
            roster.at(i).rating = newRating;
        }
    }
}

void OutputPlayersAboveRating(const std::vector<Player> &roster) {
    int threshold {};
    std::cout << "Enter a rating:" << std::endl;
    std::cin >> threshold;
    std::cout << "ABOVE " << threshold << std::endl;
    for (size_t i = 0; i < roster.size(); i++) {
        if (threshold < roster.at(i).rating) {
            std::cout << "Player " << i + 1 << " -- Jersey number: " << roster.at(i).jerseyNumber << ", Rating: " << roster.at(i).rating << std::endl;
        }
    }
    std::cout << std::endl;
}

int main() {
    const int ROSTER_SIZE = 5;
    std::vector<Player> playerRoster;

    CreateRoster(playerRoster, ROSTER_SIZE);
    OutputRoster(playerRoster);

    char userOption {};
    do {
        PrintMenu();
        std::cin >> userOption;

        switch (userOption) {
            case 'a':
                AddPlayer(playerRoster);
                break;
            case 'd':
                DeletePlayer(playerRoster);
                break;
            case 'u':
                UpdatePlayer(playerRoster);
                break;
            case 'r':
                OutputPlayersAboveRating(playerRoster);
                break;
            case 'o':
                OutputRoster(playerRoster);
                break;
            case 'q':
                break;
            default:
                std::cout << "Choose an available option" << std::endl;
        }
    } while (userOption != 'q');

    return 0;
}