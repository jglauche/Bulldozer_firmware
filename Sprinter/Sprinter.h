// Tonokip RepRap firmware rewrite based off of Hydra-mmm firmware.
// Licence: GPL
#include <WProgram.h>
#include "fastio.h"
extern "C" void __cxa_pure_virtual();
void __cxa_pure_virtual(){};
void get_command();
void process_commands();

void manage_inactivity(byte debug);
void setup_acceleration();


#if Z_ENABLE_PIN > -1
#define  enable_z() WRITE(Z_ENABLE_PIN, Z_ENABLE_ON)
#define disable_z() WRITE(Z_ENABLE_PIN,!Z_ENABLE_ON)
#else
#define enable_z() ;
#define disable_z() ;
#endif
/*#if E_ENABLE_PIN > -1
#define  enable_e() WRITE(E_ENABLE_PIN, E_ENABLE_ON)
#define disable_e() WRITE(E_ENABLE_PIN,!E_ENABLE_ON)
#else
#define enable_e() ;
#define disable_e() ;
#endif
*/
void FlushSerialRequestResend();
void ClearToSend();

void get_coordinates();
void prepare_move();
void linear_move(unsigned long steps_remaining[]);
void do_step(int axis);
void kill(byte debug);

