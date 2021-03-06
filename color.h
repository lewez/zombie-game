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


#ifndef COLOR_H
#define COLOR_H

#include <cinttypes>

namespace game {
	class Color {
		public:
		Color();
		Color(std::uint8_t r, std::uint8_t g, std::uint8_t b, std::uint8_t a);
		Color(std::uint8_t r, std::uint8_t g, std::uint8_t b);

		std::uint8_t GetR() const;
		std::uint8_t GetG() const;
		std::uint8_t GetB() const;
		std::uint8_t GetA() const;

		private:
		std::uint8_t m_r;
		std::uint8_t m_g;
		std::uint8_t m_b;
		std::uint8_t m_a;
	};
}

#endif
