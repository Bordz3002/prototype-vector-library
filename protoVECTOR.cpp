#include "protoVECTOR.h"
//CONSTRUCTOR
protoVECTOR::protoVECTOR(){
    for(int i=0; i<size; i++){
      vector_float[i]=null_float;
      vector_string[i]=null_string;
      vector_char[i]=null_char;
      vector_int[i]=null_int;
    }
}
//FLOAT VECTOR FUNCTION DEFINITON
//VECTOR SIZE
int protoVECTOR::vector_size(){
  return size;
}
//NULL FLOAT
float protoVECTOR::empty_float(){
  return 0.0000;
}
//FRONT FLOAT
float protoVECTOR::front_float(){
  return vector_float[0];
}
//BACK FLOAT
float protoVECTOR::back_float(){
    for(int i=0; i<size; i++){
      if(vector_float[i]!=null_float && vector_float[i+1]!=null_float){
        continue;
      }
      else if(vector_float[i]!=null_float && vector_float[i+1]==null_float){
        return vector_float[i];
      }
      else{
        break;
      }
    }
}
//GET FLOAT
float protoVECTOR::get_float(int index){
    for(int i=0; i<size; i++){
      if(i!=index){
        continue;
      }
      else{
        return vector_float[i];
        break;
      }
    }
}
//SET FLOAT
void protoVECTOR::set_float(int index, float value){
    float number=formatter.format(value);
    for(int i=0; i<size; i++){
      if(i!=index){
        continue;
      }
      else{
        vector_float[index]=number;
        break;
      }
    }
    sort_float();
}
//CLEAR FLOAT
void protoVECTOR::clear_float(int index){
    for(int i=0; i<size; i++){
      if(i!=index){
        continue;
      }
      else{
        vector_float[i]=null_float;
        break;
      }
    }
    sort_float();
}
//PUSH FLOAT
void protoVECTOR::push_float(float value){
    float number=formatter.format(value);
    for(int i=0; i<size; i++){
      if(vector_float[i]!=null_float){
        continue;
      }
      else{
        vector_float[i]=number;
        break;
      }
    }
    sort_float();
}
//SORT FLOAT
void protoVECTOR::sort_float(){
    for(int i=0; i<size; i++){
      for(int j=i+1; j<size; j++){
        if(vector_float[i]!=null_float && vector_float[j]==null_float){
          continue;
        }
        else if(vector_float[i]==null_float && vector_float[j]!=null_float){
          vector_float[i]=vector_float[j];
          vector_float[j]=null_float;
        }
        else if(vector_float[i]==null_float && vector_float[j]==null_float){
          continue;
        }
        else{
          continue;
        }
      }
    }
    for(int i=0; i<size; i++){
      for(int j=i+1; j<size; j++){
        if(vector_float[i]!=vector_float[j]){
          continue;
        }
        else{
          vector_float[j]=null_float;
        }
      }
    }
    for(int i=0; i<size; i++){
      for(int j=i+1; j<size; j++){
        if(vector_float[i]!=null_float && vector_float[j]==null_float){
          continue;
        }
        else if(vector_float[i]==null_float && vector_float[j]!=null_float){
          vector_float[i]=vector_float[j];
          vector_float[j]=null_float;
        }
        else if(vector_float[i]==null_float && vector_float[j]==null_float){
          continue;
        }
        else{
          continue;
        }
      }
    }
}
//EMPTY VECTOR FLOAT
void protoVECTOR::empty_vector_float(){
    for(int i=0; i<size; i++){
      vector_float[i]=null_float;
    }
}
//READ VECTOR FLOAT
void protoVECTOR::read_vector_float(){
  for(int i=0; i<size; i++){
    if(vector_float[i]!=null_float){
      Serial.println(vector_float[i], 4);
    }
    else{
      break;
    }
  }
}
//STRING VECTOR FUNCTION DEFINITION
//EMPTY STRING
String protoVECTOR::empty_string(){
    return null_string;
}
//FRONT STRING
String protoVECTOR::front_string(){
    return vector_string[0];
}
//BACK STRING
String protoVECTOR::back_string(){
    for(int i=0; i<size; i++){
      if(vector_string[i]!=null_string && vector_string[i+1]!=null_string){
        continue;
      }
      else if(vector_string[i]!=null_string && vector_string[i+1]==null_string){
        return vector_string[i];
      }
      else{
        break;
      }
    }
}
//GET STRING
String protoVECTOR::get_string(int index){
    for(int i=0; i<size; i++){
      if(i!=index){
        continue;
      }
      else{
        return vector_string[i];
        break;
      }
    }
}
//SET STRING
void protoVECTOR::set_string(int index, String input){
    input.toLowerCase();
    for(int i=0; i<size; i++){
      if(i!=index){
        continue;
      }
      else{
        vector_string[index]=input;
        break;
      }
    }
    sort_string();
}
//CLEAR STRING
void protoVECTOR::clear_string(int index){
    for(int i=0; i<size; i++){
      if(i!=index){
        continue;
      }
      else{
        vector_string[i]=null_string;
        break;
      }
    }
    sort_string();
}
//SORT STRING
void protoVECTOR::sort_string(){
    for(int i=0; i<size; i++){
      for(int j=i+1; j<size; j++){
        if(vector_string[i]!=null_string && vector_string[j]==null_string){
          continue;
        }
        else if(vector_string[i]==null_string && vector_string[j]!=null_string){
          vector_string[i]=vector_string[j];
          vector_string[j]=null_string;
        }
        else if(vector_string[i]==null_string && vector_string[j]==null_string){
          continue;
        }
        else{
          continue;
        }
      }
    }
    for(int i=0; i<size; i++){
      for(int j=i+1; j<size; j++){
        if(vector_string[i]!=vector_string[j]){
          continue;
        }
        else{
          vector_string[j]=null_string;
        }
      }
    }
    for(int i=0; i<size; i++){
      for(int j=i+1; j<size; j++){
        if(vector_string[i]!=null_string && vector_string[j]==null_string){
          continue;
        }
        else if(vector_string[i]==null_string && vector_string[j]!=null_string){
          vector_string[i]=vector_string[j];
          vector_string[j]=null_string;
        }
        else if(vector_string[i]==null_string && vector_string[j]==null_string){
          continue;
        }
        else{
          continue;
        }
      }
    }
}
//PUSH STRING
void protoVECTOR::push_string(String input){
    input.toLowerCase();
    for(int i=0; i<size; i++){
      if(vector_string[i]!=null_string){
        continue;
      }
      else{
        vector_string[i]=input;
        break;
      }
    }
    sort_string();
}
//EMPTY VECTOR STRING
void protoVECTOR::empty_vector_string(){
    for(int i=0; i<size; i++){
      vector_string[i]=null_string;
    }
}
//READ VECTOR STRING
void protoVECTOR::read_vector_string(){
  for(int i=0; i<size; i++){
    if(vector_string[i]!=null_string){
      Serial.println(vector_string[i]);
    }
    else{
      break;
    }
  }
}
//CHAR VECTOR FUNCTION DEFINITON
//EMPTY CHAR
char protoVECTOR::emtpy_char(){
  return null_char;
}
//FRONT CHAR
char protoVECTOR::front_char(){
  return vector_char[0];
}
//BACK CHAR
char protoVECTOR::back_char(){
  for(int i=0; i<size; i++){
    if(vector_char[i]!=null_char && vector_char[i+1]!=null_char){
      continue;
    }
    else if(vector_char[i]!=null_char && vector_char[i+1]==null_char){
      return vector_char[i];
    }
    else{
      break;
    }
  }
}
//GET CHAR
char protoVECTOR::get_char(int index){
  for(int i=0; i<size; i++){
    if(i!=index){
      continue;
    }
    else{
      return vector_char[i];
      break;
    }
  }
}
//SET CHAR
void protoVECTOR::set_char(int index, char input){
  for(int i=0; i<size; i++){
    if(i!=index){
      continue;
    }
    else{
      vector_char[i]=input;
      break;
    }
  }
  sort_char();
}
//CLEAR CHAR
void protoVECTOR::clear_char(int index){
  for(int i=0; i<size; i++){
    if(i!=index){
      continue;
    }
    else{
      vector_char[i]=null_char;
      break;
    }
  }
  sort_char();
}
//EMPTY VECTOR CHAR
void protoVECTOR::empty_vector_char(){
  for(int i=0; i<size; i++){
    vector_char[i]=null_char;
  }
}
//PUSH CHAR
void protoVECTOR::push_char(char input){
  for(int i=0; i<size; i++){
    if(vector_char[i]!=null_char){
      continue;
    }
    else{
      vector_char[i]=input;
      break;
    }
  }
  sort_char();
}
//SORT VECTOR CHAR
void protoVECTOR::sort_char(){
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      if(vector_char[i]!=null_char && vector_char[j]==null_char){
        continue;
      }
      else if(vector_char[i]==null_char && vector_char[j]!=null_char){
        vector_char[i]=vector_char[j];
        vector_char[j]=null_char;
      }
      else if(vector_char[i]==null_char && vector_char[j]==null_char){
        continue;
      }
      else{
        continue;
      }
    }
  }
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      if(vector_char[i]!=vector_char[j]){
        continue;
      }
      else{
        vector_char[j]=null_char;
      }
    }
  }
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      if(vector_char[i]!=null_char && vector_char[j]==null_char){
        continue;
      }
      else if(vector_char[i]==null_char && vector_char[j]!=null_char){
        vector_char[i]=vector_char[j];
        vector_char[j]=null_char;
      }
      else if(vector_char[i]==null_char && vector_char[j]==null_char){
        continue;
      }
      else{
        continue;
      }
    }
  }
}
//INT VECTOR FUNCTION DEFINTION
//EMPTY INT
int protoVECTOR::empty_int(){
  return null_int;
}
//FRONT INT
int protoVECTOR::front_int(){
  return vector_int[0];
}
//BACK INT
int protoVECTOR::back_int(){
  for(int i=0; i<size; i++){
    if(vector_int[i]!=null_int && vector_int[i+1]!=null_int){
      continue;
    }
    else if(vector_int[i]!=null_int && vector_int[i+1]==null_int){
      return vector_int[i];
    }
    else{
      break;
    }
  }
}
//GET INT
int protoVECTOR::get_int(int index){
  for(int i=0; i<size; i++){
    if(i!=index){
      continue;
    }
    else{
      return vector_int[i];
      break;
    }
  }
}
//SET INT
void protoVECTOR::set_int(int index, int input){
  for(int i=0; i<size; i++){
    if(i!=index){
      continue;
    }
    else{
      vector_int[i]=input;
      break;
    }
  }
  sort_int();
}
//CLEAR INT
void protoVECTOR::clear_int(int index){
  for(int i=0; i<size; i++){
    if(i!=index){
      continue;
    }
    else{
      vector_int[i]=null_int;
      break;
    }
  }
  sort_int();
}
//EMPTY VECTOR INT
void protoVECTOR::empty_vector_int(){
  for(int i=0; i<size; i++){
    vector_int[i]=null_int;
  }
}
//PUSH INT
void protoVECTOR::push_int(int input){
  for(int i=0; i<size; i++){
    if(vector_int[i]!=null_int){
      continue;
    }
    else{
      vector_int[i]=input;
      break;
    }
  }
  sort_int();
}
//SORT VECTOR INT
void protoVECTOR::sort_int(){
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      if(vector_int[i]!=null_int && vector_int[j]==null_int){
        continue;
      }
      else if(vector_int[i]==null_int && vector_int[j]!=null_int){
        vector_int[i]=vector_int[j];
        vector_int[j]=null_int;
      }
      else if(vector_int[i]==null_int && vector_int[j]==null_int){
        continue;
      }
      else{
        continue;
      }
    }
  }
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      if(vector_int[i]!=vector_int[j]){
        continue;
      }
      else{
        vector_int[j]=null_int;
      }
    }
  }
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      if(vector_int[i]!=null_int && vector_int[j]==null_int){
        continue;
      }
      else if(vector_int[i]==null_int && vector_int[j]!=null_int){
        vector_int[i]=vector_int[j];
        vector_int[j]=null_int;
      }
      else if(vector_int[i]==null_int && vector_int[j]==null_int){
        continue;
      }
      else{
        continue;
      }
    }
  }
}
