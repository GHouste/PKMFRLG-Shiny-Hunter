#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <windows.h>

int resets;

const std:: string buttons[8] ={
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
        for(int i = 0; i < 8; i++){
            MyFile<<button_map[buttons[i]]<<std::endl;
        }
        MyFile.close();
        std:: cout<<"test";
    };

}

void save_setting(){
    for(int i; i <= 8; i++){
        std::cout<<button_map[buttons[i]];
    };
}

void load_settings(){
    char temp;
    std:: fstream MyFile("settings.txt");
    for(int i = 0; i < 8; i++){
        if(MyFile >> temp){
        button_map[buttons[i]] = temp;
        } 
    }

    MyFile.close();
}

void change_settings(int button_id, char new_button){
    button_map[buttons[button_id]] = new_button;
    std:: cout<<std::endl<<"The "<<buttons[button_id]<<" button was changed to: "<<new_button;
}

void show_settings(){
    for(int i = 0; i < 8; i++){
        std::cout<<buttons[i]<<": "<<button_map[buttons[i]]<<std::endl;
    }
}

void color_checker_position_setter(){

}

void hunt_loop(){

}

void setting_change_message(int id){
    std:: cout<<std::endl<<"To what you want to change "<<buttons[id]<<" button? (Now it is: "<<button_map[buttons[id]]<<")"<<std::endl;
}

void setting_menu(){
    int answer;
    char new_button;
    std:: cout<<std::endl<<"-----Pokemon fire red/leaf green shiny hunter-----"<<std::endl;
    std:: cout<<std::endl<<"Which setting you want to change?        "<<std::endl;
    for(int i = 0; i < 8; i++){
        std:: cout<<"("<<i + 1<<") "<<buttons[i]<<std::endl;
    }
    std:: cin >> answer;

    switch (answer)
    {
    case 1:
        setting_change_message(0);
        std::cout<<"What new "<<buttons[0]<<" button: ";
        std::cin>>new_button;
        change_settings(0,new_button);
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    case 6:
        /* code */
        break;
    case 7:
        /* code */
        break;
    case 8:
        /* code */
        break;
    
             
    default:
    std:: cout<<std:: endl<< "ERROR!" << std:: endl;
        break;
    }
}

int main(){
    std:: cout<<std::endl<<"-----Pokemon fire red/leaf green shiny hunter-----"<<std::endl;
    std:: cout<<"(1) Start program"<<std::endl;
    std:: cout<<"(2) Setup program"<<std::endl;
    std:: cout<<"(3) Check settings"<<std::endl;
    std:: cout<<"(4) change settings"<<std::endl;
    setting_menu();


    return 0;
}
