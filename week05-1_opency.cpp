#include <opencv/highgui.h>
int main()
{
    ///�j�gI�A�p�gpl (Intel performance library)
    IplImage * img = cvLoadImage("c:/micky.jpg");
    ///�j�g��Image ���ɽЩ�b c:��ؿ��̡Amicky.jpg
    cvShowImage("week05 micky", img); ///�q��(��ӰѼƤ��T�w)
    cvWaitKey(0); ///�����N��A�A�~��
}
