#include <iostream>
#include "template.h"

//---------- disp 関数の関数テンプレートの宣言と定義 ----------

// template はテンプレートを表すキーワード
//template<class T> // class , typename T は仮の型 仮引数は複数も可能
//void disp(T value) {
//	std::cout << value << std::endl;
//}
//template<class T>
//void Data<T>::set(T data) {
//	value_ = data;
//}
//template<class T>
//T Data<T>::get() const {
//	return value_;
//}

// int 型で利用する事を予め明示しておく
//template void disp<int>(int value);