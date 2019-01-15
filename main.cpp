#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

int player_x;
int player_y;
const int size = 10;
// #define size 10
string map[size];

void init(){
    for(int i=0;i<size;i++){
        if(i == 0 || i == (size-1)){
            map[i] = "##########";
        }else{
            map[i] = "#        #";
        }
    }
    player_x = 3;
    player_y = 3;
}

void update(){
    char input;
    cin >> input;
    map[player_y][player_x] = ' ';
    if(input == 'a'){
        player_x--;
    }else if(input == 'd'){
        player_x++;
    }else if(input == 's'){
        player_y++;
    }else if(input == 'w'){
        player_y--;
    }
    map[player_y][player_x] = '+';
}

void render(){
    system("clear");
    for(int i  = 0;i < size;i++){
        cout << map[i] << endl;
    }
}


int main(){
    //Init board
    init();

    while(1){
        render();
        update();
    }

    return 0;
}
