#include <kipr/wombat.h>

int main()
{
    int to_ramp = 4300; 
    int Left_turn = 1100; // left turn to ramp
    int up_ramp = 7000;   // bot goes up ramp
    int start_of_ramp = 1500; //to prepare the sensor
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
    while (gmpc(3)<start_of_ramp)
    {
        motor(0,100);
        motor(3,100);
    }
    cmpc(3);
    cmpc(0);
    while (gmpc(3)<up_ramp)
    {
        if (analog(0) > 2000)
        {   motor(0,5);        // makes robot go away from brown
         motor(3,90);
        }

        else
        {
            motor(0,90);      // makes robot go away from black
            motor(3,5);
        }}
    ao();
    return 0;
}
