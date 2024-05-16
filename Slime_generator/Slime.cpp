#include "Slime.h"

void Slime::Initialize() {

	MassPoint LeftTop({ -1.0f,  1.0f }); // 左上
	MassPoint RightTop({ 1.0f,  1.0f }); // 右上
	MassPoint LeftBottom({ -1.0f, -1.0f }); // 左下
	MassPoint RightBottom({ 1.0f, -1.0f }); // 右下


	Spring spring1(&LeftTop, &RightTop);
	Spring spring2(&LeftTop, &LeftBottom);
	Spring spring2(&LeftTop, &RightBottom);


}

void Slime::Update() {
	// 重力加速度
	gravityAcceleration = MASS * GRAVITY;

	// 力の合計
	totalForce = springForce + gravityAcceleration;
	velocity = totalForce * deltaTime / MASS;

// 元の距離
distance = Distance(p1->GetPosition(), p2->GetPosition());

}