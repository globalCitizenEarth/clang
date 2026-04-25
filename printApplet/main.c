#include "minilib.h"
int main(int argc, char *argv[]) {
	/* //Basic argument check
	if  (argc > 1) {
	//Checking for -v manually
	if(argv[1][0] == '-' && argv[1][1] == 'v') {
	tiny_putstr("printApplet v0.2.0.2 (Direct Kernel Access)\n");
	return 0;
	}
        // System Probe Flag
       if (argv[1][1] == 's') {
            probe_system();
            return 0;
	 }
      }
   }
   tiny_putstr("Usage: ./printAppletV0.2 [ -v | -s ]\n");
   return 0;
}

*/
    if (argc > 1) {
        // Check for the '-' prefix
       if (argv[1][0] == '-') {
           // Version Flag
          if (argv[1][1] == 'v') {
             tiny_putstr("printApplet v0.2.0.2 (Safeguard Mode Build)\n");
	     return 0;
	    }
	    //System  Probe Flg
           if (argv[1][1] =='s') {
		probe_system();
		return 0;
	    }
	}
    }
    tiny_putstr("Usage: ./printAppletV0.2 [-v | -s]\n");
    return 0;
 }
