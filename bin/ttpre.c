/* Copyright (C) 2018  Curtis McEnroe <june@causal.agency>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void put(const char *tag, char ch) {
	if (tag) printf("<%s>", tag);
	switch (ch) {
		break; case '&': printf("&amp;");
		break; case '<': printf("&lt;");
		break; case '>': printf("&gt;");
		break; default:  printf("%c", ch);
	}
	if (tag) printf("</%s>", tag);
}

static void push(char ch) {
	static char q[3];
	if (q[1] == '\b' && q[0] == '_') {
		put("i", q[2]);
		memset(q, 0, 3);
	} else if (q[1] == '\b' && q[0] == q[2]) {
		put("b", q[2]);
		memset(q, 0, 3);
	} else if (q[0]) {
		put(NULL, q[0]);
	}
	memmove(q, &q[1], 2);
	q[2] = ch;
}

int main() {
	printf("<pre>");
	char ch;
	while (EOF != (ch = getchar_unlocked())) push(ch);
	push('\0'); push('\0'); push('\0');
	printf("</pre>\n");
	return EXIT_SUCCESS;
}
