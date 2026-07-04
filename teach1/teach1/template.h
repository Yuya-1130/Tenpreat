#pragma once 
#include <iostream>

// T 型の数値を表示する関数テンプレートの宣言
template<class T>
void disp(T value) {
	std::cout << value << std::endl;
}

// 毎回 template<class T> を打たなくてもいいようにクラス内で完結させるときれいになる
template<class T>
class Data {
public:
	void set(T data) {
		value_ = data;
	}
	T get() const {
		return value_;
	}

private:
	T value_ = 0;
};