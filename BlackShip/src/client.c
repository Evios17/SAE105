#include <stdio.h>


//Palette de couleur
#define RESET              "\x1b[0m"
#define BLACK              "\x1b[30m"
#define RED                "\x1b[31m"
#define GREEN              "\x1b[32m"
#define YELLOW             "\x1b[33m"
#define BLUE               "\x1b[34m"
#define MAGENTA            "\x1b[35m"
#define CYAN               "\x1b[36m"
#define WHITE              "\x1b[37m"







int menu(){
  printf(BLUE "╦═══════════════════════════════╦");
  printf("‖           BlackShip           ‖");
  printf("╩═══════════════════════════════╩" RESET);
}


int main(void){
  printf("Hello World !");

  return 0;
}