#include <list>


#include "Dealer.cpp"
#include "Record.cpp"
#include "Rule.cpp"
#include "Settings.cpp"
#include "Table.cpp"

class Game{
private:
    Dealer* dealer;     //�ɹ�
    Record* record;     //��¼��
    Rule* rule;         //����
    Table* table;       //������������ʾ
    Settings* settings; //ȫ������
    list<Card*> *Card_box;   //һ����
    list<Player*> *four_players; //һ��ѡ��
    // Timer timer;    //��ʱ��
public:
    Game();     //���캯��
    ~Game();    //��������
    Game start();    //��ʼ��Ϸ
    list<Card*> *CardBoxInit(); //��ʼ���ƺ�
    list<Player*> *PlayersInit();  //�����������
    Game stop();     //����
    Game pause();    //��ͣ
    Game resume();   //�ָ�
    void quit();     //�˳�
    Game save();     //������Ϸ
    Game setters_and_getters();

};

//���캯��
Game::Game(){
    //new��Ϸ������ҪԪ��
    dealer  = new Dealer;
    record = new Record;
    rule = new Rule;
    table = new Table;
    settings = new Settings;
    this -> Card_box = CardBoxInit();
    this -> four_players = PlayersInit();
}
//��������
Game::~Game(){
    delete dealer;
    delete record;
    delete rule;
    delete table;
    delete settings;
    delete Card_box;
    delete four_players;
}
//��ʼ��Ϸ
Game Game::start(){
}

//��ʼ���ƺ�
 list <Card*> * Game::CardBoxInit() {
    list<Card*> *poker = new list<Card*>;
    //�������ֻ�ɫ
    Color * spade = new Color(1, "S"); //����
    Color * heart = new Color(2, "H"); //����
    Color * club = new Color(3, "C"); //÷��
    Color * diamond = new Color(4, "D"); //����

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
//��ʼ������ѡ��
list <Player*> * Game::PlayersInit() {
    list <Player*> * four_players_buffer = new list <Player*> [4];
    return four_players_buffer;
}
//������Ϸ
Game Game::stop(){

}
//��ͣ
Game Game::pause(){

}
//�ָ�
Game Game::resume(){

}
//�˳�
void Game::quit(){

}
//������Ϸ
Game Game::save(){

}
void setters_and_getters(){

}



