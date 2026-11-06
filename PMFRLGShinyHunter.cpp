#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <windows.h>

int resets;

std:: string buttons[8] ={
    "Up",
    "Down",
    "Left",
    "Right",
    "A",
    "B",
    "Start",
    "Reset"
}; 
std:: map<std::string, char> button_map = {
    {"Up",'W'},
    {"Down",'S'},
    {"Left",'A'},
    {"Right",'D'},
    {"A",'Q'},
    {"B",'E'},
    {"Start",'G'},
    {"Reset",'H'}
};

void default_settings(){
    std:: fstream MyFile("settings.txt");
    if (MyFile.is_open() == false){
        std:: ofstream MyFile("settings.txt");
        for(int i = 0; i <= 8; i++){
            MyFile<<button_map[buttons[i]]<<std::endl;
        }
        MyFile.close();
        std:: cout<<"test";
    };

};

void save_setting(std:: string key, char value){
    for(int i; i <= 8; i++){
        std::cout<<button_map[buttons[i]];
    };
};

void read_file(){

}

void color_checker_position_setter(){

}

void change_settings(){

}

void hunt_loop(){

}

int main(){
    std:: cout<<std::endl<<"-----Pokemon fire red/leaf green shiny hunter-----"<<std::endl;
    std:: cout<<"(1) Start program"<<std::endl;
    std:: cout<<"(2) Setup program"<<std::endl;
    std:: cout<<"(3) Check settings"<<std::endl;
    default_settings();


    return 0;
}
