/* C++ assessment */

#include <iostream> 
 #include <string> 
 #include <cstdlib> 
 #include <ctime> 
 using namespace std; 
  
 int main(){ 
     int roundsToPlay; 
     string playerName; 
     cout<<"Enter your name: "; 
     getline(cin, playerName); 
     cout<<"Enter the number of rounds to play: "; 
     cin>>roundsToPlay; 
  
     int playerScore = 0; 
     int computerScore = 0; 
  
     srand(time(0)); 
  
     for (int round = 1; round <= roundsToPlay; round++) { 
         int playerChoice, computerChoice; 
  
         cout << "\nRound " << round << ": " << endl; 
         cout << "Enter your choice (1: Rock, 2: Paper, 3: Scissors): "; 
         cin >> playerChoice; 
  
         computerChoice = rand() % 3 + 1; 
  
         cout << "Computer chose: "; 
         switch (computerChoice) { 
             case 1: 
                 cout << "Rock" << endl; 
                 break; 
             case 2: 
                 cout << "Paper" << endl; 
                 break; 
             case 3: 
                 cout << "Scissors" << endl; 
                 break; 
         } 
  
         // Determine the winner of the round 
         if ((playerChoice == 1 && computerChoice == 3) || 
             (playerChoice == 2 && computerChoice == 1) || 
             (playerChoice == 3 && computerChoice == 2)) { 
             cout << playerName << " wins this round!" << endl; 
             playerScore++; 
         } else if ((computerChoice == 1 && playerChoice == 3) || 
                    (computerChoice == 2 && playerChoice == 1) || 
                    (computerChoice == 3 && playerChoice == 2)) { 
             cout << "Computer wins this round!" << endl; 
             computerScore++; 
         } else { 
             cout << "It's a tie!" << endl; 
         } 
     } 
  
     cout << "\nGame over!\n"; 
     cout << "Final scores:\n"; 
     cout << playerName << ": " << playerScore << " points\n"; 
     cout << "Computer: " << computerScore << " points\n"; 
  
     if (playerScore > computerScore) { 
         cout << playerName << " wins the game!" << endl; 
     } else if (playerScore < computerScore) { 
         cout << "Computer wins the game!" << endl; 
     } else { 
         cout << "It's a tie game!" << endl; 
     } 
  
     return 0; 
 }