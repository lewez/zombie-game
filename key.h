/* MIT License

Copyright (c) 2019 Lewis Clark

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE. */


#ifndef KEYCODE_H
#define KEYCODE_H

#include <SDL2/SDL.h>

namespace game {
	enum Key {
		KEY_0 = SDL_SCANCODE_0,
		KEY_1 = SDL_SCANCODE_1,
		KEY_2 = SDL_SCANCODE_2,
		KEY_3 = SDL_SCANCODE_3,
		KEY_4 = SDL_SCANCODE_4,
		KEY_5 = SDL_SCANCODE_5,
		KEY_6 = SDL_SCANCODE_6,
		KEY_7 = SDL_SCANCODE_7,
		KEY_8 = SDL_SCANCODE_8,
		KEY_9 = SDL_SCANCODE_9,
		KEY_A = SDL_SCANCODE_A,
		KEY_B = SDL_SCANCODE_B,
		KEY_C = SDL_SCANCODE_C,
		KEY_D = SDL_SCANCODE_D,
		KEY_E = SDL_SCANCODE_E,
		KEY_F = SDL_SCANCODE_F,
		KEY_G = SDL_SCANCODE_G,
		KEY_H = SDL_SCANCODE_H,
		KEY_I = SDL_SCANCODE_I,
		KEY_J = SDL_SCANCODE_J,
		KEY_K = SDL_SCANCODE_K,
		KEY_L = SDL_SCANCODE_L,
		KEY_M = SDL_SCANCODE_M,
		KEY_N = SDL_SCANCODE_N,
		KEY_O = SDL_SCANCODE_O,
		KEY_P = SDL_SCANCODE_P,
		KEY_Q = SDL_SCANCODE_Q,
		KEY_R = SDL_SCANCODE_R,
		KEY_S = SDL_SCANCODE_S,
		KEY_T = SDL_SCANCODE_T,
		KEY_U = SDL_SCANCODE_U,
		KEY_V = SDL_SCANCODE_V,
		KEY_W = SDL_SCANCODE_W,
		KEY_X = SDL_SCANCODE_X,
		KEY_Y = SDL_SCANCODE_Y,
		KEY_Z = SDL_SCANCODE_Z
	};
}

#endif
