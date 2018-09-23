/*
 * sunrise.c
 *
 *  Created on: 22 Sep 2018
 *      Author: janus
 */
#include <stdio.h>

typedef struct{
	uint8_t hour;
	uint8_t minute;
}sSunrise_time;

typedef struct {
	uint8_t month;
	uint8_t day;
	sSunrise_time sunrise;
	sSunrise_time sunset;
}sSunriseTimes;

static const sSunriseTimes Sun[] = {
		{1,  1, {5, 20}, {19, 00}},
		{1, 15, {5, 30}, {19, 00}},
		{2,  1, {5, 40}, {18, 50}},
		{2, 15, {5, 50}, {18, 50}},
		{3,  1, {6, 00}, {18, 40}},
		{3, 15, {6, 10}, {18, 20}},
		{4,  1, {6, 15}, {18, 10}},
		{4, 15, {6, 20}, {17, 50}},
		{5,  1, {6, 30}, {17, 40}},
		{5, 15, {6, 40}, {17, 30}},
		{6,  1, {6, 50}, {17, 20}},
		{6, 15, {6, 50}, {17, 20}},
		{7,  1, {7, 00}, {17, 30}},
		{7, 15, {6, 50}, {17, 30}},
		{8,  1, {6, 50}, {17, 40}},
		{8, 15, {6, 30}, {17, 50}},
		{9,  1, {6, 20}, {17, 50}},
		{9, 15, {6, 00}, {18, 00}},
		{10,  1, {5, 50}, {18, 10}},
		{10, 15, {5, 30}, {18, 20}},
		{11,  1, {5, 20}, {18, 20}},
		{11, 15, {5, 10}, {18, 30}},
		{12,  1, {5, 10}, {18, 50}},
		{12, 15, {5, 00}, {19, 00}},
		{0, 0, {0, 00}, {0, 00}},
};
int sunrise_is_day(int month, int day, int hour, int minute)
{
	printf("Sunrise: Check %d-%d %02d:%02d\n", month, day, hour, minute);

	return 0;
}
