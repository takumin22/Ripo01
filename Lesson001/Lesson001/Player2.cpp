#include "stdafx.h"
#include "Player2.h"


Player2::Player2()
{
}


Player2::~Player2()
{
}

// 初期化関数です。今回この関数は触りません。
void Player2::Init(void) {
	strength = KAI;
	/* 乱数系列の変更 */
	srand((unsigned)time(NULL));
}

// 今回この関数は触りません。
int Player2::GetCondition() {
	return strength;
}

// 今回この関数は触りません。
void Player2::SetDamage(int damege) {
	strength -= damege;
	if (strength <= 0) aliveChek = false;
}

// 今回ここを書き換えて対戦します。
// 現在は、ランダムにジャンケンの手を出しています。
// JANKEN　は　stdafx.h で定義しています。
// 戻り値はGU,CHYOKI,PAのいずれかを設定してください。
// 現在までの試合数は　GResult.size()　で取得できます。
// 勝ち数はそれぞれ Player1:p1r  Player2:p2r で取得できます。
JANKEN Player2::Attack() {
	JANKEN janken[] = { GU,CHYOKI,PA };

	return janken[rand() % 3];
}
