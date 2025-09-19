//pS=(player Score)
//cS=(computer Score)
//gCC=(Get Computer Choice)
//uC=(user Choice)
//cC=(computer Choice)
//dS=(display Score)
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
string gCC()
{
    int random = rand() % 3;
    string choices[] = {"rock", "paper", "scissors"};
    return choices[random];
}
string Winner(string uC, string cC)
{
    if (uC == cC)
	{
        return "\t\t\t\t\t\t\t  It's a tie!";
    }
	else if ((uC == "rock" && cC == "scissors") ||
               (uC == "paper" && cC == "rock") ||
               (uC == "scissors" && cC == "paper"))
			   {
        			return "\t\t\t\t\t\t\t   You win!";
    }
	else
	{
        return "\t\t\t\t\t\t\t  Computer wins!";
    }
}
void display(string choice)
{
    if (choice == "rock")
	{    
		cout<<"\t\t\t\t\t\t\t    \033[32m_________\033[0m       "<<endl;
		cout<<"\t\t\t\t\t\t\t   \033[32m/ ooooooo \\\033[0m     "<<endl;
		cout<<"\t\t\t\t\t\t\t  \033[32m/ ooooooooo \\\033[0m    "<<endl;
		cout<<"\t\t\t\t\t\t\t \033[32m|ooooooooooooo|\033[0m    "<<endl;
		cout<<"\t\t\t\t\t\t\t  \033[32m\\ ooooooooo /\033[0m    "<<endl;
		cout<<"\t\t\t\t\t\t\t   \033[32m\\ ooooooo /\033[0m     "<<endl;
		cout<<"\t\t\t\t\t\t\t    \033[32m_________\033[0m       "<<endl;
	} 	
	else if (choice == "paper")
	{
		cout<<"\t\t\t\t\t\t\t  \033[32m_____________\033[0m"<<endl;
		cout<<"\t\t\t\t\t\t\t  \033[32m|---Paper---|\033[0m"<<endl;
		cout<<"\t\t\t\t\t\t\t  \033[32m|-----------|\033[0m"<<endl;
		cout<<"\t\t\t\t\t\t\t  \033[32m|-----------|\033[0m"<<endl;
		cout<<"\t\t\t\t\t\t\t  \033[32m|-----------|\033[0m"<<endl;
		cout<<"\t\t\t\t\t\t\t  \033[32m|___________|\033[0m"<<endl;
	} 
	else if (choice == "scissors")
	{
		cout<<"\t\t\t\t\t\t\t             \033[32m___________\033[0m"<<endl;
		cout<<"\t\t\t\t\t\t\t \033[32m____       \033[32m/          |\033[0m"<<endl;
		cout<<"\t\t\t\t\t\t\t\033[32m|    |     \033[32m/__________/\033[0m"<<endl;
		cout<<"\t\t\t\t\t\t\t\033[32m|____|-----\033[0m"<<endl;
		cout<<"\t\t\t\t\t\t\t \033[32m____\033[32m---[]\033[0m"<<endl;
		cout<<"\t\t\t\t\t\t\t\033[32m|    |-----\033[32m___________\033[0m"<<endl;
		cout<<"\t\t\t\t\t\t\t\033[32m|____|     \033[32m\\          \\\033[0m"<<endl;
		cout<<"\t\t\t\t\t\t\t            \033[32m\\__________|\033[0m"<<endl;
	}
}
void dS(int pS, int cS)
{
    cout<<"\r";
	cout<<"\t\t\t\033[40m\033[32m============================\033[0m"<<"\t\t\t\033[40m\033[32m============================\033[0m"<<endl;
	cout<<"\t\t\t\033[40m\033[32m|\033[0m"<<"      (Player score)      "<<"\033[40m\033[32m|\033[0m"<<"\t\t\t\033[40m\033[32m|\033[0m"<<"     (Computer score)     "<<"\033[40m\033[32m|\033[0m"<<endl;
	cout<<"\t\t\t\033[40m\033[32m|                          |\033[0m"<<"\t\t\t\033[40m\033[32m|                          |\033[0m"<<endl;
	cout<<"\t\t\t\033[40m\033[32m|                          |\033[0m"<<"\t\t\t\033[40m\033[32m|                          |\033[0m"<<endl;
	cout<<"\t\t\t\033[40m\033[32m|                          |\033[0m"<<"\t\t\t\033[40m\033[32m|                          |\033[0m"<<endl;
	cout<<"\t\t\t\033[40m\033[32m|                          |\033[0m"<<"\t\t\t\033[40m\033[32m|                          |\033[0m"<<endl;
	cout<<"\t\t\t\033[40m\033[32m|                          |\033[0m"<<"\t\t\t\033[40m\033[32m|                          |\033[0m"<<endl;
	cout<<"\t\t\t\033[40m\033[32m|                          |\033[0m"<<"\t\t\t\033[40m\033[32m|                          |\033[0m"<<endl;
	cout<<"\t\t\t\033[40m\033[32m|\033[0m             " << pS << "            \033[40m\033[32m|\033[0m"<<"\t\t\t\033[40m\033[32m|\033[0m             "<<cS<<"            \033[40m\033[32m|\033[0m"<<endl;
	cout<<"\t\t\t\033[40m\033[32m============================\033[0m"<<"\t\t\t\033[40m\033[32m============================\033[0m"<<endl;
}
int main()
{
    srand(time(0));
    string uC;
    string cC;
    string name;
    char playAgain;
    int pS = 0;
    int cS = 0;
    cout<<" \t\t\t\t\t\033[1;32m============================================\033[0m"<<endl;
    cout<<" \t\t\t\t      \033[1;32m==|\033[0m"<<"      Welcome to Rock-Paper-Scissors!     "<<"\033[1;32m|==\033[0m"<<endl;
    cout<<" \t\t\t\t    \033[1;32m====|\033[0m"<<"      This game is brought to you by      "<<"\033[1;32m|====\033[0m"<<endl;
    cout<<" \t\t\t\t    \033[1;32m====|\033[0m"<<"           Muhammad Abdullah!             "<<"\033[1;32m|====\033[0m"<<endl;
    cout<<" \t\t\t\t      \033[1;32m==|\033[0m"<<"  Taimoor Haider & Muhammad Rahim Cheema  "<<"\033[1;32m|====\033[0m"<<endl;
    cout<<" \t\t\t\t\t\033[1;32m============================================\033[0m"<<endl;
    cout<<" \t\t\t\t\t       Please Enter your Name: ";
    cin>>name;
    cout<<" \t\t\t\t\t\t   Greeting Mr."<<name<<endl;
    do 
    {
        dS(pS, cS);
        cout<<" \t\t\t\t\t\t    Enter your choice \n\t\t\t\t\t\t Rock, Paper, or Scissors: ";
        cin>>uC;    
        if (uC == "L" || uC == "l")
        {
            cout << "Game stopped. Goodbye!" << endl;
            break;
        }
        while (uC!= "rock" && uC!= "paper" && uC!= "scissors")
        {
            cout << "Invalid input. Please enter rock, paper, or scissors: ";
            cin >> uC;
        }
        cC=gCC();
        cout<<" \t\t\t\t\t\t    Your choice: "<<uC<<endl;
        display(uC);
        cout<<endl;
        cout<<" \t\t\t\t\t\t    Computer chose: "<<cC<<endl;
        display(cC);
        cout<<" "<<Winner(uC, cC)<<"               " <<endl;
        if (Winner(uC, cC) == "\t\t\t\t\t\t\t   You win!")
            pS++;
        else if (Winner(uC, cC) == "\t\t\t\t\t\t\t  Computer wins!")
            cS++;
        cout<<" Do you want to play again? (Y/N): ";
        cin>>playAgain;
    } 
    while (playAgain == 'Y' || playAgain == 'y');
    return 0;
}