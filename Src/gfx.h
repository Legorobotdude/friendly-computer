/*
 * sim.h
 *
 *  Created on: Nov 10, 2019
 *      Author: finnn
 */

#ifndef GFX_H_
#define GFX_H_

#define SCREEN_WIDTH 480

uint8_t draw_char(uint8_t character, uint16_t pos_x, uint16_t pos_y, uint8_t* fb);
uint8_t draw_char_scaled(uint8_t character, uint16_t pos_x, uint16_t pos_y, uint8_t* fb, int16_t scale);
void draw_string(uint8_t* str, uint16_t n, uint16_t pos_x, uint16_t pos_y, uint8_t* fb);

void draw_vert_line(uint16_t pos_x, uint16_t pos_y1, uint16_t pos_y2, uint8_t* fb);
void draw_hor_line(uint16_t pos_x1, uint16_t pos_x2, uint16_t pos_y, uint8_t* fb);

#endif /* GFX_H_ */
