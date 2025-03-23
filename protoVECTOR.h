#ifndef PROTOVECTOR_H
#define PROTOVECTOR_H
#include <Arduino.h>
#include <ctype.h>
#include <formatfloat.h>
class protoVECTOR{
private:
  formatfloat formatter;
  static const int size=100;
  static const float null_float=0.0000;
  String null_string="null";
  static const char null_char='*';
  static const int null_int=000;
  float vector_float[size];
  String vector_string[size];
  char vector_char[size];
  int vector_int[size];
public:
    protoVECTOR();
    int vector_size();
    float empty_float();
    float front_float();
    float back_float();
    float get_float(int index);
    void set_float(int index, float value);
    void clear_float(int index);
    void push_float(float value);
    void sort_float();
    void empty_vector_float();
    void read_vector_float();
    String empty_string();
    String front_string();
    String back_string();
    String get_string(int index);
    void set_string(int index, String input);
    void clear_string(int index);
    void sort_string();
    void push_string(String input);
    void empty_vector_string();
    void read_vector_string();
    char emtpy_char();
    char front_char();
    char back_char();
    char get_char(int index);
    void set_char(int index, char input);
    void clear_char(int index);
    void empty_vector_char();
    void push_char(char input);
    void sort_char();
    int empty_int();
    int front_int();
    int back_int();
    int get_int(int index);
    void set_int(int index, int input);
    void clear_int(int index);
    void empty_vector_int();
    void push_int(int input);
    void sort_int();

};
#endif
