
#include <iostream>

// キャラクターの構造体

 class Player {
 public:
     int hp;
     int attack;

     
     // HPを50～100のランダム値で初期化
     void random (){
         hp = rand() % 100 + 50;
     }
 private:
     void attackDam() {
         attack = rand() % 20 + 0;
     }
 };

 class Goblin : public Player
 {
 private:
     void attackDam() {
         attack = rand() % 16 + 8;
     }
 };

 class Sraim : public Player
 {
 private:
     void attackDam() {
         attack = rand() % 10 + 0;
     }
 };


// キャラクター処理を行うクラス
 class CharacterHandling {
 public:

 };
// キャラクタクラスのメンバ変数
// キャラクターはnew/deleteでインスタンス化する

// ターン処理を行う専用クラスを定義
 class TurnProcess {
     // プレイヤーのHPが0になるか、敵が全滅するまで繰り返す
 // プレイヤーの攻撃力に０～２０のランダム値を設定
 // 各敵にそれぞれの攻撃力に0～10のランダム値を設定する
 // プライヤーが生き残っている敵から一体を選ぶ
 // 攻撃力分のダメージを与える
 // HPが0になった敵は先頭から除外
 // 生きている敵が順番に、プレイヤーに対して攻撃力分のダメージを与える
 // 全ての攻撃が終わった時点の各キャラの残りHPをコンソールに出力する
 };


 // リザルト表示
 void Result() {
     // 1.決着までのターン数
     // 2.プレイヤーが1ターンで与えた最大ダメージ値
     // 3.いずれかの敵が1ターンで与えた最大ダメージ値

}
 
int main()
{
    std::cout << "Hello World!\n";
}

