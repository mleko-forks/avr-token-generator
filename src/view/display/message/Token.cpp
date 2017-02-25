/*
 * Copyright (C) 2017 Patryk Kozłowski
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "Token.h"
using namespace view::display::message;

Token::Token(const String & token): Message(), token(token) { }
Token::~Token() { }

LiquidCrystal & Token::printOn(LiquidCrystal & lcd) {
	lcd.setCursor(0, 0);
	lcd.print(msg);

	lcd.setCursor((16 - token.length()) / 2, 1);
	lcd.print(token);

	return lcd;
}
