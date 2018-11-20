/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: 2AHIF
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			Moritz Polleichtner
* Due Date:		November , 2018
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H
#include <stdlib.h>

enum CarType{
  AIXAM,JEEP,FIAT_MULTIPLA
};

enum Color{
  BLACK,SILVER,GREEN,ORANGE,BLUE,RED
};

typedef struct TestCase* Car;

enum CarType get_type(Car car);
enum Color get_color(Car car);
double get_fill_level(Car car);
double get_acceleration_rate(Car car);
double get_speed(Car car);
Car get_car(enum CarType type);
void set_acceleration_rate(Car car,double rate);
void init();
void accelerate(Car car);
#endif
