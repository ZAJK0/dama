
#include <iostream>


void printTable(std::string board[8][8]){
    std::cout << "CHECKERS BY ZAJAC\n";
    for (int i = 0; i < 8; i++) {
        std::cout << " - ---------------------------------\n " << 8 - i << " ";
        for (int b = 0; b < 8; b++) {
            std::cout << "|";
            if (board[i][b] == " X ") {
                std::cout << "\033[31m X \033[0m";
            }
            else if (board[i][b] == " O "){
                std::cout << "\033[36m O \033[0m";
            }
            else if (board[i][b] == " Q ") {
                std::cout << "\033[36m Q \033[0m";
            }
            else if (board[i][b] == " K ") {
                std::cout << "\033[31m K \033[0m";
            }
            else {
                std::cout << board[i][b];
            }
        }
        std::cout << "";
        std::cout << "\n";
    }
    std::cout << " - ---------------------------------\n   | a | b | c | d | e | f | g | h |\n\n";

}

void premena(char pos, int& num) {
    switch (pos) {
    case 'a':
        num = 0;
        break;
    case 'b':
        num = 1;
        break;
    case 'c':
        num = 2;
        break;
    case 'd':
        num = 3;
        break;
    case 'e':
        num = 4;
        break;
    case 'f':
        num = 5;
        break;
    case 'g':
        num = 6;
        break;
    case 'h':
        num = 7;
        break;
    default:
        std::cout << "err";

    }

}


int main() {

    std::string board[8][8] = {

        

        {" X "," - "," X "," - "," X "," - "," X "," - "},
        {" - "," X "," - "," X "," - "," X "," - "," X "},
        {" X "," - "," X "," - "," X "," - "," X "," - "},
        {" - ","   "," - ","   "," - ","   "," - ","   "},
        {"   "," - ","   "," - ","   "," - ","   "," - "},
        {" - "," O "," - "," O "," - "," O "," - "," O "},
        {" O "," - "," O "," - "," O "," - "," O "," - "},
        {" - "," O "," - "," O "," - "," O "," - "," O "},


    };


    int turn = 1;

    std::cout << "\033[97m _______  __   __  _______  _______  ___   _  _______  ______    _______ \n\033[0m";
    std::cout << "\033[97m|       ||  | |  ||       ||       ||   | | ||       ||    _ |  |       |\n\033[0m";
    std::cout << "\033[97m|       ||  |_|  ||    ___||       ||   |_| ||    ___||   | ||  |  _____|\n\033[0m";
    std::cout << "\033[97m|       ||       ||   |___ |       ||      _||   |___ |   |_||_ | |_____ \n\033[0m";
    std::cout << "\033[97m|      _||       ||    ___||      _||     |_ |    ___||    __  ||_____  |\n\033[0m";
    std::cout << "\033[36m|     |_ |   _   ||   |___ |     |_ |    _  ||   |___ |   |  | | _____| |\n\033[0m";
    std::cout << "\033[36m|_______||__| |__||_______||_______||___| |_||_______||___|  |_||_______|\n\033[0m";
    std::cout << "\033[36m _______  __   __      _______  _______      ___  ___   _  _______\n\033[0m";
    std::cout << "\033[36m|  _    ||  | |  |    |       ||   _   |    |   ||   | | ||       |\n\033[0m";
    std::cout << "\033[31m| |_|   ||  |_|  |    |____   ||  |_|  |    |   ||   |_| ||   _   |\n\033[0m";
    std::cout << "\033[31m|       ||       |     ____|  ||       |    |   ||      _||  | |  |\n\033[0m";
    std::cout << "\033[31m|  _   | |_     _|    | ______||       | ___|   ||     |_ |  |_|  |\n\033[0m";
    std::cout << "\033[31m| |_|   |  |   |      | |_____ |   _   ||       ||    _  ||       |\n\033[0m";
    std::cout << "\033[31m|_______|  |___|      |_______||__| |__||_______||___| |_||_______|\n\033[0m\n\n";






    std::cout << "choose gamemode:\n1. SANDBOX\n2. PVP\ngamemode:";
    int gamemode;
    std::cin >> gamemode;
  
    int bodyX =  0;
    int bodyO = 0;


    while (true) {
        system("cls");
        printTable(board);
        std::cout << "  \033[31mX:\033[0m " << bodyX << "                          \033[36m O:\033[0m " << bodyO<<"\n";
        if (turn%2 == 1) {
            std::cout << "             ITS O TURN\n";
        }
        else {
            std::cout << "             ITS X TURN\n";
        }

        

        if (gamemode == 1) {
            char posc1;
            int posr1;
            char posc2;
            int posr2;
            std::cout << "collumn: ";
            std::cin >> posc1;
            std::cout << "row: ";
            std::cin >> posr1;
            std::cout << "collumn to go: ";
            std::cin >> posc2;
            std::cout << "row to go: ";
            std::cin >> posr2;
            std::cout << '\n';

            int num1 = 0;
            int num2 = 0;

            premena(posc1, num1);

            premena(posc2, num2);


            std::string temp = board[8 - posr1][num1];
            board[8 - posr1][num1] = board[8 - posr2][num2];
            board[8 - posr2][num2] = temp;
            turn = turn + 1;
            system("cls");
        }

        else if (gamemode == 2) {
            char posc1;
            int posr1;
            char posc2;
            int posr2;
            std::cout << "collumn: ";
            std::cin >> posc1;
            std::cout << "throw: ";
            std::cin >> posr1;
            std::cout << "collumn to go: ";
            std::cin >> posc2;
            std::cout << "row to go: ";
            std::cin >> posr2;
            std::cout << '\n';

            int num1 = 0;
            int num2 = 0;

            premena(posc1, num1);

            premena(posc2, num2);

            if (board[8 - posr2][num2] == " - " || board[8 - posr1][num1] == " - " || board[8 - posr1][num1] == "   ") {
                std::cout << "YOU CANT MOVE GAP";
            }


            else if (turn % 2 == 0 && (board[8 - posr1][num1] == " O " || board[8 - posr1][num1] == " Q ")) {
                std::cout << "YOU CAN MOVE JUST YOUR PIECE";
            }

            else if (turn % 2 == 1 && (board[8 - posr1][num1] == " X " || board[8 - posr1][num1] == " K ")) {
                std::cout << "YOU CAN MOVE JUST YOUR PIECE";
            }

            else if (board[8 - posr2][num2] == " X " || board[8 - posr2][num2] == " O " || board[8 - posr2][num2] == " K " || board[8 - posr2][num2] == " Q ") {
                std::cout << "THERE IS ALREADY PEACE";
            }

            else if (num1 - num2 >= 3 || num2 - num1 >= 3 || posr1 - posr2 >= 3 || posr2 - posr1 >= 3) {
                std::cout << "YOU MOVED TOO FAR";
            }

            else if ((posr1 < posr2 || board[8 - posr1][num1] == " O ") && (posr2 < posr1 || board[8 - posr1][num1] == " X ")) {
                std::cout << "YOU CANT GO BACKWARD";
            }




            else {
                if (num1 - num2 == 2 || num2 - num1 == 2 && posr1 - posr2 == 2 || posr2 - posr1 == 2) {
                    std::string pl;
                    int res = 0;
                    if ((board[(8 - posr1 + 8 - posr2) / 2][(num1 + num2) / 2] == " O " && turn % 2 == 0) || (board[(8 - posr1 + 8 - posr2) / 2][(num1 + num2) / 2] == " Q " && turn % 2 == 0)) {
                        board[(8 - posr1 + 8 - posr2) / 2][(num1 + num2) / 2] = "   ";
                        bodyX++;

                        for (int i = 0; i < 8; i++) {
                            for (int b = 0; b < 8; b++) {
                                if (board[i][b] == " O " || board[i][b] == " Q ") {
                                    res = 10;
                                    pl = "X";
                                    
                                }

                            }
                        }

                    }
                    else if ((board[(8 - posr1 + 8 - posr2) / 2][(num1 + num2) / 2] == " X " && turn % 2 == 1) || (board[(8 - posr1 + 8 - posr2) / 2][(num1 + num2) / 2] == " K " && turn % 2 == 1)) {
                        board[(8 - posr1 + 8 - posr2) / 2][(num1 + num2) / 2] = "   ";
                        bodyO++;
                        
                        for (int i = 0; i < 8; i++) {
                            for (int b = 0; b < 8; b++) {
                                if (board[i][b] == " X " || board[i][b] == " K ") {
                                    res = 10;
                                    pl = "O";
                                    
                                }
                            }
                        }



                    }
                    

                    if (res == 0) {
                        std::cout << pl << "YOU HAVE WON DO YOU WANT TO CONTINUE?\n1. yes 2. no\n";
                        int con;
                        std::cin >> con;
                        if (con == 1) {
                            system("cls");

                            main();
                        }
                        else {
                            system("cls");

                            return 0;
                        }
                    }



                }
                if (posr2 == 8 && board[8 - posr1][num1] == " O ") {
                    board[8 - posr1][num1] = " Q ";
                }

                if (posr2 == 1 && board[8 - posr1][num1] == " X ") {
                    board[8 - posr1][num1] = " K ";
                }

                std::string temp = board[8 - posr1][num1];
                board[8 - posr1][num1] = board[8 - posr2][num2];
                board[8 - posr2][num2] = temp;

                turn = turn + 1;

            }

            int popo;
            std::cin.get();
            std::cin.get();


        }

        /*if (gamemode == 3) {
            char posc1;
            int posr1;
            char posc2;
            int posr2;
            int num1 = 0;
            int num2 = 0;
            if (charnum == 1 && turn%2 == 1) {
                
                std::cout << "collumn: ";
                std::cin >> posc1;
                std::cout << "throw: ";
                std::cin >> posr1;
                std::cout << "collumn to go: ";
                std::cin >> posc2;
                std::cout << "row to go: ";
                std::cin >> posr2;
                std::cout << '\n';

                

                premena(posc1, num1);

                premena(posc2, num2);
            }
            std::string character;
            int charCount = 0;

            if (charnum == 1) {
                character = " X ";
            }
            if (turn % 2 == 0) {

                //for (int x = 0; x < 8; x++) {
                //    for (int y = 0; y < 8; y++) {
                //        if (board[x][y] == character);
                 //       charCount++;
                //    }
                //}

                
                for (int x = 0; x < 8; x++) {
                    for (int y = 0; y < 8; y++) {
                        if (board[x][y] == " X "|| board[x][y] == " K ") {
                            
                            if (charCount == 0) {
                                posr1 = x;
                                num1 = y;
                                
                                posr2 = posr1 - 1;
                                
                                
                                num2 = num1 + 1;
                            }
                        }
                    }
                }
            }




            if (board[8 - posr2][num2] == " - " || board[8 - posr1][num1] == " - " || board[8 - posr1][num1] == "   ") {
                std::cout << "PLEASE CHOOSE PIECE";
            }


            else if (turn % 2 == 0 && (board[8 - posr1][num1] == " O " || board[8 - posr1][num1] == " Q ")) {
                std::cout << "YOU CAN MOVE JUST YOUR PIECE";
            }

            else if (turn % 2 == 1 && (board[8 - posr1][num1] == " X " || board[8 - posr1][num1] == " K ")) {
                std::cout << "YOU CAN MOVE JUST YOUR PIECE";
            }

            else if (board[8 - posr2][num2] == " X " || board[8 - posr2][num2] == " O " || board[8 - posr2][num2] == " K " || board[8 - posr2][num2] == " Q ") {
                std::cout << "THERE IS ALREADY PEACE";
            }

            else if (num1 - num2 >= 3 || num2 - num1 >= 3 || posr1 - posr2 >= 3 || posr2 - posr1 >= 3) {
                std::cout << "YOU MOVED TOO FAR";
            }

            else if ((posr1 < posr2 || board[8 - posr1][num1] == " O ") && (posr2 < posr1 || board[8 - posr1][num1] == " X ")) {
                std::cout << "YOU CANT GO BACKWARD";
            }




            else {
                if (num1 - num2 == 2 || num2 - num1 == 2 && posr1 - posr2 == 2 || posr2 - posr1 == 2) {
                    std::string pl;
                    int res = 0;
                    if ((board[(8 - posr1 + 8 - posr2) / 2][(num1 + num2) / 2] == " O " && turn % 2 == 0) || (board[(8 - posr1 + 8 - posr2) / 2][(num1 + num2) / 2] == " Q " && turn % 2 == 0)) {
                        board[(8 - posr1 + 8 - posr2) / 2][(num1 + num2) / 2] = "   ";

                        for (int i = 0; i < 8; i++) {
                            for (int b = 0; b < 8; b++) {
                                if (board[i][b] == " O " || board[i][b] == " Q ") {
                                    res = 10;
                                    pl = "X";

                                }

                            }
                        }

                    }
                    else if ((board[(8 - posr1 + 8 - posr2) / 2][(num1 + num2) / 2] == " X " && turn % 2 == 1) || (board[(8 - posr1 + 8 - posr2) / 2][(num1 + num2) / 2] == " K " && turn % 2 == 1)) {
                        board[(8 - posr1 + 8 - posr2) / 2][(num1 + num2) / 2] = "   ";
                        for (int i = 0; i < 8; i++) {
                            for (int b = 0; b < 8; b++) {
                                if (board[i][b] == " X " || board[i][b] == " K ") {
                                    res = 10;
                                    pl = "O";
                                }
                            }
                        }



                    }
                    system("cls");
                    printTable(board);

                    if (res == 0) {
                        std::cout << pl << "YOU HAVE WON DO YOU WANT TO CONTINUE?\n1. yes 2. no\n";
                        int con;
                        std::cin >> con;
                        if (con == 1) {
                            system("cls");

                            main();
                        }
                        else {
                            system("cls");
                            return 0;
                        }
                    }
                }
                if (posr2 == 8 && board[8 - posr1][num1] == " O ") {
                    board[8 - posr1][num1] = " Q ";
                }
               if (posr2 == 1 && board[8 - posr1][num1] == " X ") {
                    board[8 - posr1][num1] = " K ";
                }

                std::string temp = board[8 - posr1][num1];
                board[8 - posr1][num1] = board[8 - posr2][num2];
                board[8 - posr2][num2] = temp;

                turn = turn + 1;

            }

            std::cin.get();

        }*/
    }
}
