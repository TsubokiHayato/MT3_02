#include "Slime.h"

void Slime::Initialize() {

	MassPoint LeftTop({ -1.0f,  1.0f }); // ����
	MassPoint RightTop({ 1.0f,  1.0f }); // �E��
	MassPoint LeftBottom({ -1.0f, -1.0f }); // ����
	MassPoint RightBottom({ 1.0f, -1.0f }); // �E��


	Spring spring1(&LeftTop, &RightTop);
	Spring spring2(&LeftTop, &LeftBottom);
	Spring spring2(&LeftTop, &RightBottom);


}

void Slime::Update() {
	// �d�͉����x
	gravityAcceleration = MASS * GRAVITY;

	// �͂̍��v
	totalForce = springForce + gravityAcceleration;
	velocity = totalForce * deltaTime / MASS;

// ���̋���
distance = Distance(p1->GetPosition(), p2->GetPosition());

}