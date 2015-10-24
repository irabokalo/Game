#include<iostream>
#include<string>
#include<fstream>
using namespace std;
bool tell_the_truth(string answer)
{
    bool k;
    if (answer == "yes")
    {
        return true;
    }

    else
    {
        if (answer == " no")
        {
            return false;
        }
    }
}
bool isValid(string s)
{
    if((s=="yes")||(s=="no"))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void main()
{
    int win = 0, lose = 0, draw = 0;
    cout << "Play?"<<endl;
    string answer;
    cin>>answer;
    bool check = isValid(answer);
    if(check)
    {
    bool desire = tell_the_truth(answer);
    while (desire == true)
    {

        cout << "Enter Rock, Scissors or Paper :";
        string decision;
        cin>>decision;
        int comp_solution;
        string solution;
        comp_solution = rand() % 3;
        if (comp_solution == 1)
        {

            solution = "Rock";
        }
        if (comp_solution == 2)
        {
            solution = "Paper";

        }
        if (comp_solution == 3)
        {
            solution = "Scissors";

        }
        cout << "Computer choice:" << solution << endl;
        if (decision == "Rock")
        {
            if (solution == "Rock")
            {

                draw++;
                cout << "Draw"<<endl;
            }
            if (solution == "Paper")
            {
                lose++;
                cout << "you lose"<<endl;
            }
            if (solution == "Scissors")
            {
                win++;
                cout << "you win"<<endl;
            }
        }
        if (decision == "Paper")
        {
            if (solution == "Rock")
            {
                win++;
                cout << "you win"<<endl;
            }
            if (solution == "Paper")
            {
                draw++;
                cout << "Draw"<<endl;
            }
            if (solution == "Scissors")
            {
                lose++;
                cout << "you lose"<<endl;
            }
        }
        if (decision == "Scissors")
        {
            if (solution == "Rock")
            {
                lose++;
                cout << "you lose";
            }
            if (solution == "Paper")
            {
                win++;
                cout << "you win"<<endl;
            }
            if (solution == "Scissors")
            {
                draw++;
                cout << "you draw"<<endl;
            }

        }
        cout << "play again:"<<endl;
        cin >> answer;
        if(isValid(answer)==true)
        {

        desire = tell_the_truth(answer);
        }
        else
        {
            desire =false;
            cout<<"Incorrect answer, good bye"<<endl;
        }
    }
   }
    else
    {
        cout<<"Incorrect answer, you must input yes or no"<<endl;
    }
    cout<<"You win " << win<< "times"<<endl;
    cout<<"You lose " << lose<< "times"<<endl;
    cout<<"Draw " << draw<< " times"<<endl;
    system("pause");
}
