Election Voting System User Manual

Introduction:
The Election Voting System program allows users to participate in a simulated election by casting votes for candidates. It also provides features to view voting statistics and identify leading candidates based on the votes received.

System Requirements:

Operating System: Windows, Linux, or macOS
Compiler: Any C compiler (e.g., GCC, Visual Studio, Code::Blocks)
Installation:

Download the C source code file (election_voting_system.c) to your computer.
Compile the source code using a C compiler. For example, use the command gcc election_voting_system.c -o election_voting_system in the terminal (replace gcc with your compiler's command if different).
Run the compiled executable file (election_voting_system or election_voting_system.exe).
Usage:

Main Menu:

Upon launching the program, you will see a main menu with the following options:
1. Cast the Vote: Allows you to cast a vote for one of the listed candidates or spoil your vote.
2. Find Vote Count: Provides access to view voting statistics. You need to enter a password (11111) to unlock this feature.
3. Find Leading Candidate: Allows you to check which candidate is currently leading. Password (11111) is required to unlock this feature.
0. Exit: Terminates the program.
Casting a Vote:

Choose option 1 from the main menu.
Select your candidate from the list presented (options 1 to 4) or choose option 5 to spoil your vote.
Confirmation of your vote will be displayed once cast.
Viewing Vote Count:

Choose option 2 from the main menu and enter the password (11111).
The program will display the total votes received by each candidate and the number of spoiled votes.
Finding Leading Candidate:

Choose option 3 from the main menu and enter the password (11111).
The program will identify and display the candidate with the highest number of votes.
If there is a tie or no candidate leads significantly, a message indicating a no-win situation will be shown.
Exiting the Program:

Choose option 0 from the main menu to exit the program.
Security Note:

Ensure to keep the password (11111) confidential to prevent unauthorized access to voting statistics and leading candidate information.
