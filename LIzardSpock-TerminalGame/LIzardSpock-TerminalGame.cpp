// LIzardSpock-TerminalGame.cpp : This file creates a variation of the popular game rock, paper, scissors. Idea taken from the show: 
// The Big Bang Theory.
//

#include <iostream>
#include <cstdlib>

int main()
{
    //Setting variables
    int user;
    int comp;

    //Setting seed
    srand((unsigned)time(NULL));

    //Setting computer choice
    comp = 1 + (rand() % 5);


    // Introduction to the game and rules
    std::cout << "Welcome to ROCK, PAPER, SCISSORS, LIZARD, SPOCK!!!\n";

    std::cout << "\n";
    std::cout << "\n";

    std::cout << "You'll be playing against a very smart computer who's goal is to beat your choices!\n";
    std::cout << "You're probably already familiar with the traditional rock, paper, scissors game, so here's the addtional rules you'll need to know:\n";

    std::cout << "\n";
    std::cout << "\n";

    std::cout << "    1. Rock crushes Lizard\n";
    std::cout << "    2. Lizard poisons Spock\n";
    std::cout << "    3. Spock crushes Scissors\n";
    std::cout << "    4. Scissors beats Lizard\n";
    std::cout << "    5. Lizard eats Paper\n";
    std::cout << "    6. Paper disproves Spock\n";
    std::cout << "    7. Spock vaporizes Rock\n";

    std::cout << "\n";
    std::cout << "\n";

    std::cout << "Here are your options:\n";

    std::cout << "\n";
    std::cout << "\n";

    std::cout << "    Select '1' for Rock\n";
    std::cout << "    Select '2' for Paper\n";
    std::cout << "    Select '3' for Scissors\n";
    std::cout << "    Select '4' for Lizard\n";
    std::cout << "    Select '5' for Spock\n";

    //User makes their choice
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Please enter a number and press enter to make your choice:\n";
    std::cin >> user;

    //Handles incorrect input
    while (!(user == 1 || user == 2 || user == 3 || user == 4 || user == 5)) {
        std::cout << "Your selection is incorrect. Please enter a number from 1 to 5, and then press enter: \n";
        std::cin >> user;
    }

    //Handling a draw
    if (user == comp) {
        std::cout << "It's a DRAW!!\n";
        std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'               `$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
            "$$$$$$$$$$$$$$$$$$$$$$$$$$$$'                   `$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
            "$$$'`$$$$$$$$$$$$$'`$$$$$$!                       !$$$$$$'`$$$$$$$$$$$$$'`$$$\n"
            "$$$$  $$$$$$$$$$$  $$$$$$$                         $$$$$$$  $$$$$$$$$$$  $$$$\n"
            "$$$$.  `$' \' \$`  $$$$$$$!                          !$$$$$$$  '$/ `/ `$' .$$$$\n"
            "$$$$$.  !\  i  i .$$$$$$$$                           $$$$$$$$. i  i  /! .$$$$$\n"
            "$$$$$$   `--`--.$$$$$$$$$                           $$$$$$$$$.--'--'   $$$$$$\n"
            "$$$$$$L        `$$$$$^^$$                           $$^^$$$$$'        J$$$$$$\n"
            "$$$$$$$.   .'     ~   $$$    $.                 .$  $$$   ~   `.   .$$$$$$$$$\n"
            "$$$$$$$$.  ;      .e$$$$$!    $$.             .$$  !$$$$$e,      ;  .$$$$$$$$\n"
            "$$$$$$$$$   `.$$$$$$$$$$$$     $$$.         .$$$   $$$$$$$$$$$$.'   $$$$$$$$$\n"
            "$$$$$$$$    .$$$$$$$$$$$$$!     $$`$$$$$$$$'$$    !$$$$$$$$$$$$$.    $$$$$$$$\n"
            "$JT&yd$     $$$$$$$$$$$$$$$$.    $    $$    $   .$$$$$$$$$$$$$$$$     $by&TL$\n"
            "                                 $    $$    $\n"
            "                                 $.   $$   .$\n"
            "                                 `$        $'\n"
            "                                  `$$$$$$$$'\n";


        return 0;
    }

    //Scissor v Paper
    if (user == 3 && comp == 2) {
        std::cout << "You chose Scissors and the computer chose Paper!\n";
        std::cout << "YOU WIN! CONGRATULATIONS!\n";
        std::cout << "        ,,,,,,,,,,,,,\n";
        std::cout << "    .;;;;;;;;;;;;;;;;;;;,.\n";
        std::cout << "  .;;;;;;;;;;;;;;;;;;;;;;;;,\n";
        std::cout << ".;;;;;;;;;;;;;;;;;;;;;;;;;;;;.\n";
        std::cout << ";;;;;@;;;;;;;;;;;;;;;;;;;;;;;;' .............\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'.................\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'...................\n";
        std::cout << "`;;;;@;;;;;;;;;;;;;;;@;;;;;;;'.....................\n";
        std::cout << " `;;;;;;;;;;;;;;;;;;;@@;;;;;'..................;....\n";
        std::cout << "   `;;;;;;;;;;;;;;;;@@;;;;'....................;;...\n";
        std::cout << "     `;;;;;;;;;;;;;@;;;;'...;.................;;....\n";
        std::cout << "        `;;;;;;;;;;;;'   ...;;...............;.....\n";
        std::cout << "           `;;;;;;'        ...;;..................\n";
        std::cout << "              ;;              ..;...............\n";
        std::cout << "              `                  ............\n";
        std::cout << "             `                      ......\n";
        std::cout << "            `                         ..\n";
        std::cout << "           `                           '\n";
        std::cout << "          `                           '\n";
        std::cout << "         `                           '\n";
        std::cout << "        `                           `\n";
        std::cout << "        `                           `,\n";
        std::cout << "        `\n";
        std::cout << "         `\n";
        std::cout << "           `.\n";

        return 0;
    }
    else if (comp == 3 && user == 2) {
        std::cout << "You chose Paper and the computer chose Scissors.\n";
        std::cout << "Sorry, you lost this one! Try again?\n";
        std::cout << "     .-......-.\n"
            "   .'          '.\n"
            "  /   O      O   \\\n"
            " :           `    :\n"
            " |                |\n"
            " :    .------.    :\n"
            "  \  '        '  /\n"
            "   '.          .'\n"
            "     '-......-'\n";

        return 0;
    }

    //Paper v Rock
    if (user == 2 && comp == 1) {
        std::cout << "You chose Paper and the computer chose Rock!\n";
        std::cout << "YOU WIN! CONGRATULATIONS!\n";
        std::cout << "        ,,,,,,,,,,,,,\n";
        std::cout << "    .;;;;;;;;;;;;;;;;;;;,.\n";
        std::cout << "  .;;;;;;;;;;;;;;;;;;;;;;;;,\n";
        std::cout << ".;;;;;;;;;;;;;;;;;;;;;;;;;;;;.\n";
        std::cout << ";;;;;@;;;;;;;;;;;;;;;;;;;;;;;;' .............\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'.................\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'...................\n";
        std::cout << "`;;;;@;;;;;;;;;;;;;;;@;;;;;;;'.....................\n";
        std::cout << " `;;;;;;;;;;;;;;;;;;;@@;;;;;'..................;....\n";
        std::cout << "   `;;;;;;;;;;;;;;;;@@;;;;'....................;;...\n";
        std::cout << "     `;;;;;;;;;;;;;@;;;;'...;.................;;....\n";
        std::cout << "        `;;;;;;;;;;;;'   ...;;...............;.....\n";
        std::cout << "           `;;;;;;'        ...;;..................\n";
        std::cout << "              ;;              ..;...............\n";
        std::cout << "              `                  ............\n";
        std::cout << "             `                      ......\n";
        std::cout << "            `                         ..\n";
        std::cout << "           `                           '\n";
        std::cout << "          `                           '\n";
        std::cout << "         `                           '\n";
        std::cout << "        `                           `\n";
        std::cout << "        `                           `,\n";
        std::cout << "        `\n";
        std::cout << "         `\n";
        std::cout << "           `.\n";

        return 0;
    } else if (comp == 2 && user == 1) {
        std::cout << "You chose Rock and the computer chose Paper.\n";
        std::cout << "Sorry, you lost this one! Try again?\n";
        std::cout << "     .-......-.\n"
            "   .'          '.\n"
            "  /   O      O   \\\n"
            " :           `    :\n"
            " |                |\n"
            " :    .------.    :\n"
            "  \  '        '  /\n"
            "   '.          .'\n"
            "     '-......-'\n";

        return 0;
    }

    //Rock v Scissors
    if (user == 1 && comp == 3) {
        std::cout << "You chose Rock and the computer chose Scissors!\n";
        std::cout << "YOU WIN! CONGRATULATIONS!\n";
        std::cout << "        ,,,,,,,,,,,,,\n";
        std::cout << "    .;;;;;;;;;;;;;;;;;;;,.\n";
        std::cout << "  .;;;;;;;;;;;;;;;;;;;;;;;;,\n";
        std::cout << ".;;;;;;;;;;;;;;;;;;;;;;;;;;;;.\n";
        std::cout << ";;;;;@;;;;;;;;;;;;;;;;;;;;;;;;' .............\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'.................\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'...................\n";
        std::cout << "`;;;;@;;;;;;;;;;;;;;;@;;;;;;;'.....................\n";
        std::cout << " `;;;;;;;;;;;;;;;;;;;@@;;;;;'..................;....\n";
        std::cout << "   `;;;;;;;;;;;;;;;;@@;;;;'....................;;...\n";
        std::cout << "     `;;;;;;;;;;;;;@;;;;'...;.................;;....\n";
        std::cout << "        `;;;;;;;;;;;;'   ...;;...............;.....\n";
        std::cout << "           `;;;;;;'        ...;;..................\n";
        std::cout << "              ;;              ..;...............\n";
        std::cout << "              `                  ............\n";
        std::cout << "             `                      ......\n";
        std::cout << "            `                         ..\n";
        std::cout << "           `                           '\n";
        std::cout << "          `                           '\n";
        std::cout << "         `                           '\n";
        std::cout << "        `                           `\n";
        std::cout << "        `                           `,\n";
        std::cout << "        `\n";
        std::cout << "         `\n";
        std::cout << "           `.\n";

        return 0;
    }
    else if (comp == 3 && user == 1) {
        std::cout << "You chose Scissors and the computer chose Rock.\n";
        std::cout << "Sorry, you lost this one! Try again?\n";
        std::cout << "     .-......-.\n"
            "   .'          '.\n"
            "  /   O      O   \\\n"
            " :           `    :\n"
            " |                |\n"
            " :    .------.    :\n"
            "  \  '        '  /\n"
            "   '.          .'\n"
            "     '-......-'\n";

        return 0;
    }

    //Rock v Lizard
    if (user == 1 && comp == 4) {
        std::cout << "You chose Rock and the computer chose Lizard!\n";
        std::cout << "YOU WIN! CONGRATULATIONS!\n";
        std::cout << "        ,,,,,,,,,,,,,\n";
        std::cout << "    .;;;;;;;;;;;;;;;;;;;,.\n";
        std::cout << "  .;;;;;;;;;;;;;;;;;;;;;;;;,\n";
        std::cout << ".;;;;;;;;;;;;;;;;;;;;;;;;;;;;.\n";
        std::cout << ";;;;;@;;;;;;;;;;;;;;;;;;;;;;;;' .............\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'.................\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'...................\n";
        std::cout << "`;;;;@;;;;;;;;;;;;;;;@;;;;;;;'.....................\n";
        std::cout << " `;;;;;;;;;;;;;;;;;;;@@;;;;;'..................;....\n";
        std::cout << "   `;;;;;;;;;;;;;;;;@@;;;;'....................;;...\n";
        std::cout << "     `;;;;;;;;;;;;;@;;;;'...;.................;;....\n";
        std::cout << "        `;;;;;;;;;;;;'   ...;;...............;.....\n";
        std::cout << "           `;;;;;;'        ...;;..................\n";
        std::cout << "              ;;              ..;...............\n";
        std::cout << "              `                  ............\n";
        std::cout << "             `                      ......\n";
        std::cout << "            `                         ..\n";
        std::cout << "           `                           '\n";
        std::cout << "          `                           '\n";
        std::cout << "         `                           '\n";
        std::cout << "        `                           `\n";
        std::cout << "        `                           `,\n";
        std::cout << "        `\n";
        std::cout << "         `\n";
        std::cout << "           `.\n";

        return 0;
    }
    else if (comp == 4 && user == 1) {
        std::cout << "You chose Lizard and the computer chose Rock.\n";
        std::cout << "Sorry, you lost this one! Try again?\n";
        std::cout << "     .-......-.\n"
            "   .'          '.\n"
            "  /   O      O   \\\n"
            " :           `    :\n"
            " |                |\n"
            " :    .------.    :\n"
            "  \  '        '  /\n"
            "   '.          .'\n"
            "     '-......-'\n";

        return 0;
    }

    //Lizard v Spock
    if (user == 4 && comp == 5) {
        std::cout << "You chose Lizard and the computer chose Spock!\n";
        std::cout << "YOU WIN! CONGRATULATIONS!\n";
        std::cout << "        ,,,,,,,,,,,,,\n";
        std::cout << "    .;;;;;;;;;;;;;;;;;;;,.\n";
        std::cout << "  .;;;;;;;;;;;;;;;;;;;;;;;;,\n";
        std::cout << ".;;;;;;;;;;;;;;;;;;;;;;;;;;;;.\n";
        std::cout << ";;;;;@;;;;;;;;;;;;;;;;;;;;;;;;' .............\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'.................\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'...................\n";
        std::cout << "`;;;;@;;;;;;;;;;;;;;;@;;;;;;;'.....................\n";
        std::cout << " `;;;;;;;;;;;;;;;;;;;@@;;;;;'..................;....\n";
        std::cout << "   `;;;;;;;;;;;;;;;;@@;;;;'....................;;...\n";
        std::cout << "     `;;;;;;;;;;;;;@;;;;'...;.................;;....\n";
        std::cout << "        `;;;;;;;;;;;;'   ...;;...............;.....\n";
        std::cout << "           `;;;;;;'        ...;;..................\n";
        std::cout << "              ;;              ..;...............\n";
        std::cout << "              `                  ............\n";
        std::cout << "             `                      ......\n";
        std::cout << "            `                         ..\n";
        std::cout << "           `                           '\n";
        std::cout << "          `                           '\n";
        std::cout << "         `                           '\n";
        std::cout << "        `                           `\n";
        std::cout << "        `                           `,\n";
        std::cout << "        `\n";
        std::cout << "         `\n";
        std::cout << "           `.\n";

        return 0;
    }
    else if (comp == 4 && user == 5) {
        std::cout << "You chose Spock and the computer chose Lizard.\n";
        std::cout << "Sorry, you lost this one! Try again?\n";
        std::cout << "     .-......-.\n"
            "   .'          '.\n"
            "  /   O      O   \\\n"
            " :           `    :\n"
            " |                |\n"
            " :    .------.    :\n"
            "  \  '        '  /\n"
            "   '.          .'\n"
            "     '-......-'\n";

        return 0;
    }

    //Spock v Scissors
    if (user == 5 && comp == 3) {
        std::cout << "You chose Spock and the computer chose Scissors!\n";
        std::cout << "YOU WIN! CONGRATULATIONS!\n";
        std::cout << "        ,,,,,,,,,,,,,\n";
        std::cout << "    .;;;;;;;;;;;;;;;;;;;,.\n";
        std::cout << "  .;;;;;;;;;;;;;;;;;;;;;;;;,\n";
        std::cout << ".;;;;;;;;;;;;;;;;;;;;;;;;;;;;.\n";
        std::cout << ";;;;;@;;;;;;;;;;;;;;;;;;;;;;;;' .............\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'.................\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'...................\n";
        std::cout << "`;;;;@;;;;;;;;;;;;;;;@;;;;;;;'.....................\n";
        std::cout << " `;;;;;;;;;;;;;;;;;;;@@;;;;;'..................;....\n";
        std::cout << "   `;;;;;;;;;;;;;;;;@@;;;;'....................;;...\n";
        std::cout << "     `;;;;;;;;;;;;;@;;;;'...;.................;;....\n";
        std::cout << "        `;;;;;;;;;;;;'   ...;;...............;.....\n";
        std::cout << "           `;;;;;;'        ...;;..................\n";
        std::cout << "              ;;              ..;...............\n";
        std::cout << "              `                  ............\n";
        std::cout << "             `                      ......\n";
        std::cout << "            `                         ..\n";
        std::cout << "           `                           '\n";
        std::cout << "          `                           '\n";
        std::cout << "         `                           '\n";
        std::cout << "        `                           `\n";
        std::cout << "        `                           `,\n";
        std::cout << "        `\n";
        std::cout << "         `\n";
        std::cout << "           `.\n";

        return 0;
    }
    else if (comp == 3 && user == 5) {
        std::cout << "You chose Scissors and the computer chose Spock.\n";
        std::cout << "Sorry, you lost this one! Try again?\n";
        std::cout << "     .-......-.\n"
            "   .'          '.\n"
            "  /   O      O   \\\n"
            " :           `    :\n"
            " |                |\n"
            " :    .------.    :\n"
            "  \  '        '  /\n"
            "   '.          .'\n"
            "     '-......-'\n";

        return 0;
    }

    //Scissors v Lizard
    if (user == 3 && comp == 4) {
        std::cout << "You chose Scissors and the computer chose Lizard!\n";
        std::cout << "YOU WIN! CONGRATULATIONS!\n";
        std::cout << "        ,,,,,,,,,,,,,\n";
        std::cout << "    .;;;;;;;;;;;;;;;;;;;,.\n";
        std::cout << "  .;;;;;;;;;;;;;;;;;;;;;;;;,\n";
        std::cout << ".;;;;;;;;;;;;;;;;;;;;;;;;;;;;.\n";
        std::cout << ";;;;;@;;;;;;;;;;;;;;;;;;;;;;;;' .............\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'.................\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'...................\n";
        std::cout << "`;;;;@;;;;;;;;;;;;;;;@;;;;;;;'.....................\n";
        std::cout << " `;;;;;;;;;;;;;;;;;;;@@;;;;;'..................;....\n";
        std::cout << "   `;;;;;;;;;;;;;;;;@@;;;;'....................;;...\n";
        std::cout << "     `;;;;;;;;;;;;;@;;;;'...;.................;;....\n";
        std::cout << "        `;;;;;;;;;;;;'   ...;;...............;.....\n";
        std::cout << "           `;;;;;;'        ...;;..................\n";
        std::cout << "              ;;              ..;...............\n";
        std::cout << "              `                  ............\n";
        std::cout << "             `                      ......\n";
        std::cout << "            `                         ..\n";
        std::cout << "           `                           '\n";
        std::cout << "          `                           '\n";
        std::cout << "         `                           '\n";
        std::cout << "        `                           `\n";
        std::cout << "        `                           `,\n";
        std::cout << "        `\n";
        std::cout << "         `\n";
        std::cout << "           `.\n";

        return 0;
    }
    else if (comp == 4 && user == 3) {
        std::cout << "You chose Lizard and the computer chose Scissors.\n";
        std::cout << "Sorry, you lost this one! Try again?\n";
        std::cout << "     .-......-.\n"
            "   .'          '.\n"
            "  /   O      O   \\\n"
            " :           `    :\n"
            " |                |\n"
            " :    .------.    :\n"
            "  \  '        '  /\n"
            "   '.          .'\n"
            "     '-......-'\n";

        return 0;
    }

    //Lizard v Paper
    if (user == 4 && comp == 2) {
        std::cout << "You chose Lizard and the computer chose Paper!\n";
        std::cout << "YOU WIN! CONGRATULATIONS!\n";
        std::cout << "        ,,,,,,,,,,,,,\n";
        std::cout << "    .;;;;;;;;;;;;;;;;;;;,.\n";
        std::cout << "  .;;;;;;;;;;;;;;;;;;;;;;;;,\n";
        std::cout << ".;;;;;;;;;;;;;;;;;;;;;;;;;;;;.\n";
        std::cout << ";;;;;@;;;;;;;;;;;;;;;;;;;;;;;;' .............\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'.................\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'...................\n";
        std::cout << "`;;;;@;;;;;;;;;;;;;;;@;;;;;;;'.....................\n";
        std::cout << " `;;;;;;;;;;;;;;;;;;;@@;;;;;'..................;....\n";
        std::cout << "   `;;;;;;;;;;;;;;;;@@;;;;'....................;;...\n";
        std::cout << "     `;;;;;;;;;;;;;@;;;;'...;.................;;....\n";
        std::cout << "        `;;;;;;;;;;;;'   ...;;...............;.....\n";
        std::cout << "           `;;;;;;'        ...;;..................\n";
        std::cout << "              ;;              ..;...............\n";
        std::cout << "              `                  ............\n";
        std::cout << "             `                      ......\n";
        std::cout << "            `                         ..\n";
        std::cout << "           `                           '\n";
        std::cout << "          `                           '\n";
        std::cout << "         `                           '\n";
        std::cout << "        `                           `\n";
        std::cout << "        `                           `,\n";
        std::cout << "        `\n";
        std::cout << "         `\n";
        std::cout << "           `.\n";

        return 0;
    }
    else if (comp == 4 && user == 2) {
        std::cout << "You chose Paper and the computer chose Lizard.\n";
        std::cout << "Sorry, you lost this one! Try again?\n";
        std::cout << "     .-......-.\n"
            "   .'          '.\n"
            "  /   O      O   \\\n"
            " :           `    :\n"
            " |                |\n"
            " :    .------.    :\n"
            "  \  '        '  /\n"
            "   '.          .'\n"
            "     '-......-'\n";

        return 0;
    }

    //Paper v Spock
    if (user == 2 && comp == 5) {
        std::cout << "You chose Paper and the computer chose Spock!\n";
        std::cout << "YOU WIN! CONGRATULATIONS!\n";
        std::cout << "        ,,,,,,,,,,,,,\n";
        std::cout << "    .;;;;;;;;;;;;;;;;;;;,.\n";
        std::cout << "  .;;;;;;;;;;;;;;;;;;;;;;;;,\n";
        std::cout << ".;;;;;;;;;;;;;;;;;;;;;;;;;;;;.\n";
        std::cout << ";;;;;@;;;;;;;;;;;;;;;;;;;;;;;;' .............\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'.................\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'...................\n";
        std::cout << "`;;;;@;;;;;;;;;;;;;;;@;;;;;;;'.....................\n";
        std::cout << " `;;;;;;;;;;;;;;;;;;;@@;;;;;'..................;....\n";
        std::cout << "   `;;;;;;;;;;;;;;;;@@;;;;'....................;;...\n";
        std::cout << "     `;;;;;;;;;;;;;@;;;;'...;.................;;....\n";
        std::cout << "        `;;;;;;;;;;;;'   ...;;...............;.....\n";
        std::cout << "           `;;;;;;'        ...;;..................\n";
        std::cout << "              ;;              ..;...............\n";
        std::cout << "              `                  ............\n";
        std::cout << "             `                      ......\n";
        std::cout << "            `                         ..\n";
        std::cout << "           `                           '\n";
        std::cout << "          `                           '\n";
        std::cout << "         `                           '\n";
        std::cout << "        `                           `\n";
        std::cout << "        `                           `,\n";
        std::cout << "        `\n";
        std::cout << "         `\n";
        std::cout << "           `.\n";

        return 0;
    }
    else if (comp == 2 && user == 5) {
        std::cout << "You chose Spock and the computer chose Paper.\n";
        std::cout << "Sorry, you lost this one! Try again?\n";
        std::cout << "     .-......-.\n"
            "   .'          '.\n"
            "  /   O      O   \\\n"
            " :           `    :\n"
            " |                |\n"
            " :    .------.    :\n"
            "  \  '        '  /\n"
            "   '.          .'\n"
            "     '-......-'\n";

        return 0;
    }

    //Spock v Rock
    if (user == 5 && comp == 1) {
        std::cout << "You chose Spock and the computer chose Rock!\n";
        std::cout << "YOU WIN! CONGRATULATIONS!\n";
        std::cout << "        ,,,,,,,,,,,,,\n";
        std::cout << "    .;;;;;;;;;;;;;;;;;;;,.\n";
        std::cout << "  .;;;;;;;;;;;;;;;;;;;;;;;;,\n";
        std::cout << ".;;;;;;;;;;;;;;;;;;;;;;;;;;;;.\n";
        std::cout << ";;;;;@;;;;;;;;;;;;;;;;;;;;;;;;' .............\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'.................\n";
        std::cout << ";;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'...................\n";
        std::cout << "`;;;;@;;;;;;;;;;;;;;;@;;;;;;;'.....................\n";
        std::cout << " `;;;;;;;;;;;;;;;;;;;@@;;;;;'..................;....\n";
        std::cout << "   `;;;;;;;;;;;;;;;;@@;;;;'....................;;...\n";
        std::cout << "     `;;;;;;;;;;;;;@;;;;'...;.................;;....\n";
        std::cout << "        `;;;;;;;;;;;;'   ...;;...............;.....\n";
        std::cout << "           `;;;;;;'        ...;;..................\n";
        std::cout << "              ;;              ..;...............\n";
        std::cout << "              `                  ............\n";
        std::cout << "             `                      ......\n";
        std::cout << "            `                         ..\n";
        std::cout << "           `                           '\n";
        std::cout << "          `                           '\n";
        std::cout << "         `                           '\n";
        std::cout << "        `                           `\n";
        std::cout << "        `                           `,\n";
        std::cout << "        `\n";
        std::cout << "         `\n";
        std::cout << "           `.\n";

        return 0;
    }
    else if (comp == 5 && user == 1) {
        std::cout << "You chose Rock and the computer chose Spock.\n";
        std::cout << "Sorry, you lost this one! Try again?\n";
        std::cout << "     .-......-.\n"
            "   .'          '.\n"
            "  /   O      O   \\\n"
            " :           `    :\n"
            " |                |\n"
            " :    .------.    :\n"
            "  \  '        '  /\n"
            "   '.          .'\n"
            "     '-......-'\n";

        return 0;
    }

    


    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
