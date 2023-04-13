// 2023.4.1,2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

int main()
{
    srand(time(NULL));
    rand(); // 버그 방지

    // Mod 연산자 %
    // 20 % 2 = 0, 20 % 3 = 2

    int nA = rand() % 10; // 0 ~ 9 의 난수 생성

    int nCom = rand() % 3;

    int nPlayer;
    cout << "1.가위 2.바위 3.보 : ";
    cin >> nPlayer;
    nPlayer -= 1; // nPlayer = nPlayer - 1 축약

    cout << "컴퓨터: " << nCom << " vs " << nPlayer << " :플레이어" << endl;

    // 0 < 1, 1 < 2, 2 < 0
    if (nCom == nPlayer)
        cout << "무승부" << endl;
    else if ((nCom + 1) % 3 == nPlayer)
        cout << "플레이어 승" << endl;
    else
        cout << "컴퓨터 승" << endl;

    // %를 통해서 효율적인 알고리즘을 만들 수 있다!

    /*
    if (nCom == 0)
    {
        cout << "컴 : 가위 vs ";

        if (nPlayer == 0)
            cout << "가위 : 플레이어" << endl << "무승부" << endl;
        else if(nPlayer == 1)
            cout << "바위 : 플레이어" << endl << "플레이어 승" << endl;
        else
            cout << "보 : 플레이어" << endl << "컴퓨터 승" << endl;
    }
    else if (nCom == 1)
    {
        cout << "컴 : 바위 vs ";

        if (nPlayer == 0)
            cout << "가위 : 플레이어" << endl << "컴퓨터 승" << endl;
        else if (nPlayer == 1)
            cout << "바위 : 플레이어" << endl << "무승부" << endl;
        else
            cout << "보 : 플레이어" << endl << "플레이어 승" << endl;
    }
    else
    {
        cout << "컴 : 보 vs ";

        if (nPlayer == 0)
            cout << "가위 : 플레이어" << endl << "플레이어 승" << endl;
        else if (nPlayer == 1)
            cout << "바위 : 플레이어" << endl << "컴퓨터 승" << endl;
        else
            cout << "보 : 플레이어" << endl << "무승부" << endl;
    }
    */
    return 0;
}



// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
