# Card Value Game: Which hand has higher value? 

The program was written in C++ language using QT platform. It was created on 4/2018.

## What is it?

This Card Value game has 2 players -- the computer and the user. The program first asks the user to enter the number of cards that he/she wish to have for each hand. Then, it automatically displays all the cards and the total point for each hand. The winner is the one holds higher value cards.

#### Card value rules:
* Jack = 1 point
* Queen = 2 points
* King = 3 points
* Ace = 4 points
* All other cards have 0 value 

## Example of the program:
### Inputing data:

<img src="https://github.com/tphuong141607/YesCode-Card-Value-Game/blob/master/Example%20of%20the%20Program%20Input.png" width="30%">

### What the output looks like:

<img src="https://github.com/tphuong141607/YesCode-Card-Value-Game/blob/master/Example%20of%20the%20output.png" width="40%">

### Play again option:
<img src="https://github.com/tphuong141607/YesCode-Card-Value-Game/blob/master/Example%20of%20the%20Program.png" width="30%">


## How to run this program on your computer locally? (Macintosh operating systems)
#### Method 1: Using terminal
1. Download [Homebrew](https://brew.sh/) if you don't have it installed
2. Open terminal
3. Download QT by typing `brew install qt5` (I purpusely put QT version 5 to avoid any incompatible error) 
3. Type: `export PATH="/usr/local/opt/qt/bin:$PATH"`
5. Go to the `CardValueGame` directory
6. Type `qmake`
7. Type `make`
8. Type `./CardValueGame`

#### Method 2: Using Qt app
1. Download QT [here](https://www.qt.io/download)
2. Open the project on the QT application simply by double click on the `CardValueGame.pro` file
3. Run the program

Note: `CardValueGame.pro` file is in YesCode-Card-Value-Game/CardValueGame/CardValueGame.pro
CardValueGamescript file includes all other files' information and how to do a sample run on terminal
