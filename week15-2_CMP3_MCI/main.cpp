#include "CMP3_MCI.h" ///�O�o�n�����޸��A����Ψ��A��
#include <stdio.h>
CMP3_MCI myMP3; ///�ŧi�@���ܼơA�W�r�s�� myMP3
int main()
{
    myMP3.Load("Bling.mp3");
    myMP3.Play();

    int a; ///�����d��A�{�����n�ֳt����
    scanf("%d", &a);
}
