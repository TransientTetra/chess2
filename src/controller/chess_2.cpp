#include "controller/chess_2.hpp"

Chess2::Chess2(const std::string &title)
: Application(title)
{}

void Chess2::run()
{
	while (window.isOpen())
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			ImGui_ImplSDL2_ProcessEvent(&event);
			bool quit = (event.type == SDL_QUIT);
			quit |= (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE
				 && event.window.windowID == SDL_GetWindowID(window.getSDLWindow()));
			if (quit)
			{
				window.setClose();
			}
		}
		window.render();
	}
}

