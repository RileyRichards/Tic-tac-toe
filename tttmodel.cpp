#include "tttmodel.h"
#include <iostream>

TTTModel::TTTModel()
{
    boardStatus = "---------";
}

void TTTModel::reset()
{
    boardStatus = "---------";
    std::cout << "reset called" << std::endl;
    turn = 1;
}

void TTTModel::put(int row, int col)
{
    if(row == 0 && col == 0) {
        if(boardStatus[0].toLatin1() == '-') {
            if(getWhosTurn() == "X") {
                boardStatus[0] = 'X';
            } else if (getWhosTurn() == "O") {
                boardStatus[0] = 'O';
            }
            turn++;
        }
    } else if (row == 0 && col == 1) {
        if(boardStatus[1].toLatin1() == '-') {
            if(getWhosTurn() == "X") {
                boardStatus[1] = 'X';
            } else if (getWhosTurn() == "O") {
                boardStatus[1] = 'O';
            }
            turn++;
        }
    } else if (row == 0 && col == 2) {
        if(boardStatus[2].toLatin1() == '-') {
            if(getWhosTurn() == "X") {
                boardStatus[2] = 'X';
            } else if (getWhosTurn() == "O") {
                boardStatus[2] = 'O';
            }
            turn++;
        }
    } else if (row == 1 && col == 0) {
        if(boardStatus[3].toLatin1() == '-') {
            if(getWhosTurn() == "X") {
                boardStatus[3] = 'X';
            } else if (getWhosTurn() == "O") {
                boardStatus[3] = 'O';
            }
            turn++;
        }
    } else if (row == 1 && col == 1) {
        if(boardStatus[4].toLatin1() == '-') {
            if(getWhosTurn() == "X") {
                boardStatus[4] = 'X';
            } else if (getWhosTurn() == "O") {
                boardStatus[4] = 'O';
            }
            turn++;
        }
    } else if (row == 1 && col == 2) {
        if(boardStatus[5].toLatin1() == '-') {
            if(getWhosTurn() == "X") {
                boardStatus[5] = 'X';
            } else if (getWhosTurn() == "O") {
                boardStatus[5] = 'O';
            }
            turn++;
        }
    } else if (row == 2 && col == 0) {
        if(boardStatus[6].toLatin1() == '-') {
            if(getWhosTurn() == "X") {
                boardStatus[6] = 'X';
            } else if (getWhosTurn() == "O") {
                boardStatus[6] = 'O';
            }
            turn++;
        }
    } else if (row == 2 && col == 1) {
        if(boardStatus[7].toLatin1() == '-') {
            if(getWhosTurn() == "X") {
                boardStatus[7] = 'X';
            } else if (getWhosTurn() == "O") {
                boardStatus[7] = 'O';
            }
            turn++;
        }
    } else if (row == 2 && col == 2) {
        if(boardStatus[8].toLatin1() == '-') {
            if(getWhosTurn() == "X") {
                boardStatus[8] = 'X';
            } else if (getWhosTurn() == "O") {
                boardStatus[8] = 'O';
            }
            turn++;
        }
    } else {
        std::cout << "Failed" << std::endl;
    }

    std::cout << "put called with row " << row << " and col " << col << std::endl;
}

QString TTTModel::getCurrentBoard() // something like "---XOXX--"
{
    return boardStatus;
}

QString TTTModel::getWhosTurn() // "X" or "O" or if somebody already won, return anything
{
    QString player;
    if (turn % 2 == 0) {
        player = "X";
    } else {
        player = "O";
    }
    return player;
}

bool TTTModel::hasSomeoneWon() // return if somebody has won
{
    if ((boardStatus.left(3) == "XXX") || (boardStatus.left(3) == "OOO") || (boardStatus.right(3) == "XXX") || (boardStatus.right(3) == "OOO") || (boardStatus.mid(3, 3) == "XXX") || (boardStatus.mid(3, 3) == "OOO") || (boardStatus.left(1) + boardStatus.mid(3, 1) + boardStatus.mid(6, 1) == "XXX") || (boardStatus.left(1) + boardStatus.mid(3, 1) + boardStatus.mid(6, 1) == "OOO") || (boardStatus.mid(1, 1) + boardStatus.mid(4, 1) + boardStatus.mid(7, 1) == "XXX") || (boardStatus.mid(1, 1) + boardStatus.mid(4, 1) + boardStatus.mid(7, 1) == "OOO") || (boardStatus.mid(2, 1) + boardStatus.mid(5, 1) + boardStatus.right(1) == "XXX") || (boardStatus.mid(2, 1) + boardStatus.mid(5, 1) + boardStatus.right(1) == "OOO") || (boardStatus.left(1) + boardStatus.mid(4, 1) + boardStatus.right(1) == "XXX") || (boardStatus.left(1) + boardStatus.mid(4, 1) + boardStatus.right(1) == "OOO") || (boardStatus.mid(2, 1) + boardStatus.mid(4, 1) + boardStatus.mid(6, 1) == "XXX") || (boardStatus.mid(2, 1) + boardStatus.mid(4, 1) + boardStatus.mid(6, 1) == "OOO")) {
        return true;
    } else {
        return false;
    }
}

QString TTTModel::whosWinner() // return "X" or "O" if there's any winner. return anything if there's no winner yet
{
    if (getWhosTurn() == "X") {
        return "O";
    }
    return "X";
}



