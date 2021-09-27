/*
- Belongs to the project: CGraph
- Developed by the team: DrWho Labs
- Type of licence: GNU General Public License v3.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include "main.h"

/*
Black \033[0;30m
Red \033[0;31m
Green \033[0;32m
Yellow \033[0;33m
Blue \033[0;34m
Purple \033[0;35m
Cyan \033[0;36m
White \033[0;37m
*/

int main(int argc, char *argv[]) {
  banner(); //displays the banner
  return 0;
}

void banner() {
  printf("\n\n\t\033[0;33m888888ba                                                 dP\n");
  printf("\t88    `8b                                                88\n");
  printf("\t88     88 .d8888b. .d8888b. 88d888b. dP    dP 88d888b. d8888P .d8888b. 88d888b.\n");
  printf("\t88     88 88ooood8 88'  `'' 88'  `88 88    88 88'  `88   88   88'  `88 88'  `88\n");
  printf("\t88    .8P 88.  ... 88.  ... 88       88.  .88 88.  .88   88   88.  .88 88\n");
  printf("\t8888888P  `88888P' `88888P' dP       `8888P88 88Y888P'   dP   `88888P' dP\n");
  printf("\t                                          .88 88\n");
  printf("\t                                      d8888P  dP\033[0;37m      https://github.com/drwholabs\n\n\n");
  printf("\t\t--- Developed by DrWho Labs ---      #============================================#\n");
  printf("\t\t\t--- CGraph {\033[0;33m1.0.0#dev\033[0;37m} ---   ||                                          ||\n\n");
}
