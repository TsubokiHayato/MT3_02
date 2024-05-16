#include <Novice.h>
#include<Slime.h>
#include<math.h>

#include<vector>
#include<Vector2.h>

// 長さ
float Length(Vector2 vector)
{
	
	return std::sqrtf(vector.x * vector.x + vector.y * vector.y);
}

// 距離
float Distance(Vector2 lhs, Vector2 rhs)
{
	Vector2 distance = lhs - rhs;
	return Length(distance);
}

// 正規化
void Normalize(Vector2 vector)
{
	float sq = Length(vector);
	// 0除算は行わない
	if (sq == 0) return;
	vector.x /= sq;
	vector.y /= sq;
	
}

const char kWindowTitle[] = "学籍番号";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	


	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
