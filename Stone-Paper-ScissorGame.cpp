#include <bits/stdc++.h>
using namespace std;

int main()
{
    int score_comp = 0, score_player = 0;
    cout << "Valid choices: stone, paper, scissor." << endl;
    while (score_comp < 2 || score_comp < 2)
    {
        cout << "enter choice: ";

        string player_choice_str;
        getline(cin, player_choice_str);
        int player_choice = 0;
        if (player_choice_str == "stone")
        {
            player_choice = 0;
        }
        else if (player_choice_str == "paper")
        {
            player_choice = 1;
        }
        else if (player_choice_str == "scissor")
        {
            player_choice = 2;
        }

        int computer_choice;
        computer_choice = rand() % 3;

        if (computer_choice == 0)
        {
            cout << "computer choice: stone" << endl;
        }
        else if (computer_choice == 1)
        {
            cout << "computer choice: paper" << endl;
        }
        else if (computer_choice == 2)
        {
            cout << "computer choice: scissor" << endl;
        }

        if (computer_choice == player_choice)
        {
            cout << "Same choice! Try Again." << endl;
        }
        else
        {
            if (computer_choice == 0 && player_choice == 1)
            {
                score_player++;
                cout << "player wins the round!" << endl;
            }
            else if (computer_choice == 0 && player_choice == 2)
            {
                score_comp++;
                cout << "computer wins the round!" << endl;
            }
            else if (computer_choice == 1 && player_choice == 0)
            {
                score_comp++;
                cout << "computer wins the round!" << endl;
            }
            else if (computer_choice == 1 && player_choice == 2)
            {
                score_player++;
                cout << "player wins the round!" << endl;
            }
            else if (computer_choice == 2 && player_choice == 0)
            {
                score_player++;
                cout << "player wins the round!" << endl;
            }
            else if (computer_choice == 2 && player_choice == 1)
            {
                score_comp++;
                cout << "computer wins the round!" << endl;
            }
        }
        cout << "\n** Score **\n=>Computer: " << score_comp << endl;
        cout << "=>Player: " << score_player << "\n"
             << endl;
    }
    return 0;
}
