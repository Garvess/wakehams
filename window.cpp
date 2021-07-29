//To compile: g++ window.cpp `sdl2-config --cflags --libs`

#include <SDL2/SDL.h>
#include <iostream>

using namespace std;

int main( int argc, char *argv[]  ){

  SDL_Init( SDL_INIT_EVERYTHING );

  SDL_Window *window;

  window = SDL_CreateWindow( "Wakehams Data",
                             SDL_WINDOWPOS_UNDEFINED,
                             SDL_WINDOWPOS_UNDEFINED,
                             400, // window_width,
                             200, // window_height,
                             SDL_WINDOW_RESIZABLE);


  if (window == NULL){
    cout << "There was error initializing the window! " << endl
      << SDL_GetError() << endl;
  }


  SDL_Event event;
  bool running = true;

  while( running ){

    while ( SDL_PollEvent( &event ) ){
      if (event.type ==SDL_QUIT ){
        running = false;
        break;
      }
    }



  }

  SDL_Quit();
  return 0;
}
