#include <windows.h>
#include <GL/glut.h>
int main()
{
    PlaySound("Bling Bang Bang Born.wav", NULL, SND_SYNC);
    PlaySound("mykbeat.wav", NULL, SND_SYNC);
    ///等待波玩音樂，才結束
    ///找wav檔
    PlaySound("do.wav", NULL, SND_SYNC);
    PlaySound("re.wav", NULL, SND_SYNC);
    PlaySound("mi.wav", NULL, SND_SYNC);
    PlaySound("fa.wav", NULL, SND_SYNC);
}
