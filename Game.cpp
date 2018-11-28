#include <list>


#include "Dealer.cpp"
#include "Record.cpp"
#include "Rule.cpp"
#include "Settings.cpp"
#include "Table.cpp"

class Game{
private:
    Dealer* dealer;     //荷官
    Record* record;     //记录本
    Rule* rule;         //规则
    Table* table;       //牌桌，用于显示
    Settings* settings; //全局设置
    list<Card*> *Card_box;   //一盒牌
    list<Player*> *four_players; //一桌选手
    // Timer timer;    //计时器
public:
    Game();     //构造函数
    ~Game();    //析构函数
    Game start();    //开始游戏
    list<Card*> *CardBoxInit(); //初始化牌盒
    list<Player*> *PlayersInit();  //邀请所有玩家
    Game stop();     //结束
    Game pause();    //暂停
    Game resume();   //恢复
    void quit();     //退出
    Game save();     //保存游戏
    Game setters_and_getters();

};

//构造函数
Game::Game(){
    //new游戏所有需要元素
    dealer  = new Dealer;
    record = new Record;
    rule = new Rule;
    table = new Table;
    settings = new Settings;
    this -> Card_box = CardBoxInit();
    this -> four_players = PlayersInit();
}
//析构函数
Game::~Game(){
    delete dealer;
    delete record;
    delete rule;
    delete table;
    delete settings;
    delete Card_box;
    delete four_players;
}
//开始游戏
Game Game::start(){
}

//初始化牌盒
 list <Card*> * Game::CardBoxInit() {
    list<Card*> *poker = new list<Card*>;
    //生成四种花色
    Color * spade = new Color(1, "S"); //黑桃
    Color * heart = new Color(2, "H"); //红桃
    Color * club = new Color(3, "C"); //梅花
    Color * diamond = new Color(4, "D"); //方块

    for (int i = 2; i <= 14; i++) {
        string face_buffer;
        if (i == 11) face_buffer = "J";
        else if (i == 12) face_buffer = "Q";
        else if (i == 13) face_buffer = "K";
        else if (i == 14) face_buffer = "A";
        else face_buffer=to_string(i);

        poker -> push_back(new Card(spade, face_buffer, i, 0));
        poker -> push_back(new Card(heart, face_buffer, i, 0));
        poker -> push_back(new Card(club, face_buffer, i, 0));
        poker -> push_back(new Card(diamond, face_buffer, i, 0));
    }
    return poker;
}
//初始化参赛选手
list <Player*> * Game::PlayersInit() {
    list <Player*> * four_players_buffer = new list <Player*> [4];
    return four_players_buffer;
}
//结束游戏
Game Game::stop(){

}
//暂停
Game Game::pause(){

}
//恢复
Game Game::resume(){

}
//退出
void Game::quit(){

}
//保存游戏
Game Game::save(){

}
void setters_and_getters(){

}



