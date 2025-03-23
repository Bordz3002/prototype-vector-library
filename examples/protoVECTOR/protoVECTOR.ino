//vector size can be changed, on line 7
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
protoVECTOR(){
    for(int i=0; i<size; i++){
      vector_float[i]=null_float;
      vector_string[i]=null_string;
      vector_char[i]=null_char;
      vector_int[i]=null_int;
    }
}
//FLOAT VECTOR FUNCTION DEFINITON
//VECTOR SIZE
int vector_size(){
  return size;
}
//NULL FLOAT
float empty_float(){
  return 0.0000;
}
//FRONT FLOAT
float front_float(){
  return vector_float[0];
}
//BACK FLOAT 
float back_float(){
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
float get_float(int index){
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
void set_float(int index, float value){
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
void clear_float(int index){
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
void push_float(float value){
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
void sort_float(){
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
void empty_vector_float(){
    for(int i=0; i<size; i++){
      vector_float[i]=null_float;
    }
}
//READ VECTOR FLOAT
void read_vector_float(){
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
String empty_string(){
    return null_string;
}
//FRONT STRING 
String front_string(){
    return vector_string[0];
}
//BACK STRING
String back_string(){
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
String get_string(int index){
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
void set_string(int index, String input){
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
void clear_string(int index){
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
void sort_string(){
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
void push_string(String input){
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
void empty_vector_string(){
    for(int i=0; i<size; i++){
      vector_string[i]=null_string;
    }
}
//READ VECTOR STRING
void read_vector_string(){
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
char emtpy_char(){
  return null_char;
}
//FRONT CHAR  
char front_char(){
  return vector_char[0];
}
//BACK CHAR
char back_char(){
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
char get_char(int index){
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
void set_char(int index, char input){
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
void clear_char(int index){
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
void empty_vector_char(){
  for(int i=0; i<size; i++){
    vector_char[i]=null_char;
  }
}
//PUSH CHAR
void push_char(char input){
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
void sort_char(){
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
int empty_int(){
  return null_int;
}
//FRONT INT
int front_int(){
  return vector_int[0];
}
//BACK INT
int back_int(){
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
int get_int(int index){
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
void set_int(int index, int input){
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
void clear_int(int index){
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
void empty_vector_int(){
  for(int i=0; i<size; i++){
    vector_int[i]=null_int;
  }
}
//PUSH INT
void push_int(int input){
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
void sort_int(){
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
};
protoVECTOR vector;
void setup(){
  Serial.begin(2000000);
  vector.push_string("hello world");
  for(int i=0; i<10; i++){
    vector.push_string("hello world");
  }
  for(int i=0; i<vector.vector_size(); i++){
    if(vector.get_string(i)!=vector.empty_string()){
      Serial.println(vector.get_string(i));
    }
    else{
      break;
    }
  }
}
void loop(){

}