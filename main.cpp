#include <cstdlib>
#include <iostream>
#include <sys/time.h>
#include <stdio.h>
#include "Board.h"
using namespace std;

int main(int argc,char** argv)
{
   // printf("\e[?25l");
    printf("\e[?25h");
    if (argc != 3)
	{
		printf("Please specify the number of rows and columns");
		exit(0);
	}
    int nRows = atoi(argv[1]);
    int nColumns = atoi(argv[2]);
    if(nRows != nColumns)
    {
        printf("Rows and columns have to be equal");
		exit(0);
    }
    srand((unsigned int)time(NULL));
    Board b1 = Board(nRows,nColumns);
    printf("Starter Board Configuration: \n");
    b1.printBoard();
    printf("Starter Board Value: %d \n \n",b1.GetValue());
    Board hillClimbing = b1.hillClimbing();
    Board simulatedAnnealing = b1.simulatedAnnealing();
    //Board b2 = Board(nRows,nColumns);
    //Board b2 = b1.RandomRestart();
    //b1 =b1.
    //BoardGenerator gen = BoardGenerator(nRows,nColumns);
    
    //Board b1 = gen.Restart();
   // Board b2 = gen.Restart();
    //b1 = b1.hillClimbing();
    printf("Hill Climbing Board Configuration \n");
    hillClimbing.printBoard();
    printf("Hill Climbing Board Value: %d \n",hillClimbing.GetValue());
    printf("Simulated Annealing Board Configuration \n");
    simulatedAnnealing.printBoard();
    printf("Simulated Annealing Board Value: %d \n",simulatedAnnealing.GetValue());

    //c.printBoard();
    //vector<Queen> q = test.getQueensList();
    
    /*
    Queen q1 = Queen(2,0);
    q1.queennumber = 0;
    Queen q2 = Queen(1,1);
     q2.queennumber = 1;
    Queen q3 = Queen(2,2);
    q3.queennumber = 2;
    Queen q4 = Queen(1,3);
    q4.queennumber = 3;
    test.insertQueen(q1);
    test.insertQueen(q2);
    test.insertQueen(q3);
    test.insertQueen(q4);
    */

    //std::vector<Board> lists = test.getAllSuccessors(test.getQueensList());
    ///printf("%lu \n",lists.size());
    /*
    test.printBoard();
    printf("------------ \n");
    test.printBoard();
    */
    //printf("%d",test.GetValue());
    //
   
    //test.printBoard();
    //Board b = test.hillClimbing();
    //b.printBoard();
    //printf("%d",b.GetValue());
    /*
    std::vector<Queen> queens = test.getQueensList();
    printf("%u || %u \n",queens[0].posx,queens[0].posy);
    //printf("----------------- \n");
    std::vector<Board> boards = test.getSuccesor(queens[0]);
    Board b = boards[0];
    b.printBoard();
    //test.testQueensList();
    */
    return 0;
}
