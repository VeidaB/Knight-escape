/*--------------------------------------------
   Knight Escape
   The objective of this game is to get the white knight to the empty
	square in the upper right-hand corner of the board.

	The knight can only move in the way that it does during a traditional
	chess game. This means that a knight can only move in a valid L-shape
	(two squares in a horizontal direction, then one in a vertical direction OR
	two squares in a vertical direction, then one in a horizontal direction).

   System: clion
   Author: Veida Buhrz

 ---------------------------------------------*/

#include <iostream>
#include <cctype>
using namespace std;

// declaring global variables
string p1;
string p2;
string p3;
string p4;
string p5;
string p6;
string p7;
string p8;
string p9;
string p10;
string p11;
string p12;
string p13;
string p14;
string p15;
string p16;
string p17;
string p18;
string p19;
string p20;
string p21;
string p22;
string p23;
string p24;
string p25;




// Characters of the pieces to be used on the board
const string WhiteKnight = "\u2658";		// White knight character
const string BlackKnight = "\u265E";		// Black knight character
const string BlankPosition = " ";			// Blank position character

// Display welcome message
void displayWelcomeMessage()
{
    cout
         << "The objective of this puzzle is to get the white knight "
         << "up to the empty square in the top right corner of the board. "
         << "Use standard knight moves from a traditional chess game, "
         << "where a knight moves in an L-shape. \n"
         << "This means that a knight can only move either "
         << "1) two squares in a horizontal direction, then one in a vertical direction, OR "
         << "2) two squares in a vertical direction, then one in a horizontal direction."
         << " \n"
         << "Your score decreases by 5 with each valid move, and by 10 with each invalid move. \n"
         << "Try to complete the puzzle with the smallest number of valid moves!"
         << endl;
}//end displayWelcomeMessage()



// Display the current board, along with the corresponding positions
void displayBoard()
{
    cout <<"\n"
         <<                          "    Board   " <<                               "      Position \n"
         << " " <<  p1 << " " <<  p2 << " " <<  p3 << " " <<  p4 << " " <<  p5 << "     1  2  3  4  5 \n"
         << " " <<  p6 << " " <<  p7 << " " <<  p8 << " " <<  p9 << " " << p10 << "     6  7  8  9 10 \n"
         << " " << p11 << " " << p12 << " " << p13 << " " << p14 << " " << p15 << "    11 12 13 14 15 \n"
         << " " << p16 << " " << p17 << " " << p18 << " " << p19 << " " << p20 << "    16 17 18 19 20 \n"
         << " " << p21 << " " << p22 << " " << p23 << " " << p24 << " " << p25 << "    21 22 23 24 25 \n"
         << endl;
} //end displayBoard()


// Reset Function
void reset(){
    p1 = BlackKnight;
    p2 = BlackKnight;
    p3 = BlackKnight;
    p4 = BlackKnight;
    p5 = BlankPosition;
    p6 = BlackKnight;
    p7 = BlackKnight;
    p8 = BlackKnight;
    p9 = BlackKnight;
    p10 = BlackKnight;
    p11 = BlackKnight;
    p12 = BlackKnight;
    p13 = BlackKnight;
    p14 = BlackKnight;
    p15 = BlackKnight;
    p16 = BlackKnight;
    p17 = BlackKnight;
    p18 = BlackKnight;
    p19 = BlackKnight;
    p20 = BlackKnight;
    p21 = WhiteKnight;
    p22 = BlackKnight;
    p23 = BlackKnight;
    p24 = BlackKnight;
    p25 = BlackKnight;

    displayBoard();
}

//get matching position to index for from

bool checkKnight(int input){
    if (input == 1){
        if(p1 == BlackKnight || p1 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 2){
        if(p2 == BlackKnight || p2 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 3){
        if(p3 == BlackKnight || p3 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 4){
        if(p4 == BlackKnight || p4 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 5){
        if(p5 == BlackKnight || p5 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 6){
        if(p6 == BlackKnight || p6 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 7){
        if(p7 == BlackKnight || p7 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 8){
        if(p8 == BlackKnight || p8 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 9){
        if(p9 == BlackKnight || p9 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 10){
        if(p10 == BlackKnight || p10 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 11){
        if(p11 == BlackKnight || p11 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 12){
        if(p12 == BlackKnight || p12 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 13){
        if(p13 == BlackKnight || p13 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 14){
        if(p14 == BlackKnight || p14 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 15){
        if(p15 == BlackKnight || p15 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 16){
        if(p16 == BlackKnight || p16 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 17){
        if(p17 == BlackKnight || p17 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 18){
        if(p18 == BlackKnight || p18 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 19){
        if(p19 == BlackKnight || p19 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 20){
        if(p20 == BlackKnight || p20 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 21){
        if(p21 == BlackKnight || p21 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 22){
        if(p22 == BlackKnight || p22 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 23){
        if(p23 == BlackKnight || p23 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 24){
        if(p24 == BlackKnight || p24 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input == 25){
        if(p25 == BlackKnight || p25 == WhiteKnight){
            return true;
        }
        else{
            return false;
        }
    }
}


//Check for blank position
bool checkBlank(int input) {
    if (input == 1) {
        if (p1 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 2) {
        if (p2 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 3) {
        if (p3 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 4) {
        if (p4 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 5) {
        if (p5 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 6) {
        if (p6 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 7) {
        if (p7 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 8) {
        if (p8 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 9) {
        if (p9 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 10) {
        if (p10 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 11) {
        if (p11 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 12) {
        if (p12 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 13) {
        if (p13 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 14) {
        if (p14 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 15) {
        if (p15 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 16) {
        if (p16 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 17) {
        if (p17 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 18) {
        if (p18 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 19) {
        if (p19 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 20) {
        if (p20 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 21) {
        if (p21 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 22) {
        if (p22 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 23) {
        if (p23 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 24) {
        if (p24 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    } else if (input == 25) {
        if (p25 == BlankPosition) {
            return true;
        } else {
            return false;
        }
    }
}


//check valid move
bool checkValidMove(int to, int from){
    string temp;
    if(from == 1){
        if(to == 8){
            temp = p8;
            p8 = p1;
            p1 = temp;
        }
        else if(to == 12){
            temp = p12;
            p12 = p1;
            p1 = temp;
        }
        else{
            return false;
        }
    }
    if(from == 2){
        if(to == 9){
            temp = p9;
            p9 = p2;
            p2 = temp;
        }
        else if(to == 11){
            temp = p11;
            p11 = p2;
            p2 = temp;
        }
        else if(to == 13){
            temp = p13;
            p13 = p2;
            p2 = temp;
        }
        else{
            return false;
        }
    }
    if(from == 3){
        if(to == 6){
            temp = p6;
            p6 = p3;
            p3 = temp;
        }
        else if(to == 10){
            temp = p10;
            p10 = p3;
            p3 = temp;
        }
        else if(to == 12){
            temp = p12;
            p12 = p3;
            p3 = temp;
        }
        else if(to == 14){
            temp = p14;
            p14 = p3;
            p3 = temp;
        }
        else{
            return false;
        }
    }
    if(from == 4){
        if(to == 7){
            temp = p7;
            p7 = p4;
            p4 = temp;
        }
        else if(to == 13){
            temp = p13;
            p13 = p4;
            p4 = temp;
        }
        else if(to == 15){
            temp = p15;
            p15 = p4;
            p4 = temp;
        }
        else{
            return false;
        }
    }
    if(from == 5){
        if(to == 8){
            temp = p8;
            p8 = p5;
            p5 = temp;
        }
        else if(to == 14){
            temp = p14;
            p14 = p5;
            p5 = temp;
        }
        else{
            return false;
        }
    }
    if(from == 6){
        if(to == 3){
            temp = p3;
            p3 = p6;
            p6 = temp;
        }
        else if(to == 13){
            temp = p13;
            p13 = p6;
            p6 = temp;
        }
        else if(to == 17){
            temp = p17;
            p17 = p6;
            p6 = temp;
        }
        else{
            return false;
        }
    }
    if(from == 7) {
        if (to == 4) {
            temp = p4;
            p4 = p7;
            p7 = temp;
            return true;
        } else if (to == 14) {
            temp = p14;
            p14 = p7;
            p7 = temp;
            return true;
        } else if (to == 16) {
            temp = p16;
            p16 = p7;
            p7 = temp;
            return true;
        } else if (to == 18) {
            temp = p18;
            p18 = p7;
            p7 = temp;
            return true;
        } else {
            return false;
        }
    }
    if(from == 8){
        if (to == 1){
            temp = p1;
            p1 = p8;
            p8 = temp;
            return true;
        }
        else if (to == 5){
            temp = p5;
            p5 = p8;
            p8 = temp;
            return true;
        }
        else if (to == 11){
            temp = p11;
            p11 = p8;
            p11 = temp;
            return true;
        }
        else if (to == 15){
            temp = p15;
            p15 = p8;
            p8 = temp;
            return true;
        }
        else if (to == 17){
            temp = p17;
            p17 = p8;
            p8 = temp;
            return true;
        }
        else if (to == 19){
            temp = p19;
            p19 = p8;
            p8 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if(from == 9){
        if (to == 2){
            temp = p2;
            p2 = p9;
            p9 = temp;
            return true;
        }
        else if (to == 12){
            temp = p12;
            p12 = p9;
            p9 = temp;
            return true;
        }
        else if (to == 18){
            temp = p18;
            p18 = p9;
            p9 = temp;
            return true;
        }
        else if (to == 20){
            temp = p20;
            p20 = p9;
            p9 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if(from ==10){
        if (to == 3){
            temp = p3;
            p3 = p10;
            p10 = temp;
            return true;
        }
        else if (to == 13){
            temp = p13;
            p13 = p10;
            p10 = temp;
            return true;
        }
        else if (to == 19){
            temp = p19;
            p19 = p10;
            p10 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if(from==11){
        if (to == 2){
            temp = p2;
            p2 = p11;
            p11 = temp;
            return true;
        }
        else if (to == 8){
            temp = p8;
            p8 = p11;
            p11 = temp;
            return true;
        }
        else if (to == 18){
            temp = p18;
            p18 = p11;
            p11 = temp;
            return true;
        }
        else if (to == 20){
            temp = p20;
            p20 = p11;
            p11 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if (from==12){
        if (to == 1){
            temp = p1;
            p1 = p12;
            p12 = temp;
            return true;
        }
        else if (to == 3){
            temp = p3;
            p3 = p12;
            p12 = temp;
            return true;
        }
        else if (to == 9){
            temp = p9;
            p9 = p12;
            p12 = temp;
            return true;
        }
        else if (to == 19){
            temp = p19;
            p19 = p12;
            p12 = temp;
            return true;
        }
        else if (to == 21){
            temp = p21;
            p21 = p12;
            p12 = temp;
            return true;
        }
        else if (to == 23){
            temp = p23;
            p23 = p12;
            p12 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if(from==13){
        if (to == 2){
            temp = p2;
            p2 = p13;
            p13 = temp;
            return true;
        }
        else if (to == 4){
            temp = p4;
            p4 = p13;
            p13 = temp;
            return true;
        }
        else if (to == 6){
            temp = p6;
            p6 = p13;
            p13 = temp;
            return true;
        }
        else if (to == 10){
            temp = p10;
            p10 = p13;
            p13 = temp;
            return true;
        }
        else if (to == 16){
            temp = p16;
            p16 = p13;
            p13 = temp;
            return true;
        }
        else if (to == 20){
            temp = p20;
            p20 = p13;
            p13 = temp;
            return true;
        }
        else if (to == 22){
            temp = p22;
            p22 = p13;
            p13 = temp;
            return true;
        }
        else if (to == 24){
            temp = p24;
            p24 = p13;
            p13 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if(from==14){
        if (to == 3){
            temp = p3;
            p3 = p14;
            p14 = temp;
            return true;
        }
        else if (to == 5){
            temp = p5;
            p5 = p14;
            p14 = temp;
            return true;
        }
        else if (to == 7){
            temp = p7;
            p7 = p14;
            p14 = temp;
            return true;
        }
        else if (to == 17){
            temp = p17;
            p17 = p14;
            p14 = temp;
            return true;
        }
        else if (to == 23){
            temp = p23;
            p23 = p14;
            p14 = temp;
            return true;
        }
        else if (to == 25){
            temp = p25;
            p25 = p14;
            p14 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if (from==15){
        if (to == 4){
            temp = p4;
            p4 = p15;
            p15 = temp;
            return true;
        }
        else if (to == 8){
            temp = p8;
            p8 = p15;
            p15 = temp;
            return true;
        }
        else if (to == 18){
            temp = p18;
            p18 = p15;
            p15 = temp;
            return true;
        }
        else if (to == 24){
            temp = p24;
            p24 = p15;
            p15 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if(from==16){
        if (to == 7){
            temp = p7;
            p7 = p16;
            p16 = temp;
            return true;
        }
        else if (to == 13){
            temp = p13;
            p13 = p16;
            p16 = temp;
            return true;
        }
        else if (to == 23){
            temp = p23;
            p23 = p16;
            p16 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if(from==17){
        if (to == 6){
            temp = p6;
            p6 = p17;
            p17 = temp;
            return true;
        }
        else if (to == 8){
            temp = p8;
            p8 = p17;
            p17 = temp;
            return true;
        }
        else if (to == 14){
            temp = p14;
            p14 = p17;
            p17 = temp;
            return true;
        }
        else if (to == 24){
            temp = p24;
            p24 = p17;
            p17 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if(from==18){
        if (to == 7){
            temp = p7;
            p7 = p18;
            p18 = temp;
            return true;
        }
        else if (to == 9){
            temp = p9;
            p9 = p18;
            p18 = temp;
            return true;
        }
        else if (to == 11){
            temp = p11;
            p11 = p18;
            p18 = temp;
            return true;
        }
        else if (to == 15){
            temp = p15;
            p15 = p18;
            p18 = temp;
            return true;
        }
        else if (to == 21){
            temp = p21;
            p21 = p18;
            p18 = temp;
            return true;
        }
        else if (to == 25){
            temp = p25;
            p25 = p18;
            p18 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if(from==19){
        if (to == 8){
            temp = p8;
            p8 = p19;
            p19 = temp;
            return true;
        }
        else if (to == 10){
            temp = p10;
            p10 = p19;
            p19 = temp;
            return true;
        }
        else if (to == 12){
            temp = p12;
            p12 = p19;
            p19 = temp;
            return true;
        }
        else if (to == 22){
            temp = p22;
            p22 = p19;
            p19 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if (from==20){
        if (to == 9){
            temp = p9;
            p9 = p20;
            p20 = temp;
            return true;
        }
        else if (to == 13){
            temp = p13;
            p13 = p20;
            p20 = temp;
            return true;
        }
        else if (to == 23){
            temp = p23;
            p23 = p20;
            p20 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if (from==21){
        if (to == 12){
            temp = p12;
            p12 = p21;
            p21 = temp;
            return true;
        }
        else if (to == 18){
            temp = p18;
            p18 = p21;
            p21 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if(from==22){
        if (to == 11){
            temp = p11;
            p11 = p22;
            p22 = temp;
            return true;
        }
        else if (to == 13){
            temp = p13;
            p13 = p22;
            p22 = temp;
            return true;
        }
        else if (to == 19){
            temp = p19;
            p19 = p22;
            p22 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if (from==23){
        if (to == 12){
            temp = p12;
            p12 = p23;
            p23 = temp;
            return true;
        }
        else if (to == 14){
            temp = p14;
            p14 = p23;
            p23 = temp;
            return true;
        }
        else if (to == 16){
            temp = p16;
            p16 = p23;
            p23 = temp;
            return true;
        }
        else if (to == 20){
            temp = p20;
            p20 = p23;
            p23 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if(from==24){
        if (to == 13){
            temp = p13;
            p13 = p24;
            p24 = temp;
            return true;
        }
        else if (to == 15){
            temp = p15;
            p15 = p24;
            p24 = temp;
            return true;
        }
        else if (to == 17){
            temp = p17;
            p17 = p24;
            p24 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    if(from==25){
        if (to == 14){
            temp = p14;
            p14 = p25;
            p25 = temp;
            return true;
        }
        else if (to == 18){
            temp = p18;
            p18 = p25;
            p25 = temp;
            return true;
        }
        else{
            return false;
        }
    }
    return true;
}


// Main() function of the program
int main() {

    displayWelcomeMessage();

    // Set board values to the default starting position
    p1 = BlackKnight;
    p2 = BlackKnight;
    p3 = BlackKnight;
    p4 = BlackKnight;
    p5 = BlankPosition;
    p6 = BlackKnight;
    p7 = BlackKnight;
    p8 = BlackKnight;
    p9 = BlackKnight;
    p10 = BlackKnight;
    p11 = BlackKnight;
    p12 = BlackKnight;
    p13 = BlackKnight;
    p14 = BlackKnight;
    p15 = BlackKnight;
    p16 = BlackKnight;
    p17 = BlackKnight;
    p18 = BlackKnight;
    p19 = BlackKnight;
    p20 = BlackKnight;
    p21 = WhiteKnight;
    p22 = BlackKnight;
    p23 = BlackKnight;
    p24 = BlackKnight;
    p25 = BlackKnight;

    int moveNumber = 1;

    char menuOption;
    int score = 500;

    displayBoard();

    int to;
    int from;

    // Loop that controls game play
    while(menuOption != 'X') {
        if(p5 == WhiteKnight){
            cout<<"Congratulations you won!";
            break;
        }
        cout << "Current score: "<< score << endl;
        cout << endl;
        cout << moveNumber << ". "
             << "Enter one of the following: \n"
             << "  - M to move a knight from one position to another, \n"
             << "  - R to reset the board back to the beginning, or \n"
             << "  - X to exit the game. \n"
             << "Your choice -> ";
        cin >> menuOption;
        menuOption = toupper(menuOption); // convert user input to uppercase

        // If the user entered 'X' to exit,
        if (menuOption == 'X'){
            cout<<"Exiting..."<<endl;
            break;
        }


        // If the user entered 'R' to reset,
        if(menuOption == 'R'){
            score = 500;
            moveNumber = 1;
            cout << "***Restarting"<<endl;
            reset();
        }


        // If the user entered 'M' to move a knight,
        if(menuOption == 'M') {
            cout<<"Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5):";
            cin >> from;
            cin >> to;
            cout<<"You have chosen to move a knight from position "<<from<<" to position "<<to<<"."<<endl;





            // Check that TO/FROM position is valid, i.e. within 1-25
            if((from>0 && from<26)&&(to>0 && to<26)) {
                continue;
            }else if(from<1 || from>25){
                score =score- 10;
                cout <<"The source position should be a valid position on the board (1-25). Try again." <<endl;
                cout<<endl;
                continue;
            }else{
                score =score- 10;
                cout <<"The destination position should be a valid position on the board (1-25). Try again." <<endl;
                cout<<endl;
                continue;
            }
            //check for knight
            if(checkKnight(from) == true) {
                continue;
            }
            if(checkKnight(from) == false){
                score = score-10;
                cout <<" The source position should have a knight. Try again." << endl;
                continue;
            }
            //check for blank
            if(checkBlank(to) == true) {
                continue;
            }else{
                score = score-10;
                cout<< "The destination position should be empty. Try again." <<endl;
                continue;
            }
            //check for valid move
            if(checkValidMove(to,from)==true){
                score = score-5;
                displayBoard();
                moveNumber += 1;
                continue;
            }else{
                score = score-10;
                cout << "Invalid move. Knights can only move in an L-shape. Try again."<< endl;
                continue;
            }
        }
        //check score
        if (score <= 0){
            cout << endl;
            cout << "You have run out of moves. Try to do better next time!" << endl;
            break;
        }
        //check for win
        if(p5 == WhiteKnight){
            cout<<"Congratulations you won!";
            break;
        }

    }





    cout << "Thank you for playing!" << endl;

    return 0;
}