#include <kipr/wombat.h>

int main()
{
    int to_ramp = 4300; 
    int Left_turn = 1100;
    int up_ramp = 7000;   // bot goes up ramp
    printf("Project S.C.R.U.B. Activated\n");  // Srcubs are starting
    cmpc(3);
    cmpc(0);
    while (gmpc(3)<to_ramp)
    {
        motor(0,100);
        motor(3,100);
    }
    cmpc(3);
    cmpc(0);
    while(gmpc(3)<Left_turn)
    {
        motor(0,-100);
        motor(3,100);
    }
    cmpc(3);
    cmpc(0);
    while (gmpc(3)<up_ramp)
    {
        motor(0,100);
        motor(3,100);
    }
    ao();
    return 0;
}
