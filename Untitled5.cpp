
#include "TXLib.h"

void DrawHuman (int x, int y, double sizeX, double sizeY, int leftHandx, int leftHandy, int rightHandx, int rightHandy, int rightLegx, int rightLegy, int headx, int headY, int eyex, int eyeY, int mouthx, int mouthy);  // прототип функции drawhuman

void DrawGrass1 (int x, int y);

void DrawSun (int x, int y, int rayx, int rayy, int eyex, int eyey,  int mouthx,  int mouthy);

void DrawCloud (int x, int y, int rainx, int rainy);

void DrawGrass2 (int x, int y);

void DravGrass3 (int x, int y);

void MoveHuman();

int main()

    {
    txCreateWindow (1152, 648);

    DrawHuman (500, 485, 0.5, 1, 50, 50, 10, 10, 1, 1, 1, 1, 1, 1, 1, 1);  // вызов функции drawhuman

    //DrawHuman (200, 120, 1.5, 1, 50, 50, 10, 10, 1, 1, 1, 1);


    DrawGrass1(155, 470);

    DrawSun(1050, 95, 0, 0, 0, 0, 0, 0);

    DrawCloud(50, 40, 0, 0);

    DrawGrass2(1015, 590);

    DravGrass3 (1080, 505);

    MoveHuman();

    return 0;
    }

void MoveHuman()
    {
    int xHuman = 100;
    int xSun = 100;
    while (xHuman <= 600)
        {
        txSetFillColor (TX_BLACK);
        txClear();

        DrawGrass1(155, 470);

        DrawCloud(50, 40, 0, 0);

        DrawGrass2(1015, 590);

        DravGrass3 (1080, 505);

        DrawHuman (xHuman, 485, 0.5, 1, 50, 50, 10, 10, 1, 1, 1, 1, 1, 1, 1, 1);
        xHuman = xHuman + 10;

        DrawSun(xSun, 95, 0, 0, 0, 0, 0, 0);
        xSun = xSun + 10;

        txSleep (50);

        }
    }

void DrawHuman (int x, int y, double sizeX, double sizeY, int leftHandx, int leftHandy, int rightHandx, int rightHandy, int rightLegx, int rightLegy, int headx, int headY, int eyex, int eyeY, int mouthx, int mouthy)  // определение функции drawhuman. 1 строчка=заголовок функции
    {
    txLine ((442 - 500 + leftHandx) * sizeX + x, (492 - 485 - leftHandy) * sizeY + y, (486 - 500 + leftHandx) * sizeX + x, (440 - 485) * sizeY + y);
    txLine ((501 - 500) * sizeX + x, (526 - 485) * sizeY + y, (493 - 500) * sizeX + x, (435 - 485) * sizeY + y);
    txLine ((501 - 500 + rightHandx) * sizeX + x, (435 - 485 + rightHandy) * sizeY + y, (567 - 500 + rightHandx) * sizeX + x, (483 - 485 + rightHandy) * sizeY + y);
    txLine ((499 - 500 + rightLegx) * sizeX + x, (527 - 485 + rightLegy) * sizeY + y, (466 - 500 + rightLegx) * sizeX + x, (590 - 485 + rightLegy) * sizeY + y);
    txLine ((543 - 500) * sizeX + x, (580 - 485) * sizeY + y, (501 - 500) * sizeX + x, (442 - 485) * sizeY + y);
    txLine ((549 - 500 + headx) * sizeX + x, (435 - 485 + headY) * sizeY + y, (458 - 500 + headx) * sizeX + x, (434 - 485 + headY) * sizeY + y);
    txLine ((458 - 500 + headx) * sizeX + x, (434 - 485 + headY) * sizeY + y, (469 - 500 + headx) * sizeX + x, (357 - 485 + headY) * sizeY + y);
    txLine ((469 - 500 + headx) * sizeX + x, (357 - 485 + headY) * sizeY + y, (547 - 500 + headx) * sizeX + x, (352 - 485 + headY) * sizeY + y);
    txLine ((547 - 500 + headx) * sizeX + x, (352 - 485 + headY) * sizeY + y, (549 - 500 + headx) * sizeX + x, (435 - 485 + headY) * sizeY + y);
    txLine ((482 - 500 + eyex) * sizeX + x, (376 - 485 + eyeY) * sizeY + y, (491 - 500 + eyex) * sizeX + x, (378 - 485 + eyeY) * sizeY + y);
    txLine ((520 - 500 + eyex) * sizeX + x, (380 - 485 + eyeY) * sizeY + y, (528 - 500 + eyex) * sizeX + x, (375 - 485 + eyeY) * sizeY + y);
    txLine ((476 - 500 + mouthx) * sizeX + x, (403 - 485 + mouthy) * sizeY + y, (483 - 500 + mouthx) * sizeX + x, (417 - 485 + mouthy) * sizeY + y);
    txLine ((483 - 500 + mouthx) * sizeX + x, (417 - 485 + mouthy) * sizeY + y, (525 - 500 + mouthx) * sizeX + x, (417 - 485 + mouthy) * sizeY + y);
    txLine ((525 - 500 + mouthx) * sizeX + x, (417 - 485 + mouthy) * sizeY + y, (535 - 500 + mouthx) * sizeX + x, (403 - 485 + mouthy) * sizeY + y);
    }

void DrawGrass1 (int x, int y)
    {
    txSetColor (TX_GREEN, 2);
    txLine (48 - 155 + x, 522 - 470 + y, 85 - 155 + x, 473 - 470 + y);
    txLine (85 - 155 + x, 473 - 470 + y, 122 - 155 + x, 516 - 470 + y);
    txLine (122 - 155 + x, 516 - 470 + y, 156 - 155 + x, 456 - 470 + y);
    txLine (156 - 155 + x, 456 - 470 + y, 192 - 155 + x, 517 - 470 + y);
    txLine (192 - 155 + x, 517 - 470 + y, 226 - 155 + x, 465 - 470 + y);
    txLine (226 - 155 + x, 465 - 470 + y, 253 - 155 + x, 513 - 470 + y);
    }

void DrawSun (int x, int y, int rayx, int rayy, int eyex, int eyey, int mouthx,  int mouthy)
    {
    txSetColor (TX_ORANGE, 2);
    txLine (1045 - 1050 + x, 2 - 95 + y, 1045 - 1050 + x, 97 - 95 + y);
    txLine (1045 - 1050 + x, 97 - 95 + y, 1149 - 1050 + x, 109 - 95 + y);
    txLine (1045 - 1050 + rayx + x, 40 - 95 + y + rayy, 968 - 1050 + rayx + x, 60 - 95 + y + rayy);
    txLine (1045 - 1050 + rayx + x, 86 - 95 + y + rayy, 983 - 1050 + rayx + x, 129 - 95 + y + rayy);
    txLine (1075 - 1050 + rayx + x, 99 - 95 + y + rayy, 1060 - 1050 + rayx + x, 183 - 95 + y + rayy);
    txLine (1121 - 1050 + rayx + x, 107 - 95 + y + rayy, 1132 - 1050 + rayx + x, 199 - 95 + y + rayy);
    txLine (1067 - 1050 + x + eyex, 24 - 95 + y + eyey, 1085 - 1050 + x + eyex, 24 - 95 + eyey + y);
    txLine (1119 - 1050 + x + eyex, 26 - 95 + y + eyey, 1136 - 1050 + x + eyex, 24 - 95 + eyey + y);
    txLine (1069 - 1050 + mouthx + x, 53 - 95 + mouthy + y, 1082 - 1050 + mouthx + x, 67 - 95 + mouthy + y);
    txLine (1082 - 1050 + mouthx + x, 67 - 95 + mouthy + y, 1122 - 1050 + mouthx + x, 66 - 95 + mouthy + y);
    txLine (1122 - 1050 + mouthx + x, 66 - 95 + mouthy + y, 1137 - 1050 + mouthx + x, 50 - 95 + mouthy + y);
    }

void DrawCloud (int x, int y, int rainx, int rainy)
    {
    txSetColor (RGB (207, 226, 255));
    txLine (0 - 50 + x, 74, 32, 111);
    txLine (32 - 50 + x, 111 - 40 + y, 63 - 50 + x, 69 - 40 + y);
    txLine (63 - 50 + x, 69 - 40 + y, 113 - 50 + x, 97 - 40 + y);
    txLine (113 - 50 + x, 97 - 40 + y, 137 - 50 + x, 64 - 40 + y);
    txLine (137 - 50 + x, 64 - 40 + y, 187 - 50 + x, 50 - 40 + y);
    txLine (187 - 50 + x, 50 - 40 + y, 168 - 50 + x, 1 - 40 + y);
    txLine (36 - 50 + x + rainx, 150 - 40 + y + rainy, 36 - 50 + x + rainx, 185 - 40 + y + rainy);
    txLine (76 - 50 + x + rainx, 147 - 40 + y + rainy, 76 - 50 + x + rainx, 174 - 40 + y + rainy);
    txLine (121 - 50 + x + rainx, 126 - 40 + y + rainy, 121 - 50 + x + rainx, 158 - 40 + y + rainy);
    }

void DrawGrass2 (int x, int y)
    {
    txSetColor (TX_GREEN, 2);
    txLine (936 - 1015 + x, 627 - 590 + y, 960 - 1015 + x, 580 - 590 + y);
    txLine (960 - 1015 + x, 580 - 590 + y, 986 - 1015 + x, 617 - 590 + y);
    txLine (986 - 1015 + x, 617 - 590 + y, 1014 - 1015 + x, 560 - 590 + y);
    txLine (1014 - 1015 + x, 560 - 590 + y, 1038 - 1015 + x, 611 - 590 + y);
    txLine (1038 - 1015 + x, 611 - 590 + y, 1062 - 1015 + x, 567 - 590 + y);
    txLine (1062 - 1015 + x, 567 - 590 + y, 1086 - 1015 + x, 606 - 590 + y);
    }

void DravGrass3 (int x, int y)
    {
    txSetColor (TX_GREEN, 2);
    txLine (1018 - 1080 + x, 516 - 505 + y, 1036 - 1080 + x, 492 - 505 + y);
    txLine (1036 - 1080 + x, 492 - 505 + y, 1060 - 1080 + x, 519 - 505 + y);
    txLine (1060 - 1080 + x, 519 - 505 + y, 1077 - 1080 + x, 490 - 505 + y);
    txLine (1077 - 1080 + x, 490 - 505 + y, 1090 - 1080 + x, 513 - 505 + y);
    txLine (1090 - 1080 + x, 513 - 505 + y, 1104 - 1080 + x, 481 - 505 + y);
    txLine (1104 - 1080 + x, 481 - 505 + y, 1130 - 1080 + x, 514 - 505 + y);
    }
