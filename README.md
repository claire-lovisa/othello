# othello

To compile the program:
- "make" to get the executable Othello in the binfolder as well as the documentation
- "make tests" to obtain the executables of the unit tests in the test folder
- "make clean" to delete all the files generated by the different compilations

-------------------------------------------------- -------------------------------------------------- -----------------------------------

Once the executable is created, enter "./bin/Othello standard blanc" to run the program in player-to-computer mode,
the player has the white pawns. Replace "blanc" by "noir" to have black pawns.

Enter "./bin/Othello tournoi blanc" to play the computer against the computer with the one with the white pawns that starts.

-------------------------------------------------- -------------------------------------------------- -----------------------------------

The prerequisites for a good use of the program, in standard mode:
- when it is the human player's turn, he is led to enter the coordinates of the pawn he wishes to place:
  - the line, between 1 and 8
  - the column, between 1 and 8

The prerequisites for a good use of the program, in tournament mode:
- a shot will be expressed by a string of characters of length 3:
  - the first character will represent the column with a lowercase letter between 'a' and 'h' ;
  - the second character will represent the line with a digit between '1' and '8' ;
  - the third character will be the unix carriage return ('\n').
For example if the program wants to play the shot e5, it will write in the standard output the string of characters "e5\n";
- the final state of the part will be expressed by a string ending with the unix carriage return ('\n'):
  - "blanc\n" if the whites have won ;
  - "noir\n" if the blacks have won ;
  - "nulle\n" if the part is null.
- when the program can not play, it will use the string "passe\n" instead of the hit it could have played.

-------------------------------------------------- -------------------------------------------------- -----------------------------------

Program developed within the framework of the course "Algorithmic and Bases of Programming" in ASI3 at the INSA of Rouen by:

- Gautier DARCHEN
- Romain JUDIC
- Riadh KILANI
- Claire LOVISA
- Sandratra RASENDRASOA

Project supervised by Geraldine DEL MONDO and Nicolas DELESTRE, teachers.

Date of delivery: 05/01/16
