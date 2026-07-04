
#include <iostream>
//#include "template.h"


//---------- 同じ機能で扱う型のみ違う関数 ----------

// int 型の数値を表示する
//void disp(int value) {
//	std::cout << value << std::endl;
//}
//// float 型の数値を表示する
//void disp(float value) {
//	std::cout << value << std::endl;
//}
//// char 型の数値を表示する
//void disp(char value) {
//	std::cout << value << std::endl;
//}
//// double 型の数値を表示する
//void disp(double value) {
//	std::cout << value << std::endl;
//}
//// 文字列型の数値を表示する
//void disp(const char* value) {
//	std::cout << value << std::endl;
//}

//---------- disp 関数の関数テンプレートの宣言と定義 ----------

// template はテンプレートを表すキーワード
//template<class T> // class , typename T は仮の型
//void disp(T value) {
//	std::cout << value << std::endl;
//}

//-------------- int 型のデータを持つクラス ----------------
// 毎回 template<class T> を打たなくてもいいようにクラス内で完結させるときれいになる
//template<class T>
//class Data {
//public:
//	void set(T data);
//	T get() const;
//
//private:
//	T value_ = 0;
//};

//template<class T>
//void Data<T>::set(T data) {
//	value_ = data;
//}
//template<class T>
//T Data<T>::get() const {
//	return value_;
//}

// --------T 型の値を合成する関数テンプレート宣言、定義 ------------

template<class T>
void combine(T l, T r)
{
	T res = l + r;
	std::cout << res << std::endl;
}

//------- T を const char*型として扱う場合の関数を宣言、定義 --------
// 完全特殊化 

template<>
void combine<const char*>(const char* l, const char* r) 
{
	std::cout << l << r << std::endl;
}

int main()
{
	// -------明示的なテンプレート特殊化のMain ----------
	combine(1, 2);
	combine(2.6f, 3.1f);

	// これは出来ない
	combine("1月23日", "晴れ");

	//----------- エントリー関数 --------------
	/*Data<int> data;
	data.set(100);
	int d = data.get();

	Data<float> dataFloat;
	dataFloat.set(1.5f);
	float f = dataFloat.get();*/

	//---- 関数オーバーロードで引数の型毎に処理する関数を変える ----

	//// int 型
	//disp(2);
	//// float 型
	//disp(1.5f);
	//// char 型
	//disp('a');
	//// double 型
	//disp(2.001);
	//// 文字列型
	//disp("abcdefg");

	// ---------- 関数テンプレート ----------

	// テンプレート実引数は省略することができる,実引数の辻褄が合えば、何でも放り込める
	// <？> これを省略できる

	//disp<int>(2);

	//disp<float>(1.5f);

	return 0;
}
