#include "../include/fenparser.h"

cvector(int) fenToBoard(char *sFen) {
    cvector(int) vBoard = NULL;
    int nIndex = 0;
    while ('\0' != sFen[nIndex]) {
        if ('/' == sFen[nIndex]) { // new rank
            
        }
        else if (' ' == sFen[nIndex]) { // for now, break out when board position is finished
            break;
        }
        else if (sFen[nIndex] >= 49 && sFen[nIndex] <= 56) { // number of empty squares (1-8)
            int nEmptySpaces = sFen[nIndex] - 48;
            for (int i=0; i<nEmptySpaces; i++) {
                cvector_push_back(vBoard, NONE);
            }
        }
        else { // for now this means its a piece on the board
            cvector_push_back(vBoard, numberize(sFen[nIndex]));
        }
        nIndex++;
    }
    return vBoard;
}